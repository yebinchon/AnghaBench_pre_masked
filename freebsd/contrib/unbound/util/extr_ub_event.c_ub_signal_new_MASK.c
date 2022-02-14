
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_event_base {int dummy; } ;
struct ub_event {int dummy; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct ub_event_base*) ;
 struct ub_event* FUNC_1 (struct event*) ;
 int FUNC_2 (void (*) (int,short,void*)) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,struct event*) ;
 scalar_t__ FUNC_5 (struct event*,int ,int,void (*) (int,short,void*),void*) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*,int,int ,void*) ;

struct ub_event*
FUNC_8(struct ub_event_base* VAR_0, int VAR_1,
 void (*VAR_2)(int, short, void*), void* VAR_3)
{
 struct event *VAR_4 = (struct event*)FUNC_3(1, sizeof(struct event));

 if (!VAR_4)
  return ((void*)0);


 FUNC_7(VAR_4, VAR_1, FUNC_2(VAR_2), VAR_3);
 if (FUNC_4(FUNC_0(VAR_0), VAR_4) != 0) {
  FUNC_6(VAR_4);
  return ((void*)0);
 }






 return FUNC_1(VAR_4);
}
