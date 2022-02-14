
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_12__ {int CmdSN; } ;
struct TYPE_13__ {TYPE_1__ bhs; } ;
struct TYPE_14__ {TYPE_2__ ipdu; } ;
struct TYPE_16__ {TYPE_3__ pdu; int * ccb; } ;
typedef TYPE_5__ pduq_t ;
struct TYPE_15__ {int cmd; } ;
struct TYPE_17__ {TYPE_4__ sn; int flags; int isc; } ;
typedef TYPE_6__ isc_session_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,int,int *,int *) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (int,char*,scalar_t__,scalar_t__) ;

int
FUNC_6(isc_session_t *VAR_1)
{
     pduq_t *VAR_2;
     u_int VAR_3, VAR_4, VAR_5;

     FUNC_1(8);
     VAR_3 = VAR_5 = 0;
     VAR_1->flags |= VAR_0;
     while((VAR_2 = FUNC_2(VAR_1)) != ((void*)0)) {
   VAR_3++;
   if(VAR_2->ccb != ((void*)0)) {
        FUNC_0(VAR_1, 0, 0x28, VAR_2->ccb, ((void*)0));
        VAR_4 = FUNC_3(VAR_2->pdu.ipdu.bhs.CmdSN);
        if(VAR_5==0 || (VAR_5 > VAR_4))
      VAR_5 = VAR_4;
        FUNC_5(2, "last=%x n=%x", VAR_5, VAR_4);
   }
   FUNC_4(VAR_1->isc, VAR_2);
     }
     VAR_1->flags &= ~VAR_0;
     return VAR_3? VAR_5: VAR_1->sn.cmd;
}
