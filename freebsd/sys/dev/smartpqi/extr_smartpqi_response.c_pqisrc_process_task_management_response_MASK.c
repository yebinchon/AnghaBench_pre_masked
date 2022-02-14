
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {size_t tag; int status; int req_pending; } ;
typedef TYPE_1__ rcb_t ;
struct TYPE_7__ {TYPE_1__* rcb; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_8__ {int resp_code; int req_id; } ;
typedef TYPE_3__ pqi_tmf_resp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;



int FUNC_3(pqisrc_softstate_t *VAR_2,
   pqi_tmf_resp_t *VAR_3)
{
 int VAR_4 = VAR_1;
 uint32_t VAR_5 = (uint32_t)VAR_3->req_id;
 rcb_t *VAR_6 = &VAR_2->rcb[VAR_5];

 FUNC_0(VAR_6->tag == VAR_5);

 FUNC_2("IN\n");

 switch (VAR_3->resp_code) {
 case 129:
 case 128:
  VAR_4 = VAR_1;
  break;
 default:
  FUNC_1("TMF Failed, Response code : 0x%x\n", VAR_3->resp_code);
  VAR_4 = VAR_0;
  break;
 }

 VAR_6->status = VAR_4;
 VAR_6->req_pending = 0;

 FUNC_2("OUT");
 return VAR_4;
}
