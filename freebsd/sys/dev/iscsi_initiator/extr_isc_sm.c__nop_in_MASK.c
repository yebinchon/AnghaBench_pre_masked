
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ maxcmd; } ;
struct TYPE_20__ {int mbz; TYPE_2__ sn; } ;
struct TYPE_23__ {int I; int F; int opcode; } ;
struct TYPE_21__ {int itt; int ttt; } ;
struct TYPE_16__ {TYPE_5__ nop_out; TYPE_8__ bhs; TYPE_6__ nop_in; } ;
struct TYPE_19__ {scalar_t__ ds_len; TYPE_1__ ipdu; } ;
struct TYPE_18__ {TYPE_4__ pdu; } ;
typedef TYPE_3__ pduq_t ;
typedef TYPE_4__ pdu_t ;
typedef TYPE_5__ nop_out_t ;
typedef TYPE_6__ nop_in_t ;
struct TYPE_22__ {int flags; int isc; int rsp; int sid; } ;
typedef TYPE_7__ isc_session_t ;
typedef TYPE_8__ bhs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int,char*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(isc_session_t *VAR_2, pduq_t *VAR_3)
{
     pdu_t *VAR_4 = &VAR_3->pdu;
     nop_in_t *VAR_5 = &VAR_4->ipdu.nop_in;
     bhs_t *VAR_6 = &VAR_4->ipdu.bhs;

     FUNC_0(8);

     FUNC_6(5, "itt=%x ttt=%x", FUNC_1(VAR_5->itt), FUNC_1(VAR_5->ttt));
     if(VAR_5->itt == -1) {
   if(VAR_4->ds_len != 0) {




        FUNC_8("%d] dslen not zero", VAR_2->sid);
   }
   if(VAR_5->ttt != -1) {
        nop_out_t *VAR_7;



        VAR_6->opcode = VAR_0;
        VAR_6->I = 1;
        VAR_6->F = 1;





        VAR_7 = &VAR_4->ipdu.nop_out;
        VAR_7->sn.maxcmd = 0;
        FUNC_4(VAR_7->mbz, 0, sizeof(VAR_7->mbz));
        (void)FUNC_3(VAR_2, VAR_3);
        return;
   }





     } else
     if(VAR_5->ttt == -1) {



   if(VAR_5->itt != -1) {
   }
     }



     FUNC_5(VAR_2->isc, VAR_3);
     return;
}
