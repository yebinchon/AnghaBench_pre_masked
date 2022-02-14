
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_2__ {int size; int result; int type; } ;
struct hpt_iop_request_set_config {TYPE_1__ header; } ;
struct hpt_iop_request_header {int dummy; } ;
struct hpt_iop_hba {struct hpt_iop_request_set_config* ctlcfg_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct hpt_iop_hba*,struct hpt_iop_request_set_config*,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hpt_iop_hba *VAR_2,
    struct hpt_iop_request_set_config *VAR_3)
{
 struct hpt_iop_request_set_config *VAR_4;

 if (!(VAR_4 = VAR_2->ctlcfg_ptr))
  return -1;

 FUNC_2((u_int8_t *)VAR_4 + sizeof(struct hpt_iop_request_header),
  (u_int8_t *)VAR_3 + sizeof(struct hpt_iop_request_header),
  sizeof(struct hpt_iop_request_set_config) -
   sizeof(struct hpt_iop_request_header));

 VAR_4->header.type = VAR_0;
 VAR_4->header.size = sizeof(struct hpt_iop_request_set_config);
 VAR_4->header.result = VAR_1;

 if (FUNC_1(VAR_2, VAR_4, 20000)) {
  FUNC_0(("hptiop: set config send cmd failed"));
  return -1;
 }

 return 0;
}
