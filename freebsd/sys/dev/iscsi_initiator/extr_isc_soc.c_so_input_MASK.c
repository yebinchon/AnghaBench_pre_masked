
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int bhs; } ;
struct TYPE_14__ {TYPE_1__ ipdu; } ;
struct TYPE_16__ {int len; TYPE_2__ pdu; } ;
typedef TYPE_4__ pduq_t ;
struct TYPE_15__ {int t_recv; int nrecv; } ;
struct TYPE_17__ {TYPE_3__ stats; int bhs; int isc; } ;
typedef TYPE_5__ isc_session_t ;
typedef int bhs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_7(isc_session_t *VAR_2)
{
     pduq_t *VAR_3;
     int VAR_4;

     FUNC_1(8);



     VAR_4 = FUNC_5(VAR_2);
     if(VAR_4 == 0) {



   VAR_3 = FUNC_4(VAR_2->isc, VAR_0);
   if(VAR_3 == ((void*)0)) {
        FUNC_0(2, "out of pdus, wait");
        VAR_3 = FUNC_4(VAR_2->isc, VAR_1);
   }
   VAR_3->pdu.ipdu.bhs = VAR_2->bhs;
   VAR_3->len = sizeof(bhs_t);
   VAR_4 = FUNC_6(VAR_2, VAR_3);
   if(VAR_4 != 0) {
        VAR_4 += 0x800;


   }
   else {
        VAR_2->stats.nrecv++;
        FUNC_2(&VAR_2->stats.t_recv);
        FUNC_3(VAR_2, VAR_3);
   }
     }
     return VAR_4;
}
