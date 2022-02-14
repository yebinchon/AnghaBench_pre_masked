
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct event*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct event*,int ,int,int ,struct event*) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,char const*,int,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_10(int VAR_8, char **VAR_9)
{
 struct event VAR_10;
 const char *VAR_11 = "test string";
 evutil_socket_t VAR_12[2];
 if (FUNC_6(VAR_0, VAR_4, 0, VAR_12) == -1)
  return (1);


 if (FUNC_7(VAR_12[0], VAR_11, (int)FUNC_9(VAR_11)+1, 0) < 0)
  return (1);
 FUNC_8(VAR_12[0], VAR_3);


 FUNC_4();


 FUNC_5(&VAR_10, VAR_12[1], VAR_1 | VAR_2, VAR_5, &VAR_10);

 FUNC_2(&VAR_10, &VAR_7);

 FUNC_3();

 return (VAR_6);
}
