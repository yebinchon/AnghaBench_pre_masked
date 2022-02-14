
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config {int dummy; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct event*,int *) ;
 int FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event_base*) ;
 struct event_base* FUNC_3 (struct event_config*) ;
 int FUNC_4 (struct event_config*) ;
 struct event_config* FUNC_5 () ;
 int FUNC_6 (struct event_config*,int ) ;
 struct event* FUNC_7 (struct event_base*,int ,int,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,char const*,int,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (char const*) ;
 int VAR_7 ;

int
FUNC_13(int VAR_8, char **VAR_9)
{
 struct event_base *VAR_10;
 struct event_config *VAR_11;
 struct event *VAR_12;
 const char *VAR_13 = "test string";
 evutil_socket_t VAR_14[2];




 VAR_11 = FUNC_5();
 FUNC_6(VAR_11, VAR_2);
 VAR_10 = FUNC_3(VAR_11);
 FUNC_4(VAR_11);
 if (!VAR_10) {

  return 0;
 }


 if (FUNC_9(VAR_0, VAR_5, 0, VAR_14) == -1)
  return (1);


 if (FUNC_10(VAR_14[0], VAR_13, (int)FUNC_12(VAR_13)+1, 0) < 0)
  return (1);
 FUNC_11(VAR_14[0], VAR_4);


 VAR_12 = FUNC_7(VAR_10, VAR_14[1], VAR_1 | VAR_3, VAR_6, FUNC_8());
 FUNC_0(VAR_12, &VAR_7);
 FUNC_1(VAR_10);


 FUNC_2(VAR_10);
 return 0;
}
