
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int trans_t ;
struct TYPE_6__ {int bhs; } ;
struct TYPE_7__ {TYPE_1__ ipdu; } ;
typedef TYPE_2__ pdu_t ;
struct TYPE_8__ {int cmd; int reason; int CID; } ;
typedef TYPE_3__ logout_req_t ;
typedef int isess_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static trans_t
FUNC_4(isess_t *VAR_2)
{
     pdu_t VAR_3;
     logout_req_t *VAR_4 = (logout_req_t *)&VAR_3.ipdu.bhs;

     FUNC_1(&VAR_3, sizeof(pdu_t));
     VAR_4->cmd = VAR_0| 0x40;
     VAR_4->reason = FUNC_0(7) | 0;
     VAR_4->CID = FUNC_2(1);

     return FUNC_3(VAR_2, &VAR_3, VAR_1);
}
