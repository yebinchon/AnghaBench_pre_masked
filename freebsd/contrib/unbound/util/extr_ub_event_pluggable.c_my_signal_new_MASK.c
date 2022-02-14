
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ub_event_base {int dummy; } ;
struct ub_event {int * vmt; int magic; } ;
struct my_event {struct ub_event super; int ev; } ;
struct TYPE_2__ {int base; } ;


 TYPE_1__* FUNC_0 (struct ub_event_base*) ;
 int FUNC_1 (void (*) (int,short,void*)) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct my_event*) ;
 int FUNC_5 (int *,int,int ,void*) ;

__attribute__((used)) static struct ub_event*
FUNC_6(struct ub_event_base* VAR_2, int VAR_3,
 void (*VAR_4)(int, short, void*), void* VAR_5)
{
 struct my_event *VAR_6 = (struct my_event*)FUNC_2(1,
  sizeof(struct my_event));

 if (!VAR_6)
  return ((void*)0);

 FUNC_5(&VAR_6->ev, VAR_3, FUNC_1(VAR_4), VAR_5);
 if (FUNC_3(FUNC_0(VAR_2)->base, &VAR_6->ev) != 0) {
  FUNC_4(VAR_6);
  return ((void*)0);
 }
 VAR_6->super.magic = VAR_0;
 VAR_6->super.vmt = &VAR_1;
 return &VAR_6->super;
}
