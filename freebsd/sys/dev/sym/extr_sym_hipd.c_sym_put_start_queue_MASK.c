
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef TYPE_1__* hcb_p ;
typedef TYPE_2__* ccb_p ;
struct TYPE_7__ {int ccb_ba; int host_flags; } ;
struct TYPE_6__ {scalar_t__ iarb_count; scalar_t__ iarb_max; int squeueput; int istat_sem; void** squeue; int idletask_ba; TYPE_2__* last_cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 void* FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(hcb_p VAR_6, ccb_p VAR_7)
{
 u_short VAR_8;
 VAR_8 = VAR_6->squeueput + 2;
 if (VAR_8 >= VAR_3*2) VAR_8 = 0;

 VAR_6->squeue [VAR_8] = FUNC_2(VAR_6->idletask_ba);
 FUNC_0();
 VAR_6->squeue [VAR_6->squeueput] = FUNC_2(VAR_7->ccb_ba);

 VAR_6->squeueput = VAR_8;

 if (VAR_0 & VAR_1)
  FUNC_3 ("%s: queuepos=%d.\n", FUNC_4 (VAR_6), VAR_6->squeueput);





 FUNC_0();
 FUNC_1 (VAR_5, VAR_4|VAR_6->istat_sem);
}
