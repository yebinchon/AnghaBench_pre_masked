
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct ub_event {int dummy; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct ub_event_base*) ;
 struct ub_event* FUNC_1 (struct event*) ;
 int FUNC_2 (short) ;
 int FUNC_3 (void (*) (int,short,void*)) ;
 scalar_t__ FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (struct event*,int ,int,short,void (*) (int,short,void*),void*) ;
 scalar_t__ FUNC_6 (int ,struct event*) ;
 int FUNC_7 (struct event*,int,int ,int ,void*) ;
 int FUNC_8 (struct event*) ;

struct ub_event*
FUNC_9(struct ub_event_base* VAR_0, int VAR_1, short VAR_2,
 void (*VAR_3)(int, short, void*), void* VAR_4)
{
 struct event *VAR_5 = (struct event*)FUNC_4(1, sizeof(struct event));

 if (!VAR_5)
  return ((void*)0);


 FUNC_7(VAR_5, VAR_1, FUNC_2(VAR_2), FUNC_3(VAR_3), VAR_4);
 if (FUNC_6(FUNC_0(VAR_0), VAR_5) != 0) {
  FUNC_8(VAR_5);
  return ((void*)0);
 }






 return FUNC_1(VAR_5);
}
