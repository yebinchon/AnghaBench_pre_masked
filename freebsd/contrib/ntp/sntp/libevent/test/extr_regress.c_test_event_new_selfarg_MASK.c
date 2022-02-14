
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct basic_test_data {struct event_base* base; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*,int ,int) ;
 int FUNC_1 (struct event_base*) ;
 int FUNC_2 (struct event*) ;
 struct event* FUNC_3 (struct event_base*,int,int ,int ,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct basic_test_data *VAR_3 = VAR_2;
 struct event_base *VAR_4 = VAR_3->base;
 struct event *VAR_5 = FUNC_3(VAR_4, -1, VAR_0, VAR_1,
                                     FUNC_4());

 FUNC_0(VAR_5, VAR_0, 1);
 FUNC_1(VAR_4);

 FUNC_2(VAR_5);
}
