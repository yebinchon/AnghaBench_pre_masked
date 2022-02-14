
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int bhs; } ;
struct TYPE_12__ {TYPE_1__ ipdu; } ;
typedef TYPE_2__ pdu_t ;
struct TYPE_13__ {int cmd; scalar_t__ T; void* NSG; void* CSG; int CID; int tsih; int isid; } ;
typedef TYPE_3__ login_req_t ;
struct TYPE_14__ {int tsih; int isid; TYPE_5__* op; } ;
typedef TYPE_4__ isess_t ;
struct TYPE_15__ {int chapDigest; int authMethod; } ;
typedef TYPE_5__ isc_opt_t ;
typedef int authm_t ;


 int VAR_0 ;

 int VAR_1 ;


 void* VAR_2 ;



 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(isess_t *VAR_4)
{
     pdu_t VAR_5;
     login_req_t *VAR_6;
     isc_opt_t *VAR_7 = VAR_4->op;

     FUNC_1(&VAR_5, sizeof(pdu_t));
     VAR_6 = (login_req_t *)&VAR_5.ipdu.bhs;
     VAR_6->cmd = VAR_1 | 0x40;
     FUNC_4(VAR_6->isid, VAR_4->isid, 6);
     VAR_6->tsih = VAR_4->tsih;
     VAR_6->CID = FUNC_2(1);
     VAR_6->CSG = VAR_2;
     VAR_6->NSG = VAR_2;
     VAR_6->T = 0;

     switch((authm_t)FUNC_3(VAR_0, VAR_7->authMethod)) {
     case 131:
   return 0;

     case 132:
     case 130:
     case 129:
     case 128:
   return 2;

     case 133:
   if(VAR_7->chapDigest == 0)
        FUNC_0(&VAR_5, "CHAP_A=5");
   else
   if(FUNC_6(VAR_7->chapDigest, "MD5") == 0)
        FUNC_0(&VAR_5, "CHAP_A=5");
   else
   if(FUNC_6(VAR_7->chapDigest, "SHA1") == 0)
        FUNC_0(&VAR_5, "CHAP_A=7");
   else
        FUNC_0(&VAR_5, "CHAP_A=5,7");
   return FUNC_5(VAR_4, &VAR_5, VAR_3);
     }
     return 1;
}
