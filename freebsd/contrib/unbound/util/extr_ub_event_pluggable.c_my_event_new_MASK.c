
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
 int FUNC_1 (short) ;
 int FUNC_2 (void (*) (int,short,void*)) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int,int ,int ,void*) ;
 int FUNC_6 (struct my_event*) ;

__attribute__((used)) static struct ub_event*
FUNC_7(struct ub_event_base* VAR_2, int VAR_3, short VAR_4,
 void (*VAR_5)(int, short, void*), void* VAR_6)
{
 struct my_event *VAR_7 = (struct my_event*)FUNC_3(1,
  sizeof(struct my_event));

 if (!VAR_7)
  return ((void*)0);

 FUNC_5(&VAR_7->ev, VAR_3, FUNC_1(VAR_4), FUNC_2(VAR_5), VAR_6);
 if (FUNC_4(FUNC_0(VAR_2)->base, &VAR_7->ev) != 0) {
  FUNC_6(VAR_7);
  return ((void*)0);
 }
 VAR_7->super.magic = VAR_0;
 VAR_7->super.vmt = &VAR_1;
 return &VAR_7->super;
}
