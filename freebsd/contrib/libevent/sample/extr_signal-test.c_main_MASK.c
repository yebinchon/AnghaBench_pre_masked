
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int WSADATA ;
typedef int WORD ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct event*,int *) ;
 int FUNC_3 (struct event_base*) ;
 int FUNC_4 (struct event_base*) ;
 struct event_base* FUNC_5 () ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 () ;
 struct event* FUNC_8 (struct event_base*,int ,int ,int ) ;
 int VAR_1 ;

int
FUNC_9(int VAR_2, char **VAR_3)
{
 struct event *VAR_4;
 struct event_base* VAR_5;
 VAR_5 = FUNC_5();


 VAR_4 = FUNC_8(VAR_5, VAR_0, VAR_1, FUNC_7());

 FUNC_2(VAR_4, ((void*)0));

 FUNC_3(VAR_5);
 FUNC_6(VAR_4);
 FUNC_4(VAR_5);

 return (0);
}
