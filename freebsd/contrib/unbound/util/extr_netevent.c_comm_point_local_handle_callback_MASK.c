
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {scalar_t__ type; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;TYPE_1__* ev; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 short VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,struct comm_point*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,short) ;
 int FUNC_5 (struct comm_point*,int ,int ,int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(int VAR_3, short VAR_4, void* VAR_5)
{
 struct comm_point* VAR_6 = (struct comm_point*)VAR_5;
 FUNC_3(VAR_6->type == VAR_2);
 FUNC_6(VAR_6->ev->base);

 if(VAR_4&VAR_1) {
  if(!FUNC_0(VAR_3, VAR_6, 1)) {
   FUNC_1(FUNC_2(VAR_6->callback));
   (void)(*VAR_6->callback)(VAR_6, VAR_6->cb_arg, VAR_0,
    ((void*)0));
  }
  return;
 }
 FUNC_4("Ignored event %d for localhdl.", VAR_4);
}
