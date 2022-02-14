
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct basic_test_data {int * pair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event*,int ,int) ;
 int FUNC_1 (struct event*,int *) ;
 int FUNC_2 (struct event*,struct event_base*,int ,int ,int ,int *) ;
 int FUNC_3 (struct event_base*) ;
 struct event_base* FUNC_4 () ;
 int FUNC_5 (struct event_base*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct basic_test_data *VAR_3 = VAR_2;
 struct event_base *VAR_4;
 struct event VAR_5;

 VAR_4 = FUNC_4();
 if (VAR_4) {
  FUNC_2(&VAR_5, VAR_4, VAR_3->pair[1], VAR_0,
        VAR_1, ((void*)0));
  FUNC_1(&VAR_5, ((void*)0));
  FUNC_3(VAR_4);
 } else {
  FUNC_6("failed to create event_base for test");
 }

 VAR_4 = FUNC_4();
 FUNC_5(VAR_4);
 FUNC_2(&VAR_5, VAR_4, 0, 0, VAR_1, ((void*)0));
 FUNC_0(&VAR_5, VAR_0, 1);
 FUNC_3(VAR_4);
end:
 ;
}
