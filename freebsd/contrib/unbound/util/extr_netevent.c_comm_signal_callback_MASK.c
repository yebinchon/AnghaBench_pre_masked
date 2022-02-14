
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_signal {int cb_arg; int (* callback ) (int,int ) ;int base; } ;


 short VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int,int )) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_1, short VAR_2, void* VAR_3)
{
 struct comm_signal* VAR_4 = (struct comm_signal*)VAR_3;
 if(!(VAR_2 & VAR_0))
  return;
 FUNC_3(VAR_4->base);
 FUNC_0(FUNC_1(VAR_4->callback));
 (*VAR_4->callback)(VAR_1, VAR_4->cb_arg);
}
