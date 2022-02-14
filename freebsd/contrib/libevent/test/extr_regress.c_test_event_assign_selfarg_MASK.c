
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
struct basic_test_data {struct event_base* base; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*,int ,int) ;
 int FUNC_1 (struct event*,struct event_base*,int,int ,int ,int ) ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct basic_test_data *VAR_3 = VAR_2;
 struct event_base *VAR_4 = VAR_3->base;
 struct event VAR_5;

 FUNC_1(&VAR_5, VAR_4, -1, VAR_0, VAR_1,
                     FUNC_3());
 FUNC_0(&VAR_5, VAR_0, 1);
 FUNC_2(VAR_4);
}
