
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sns_gid_xx_rsp_t ;
struct TYPE_10__ {int ct_bcnt_resid; int snscb_rblen; int snscb_sblen; int snscb_port_type; scalar_t__ snscb_flags; scalar_t__ snscb_area; scalar_t__ snscb_domain; int snscb_mword_div_2; void* snscb_cmd; int * snscb_addr; void* ct_cmd_resp; int ct_fcs_subtype; int ct_fcs_type; int ct_revision; } ;
typedef TYPE_1__ sns_gid_pt_req_t ;
typedef int rq ;
typedef int ispsoftc_t ;
struct TYPE_11__ {int* isp_scratch; scalar_t__ isp_scanscratch; int isp_scdma; } ;
typedef TYPE_2__ fcparam ;
typedef TYPE_1__ ct_hdr_t ;
typedef int ct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (int *,int,int,int) ;
 scalar_t__ FUNC_10 (int *,int,int,int ) ;
 int FUNC_11 (int *,int *,int *,int ) ;
 int FUNC_12 (int *,int ,char*,...) ;
 int FUNC_13 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_15(ispsoftc_t *VAR_14, int VAR_15)
{
 fcparam *VAR_16 = FUNC_4(VAR_14, VAR_15);
 ct_hdr_t VAR_17;
 sns_gid_pt_req_t VAR_18;
 uint8_t *VAR_19 = VAR_16->isp_scratch;

 FUNC_12(VAR_14, VAR_4, "Chan %d requesting GID_PT", VAR_15);
 if (FUNC_5(VAR_14, VAR_15)) {
  FUNC_12(VAR_14, VAR_5, VAR_13);
  return (-1);
 }

 if (FUNC_8(VAR_14)) {

  FUNC_7(&VAR_17, sizeof (VAR_17));
  VAR_17.ct_revision = VAR_2;
  VAR_17.ct_fcs_type = VAR_1;
  VAR_17.ct_fcs_subtype = VAR_0;
  VAR_17.ct_cmd_resp = VAR_11;
  VAR_17.ct_bcnt_resid = (VAR_3 - 16) >> 2;
  FUNC_13(VAR_14, &VAR_17, (ct_hdr_t *)VAR_19);
  VAR_19[sizeof(VAR_17)] = 0x7f;
  VAR_19[sizeof(VAR_17)+1] = 0;
  VAR_19[sizeof(VAR_17)+2] = 0;
  VAR_19[sizeof(VAR_17)+3] = 0;

  if (FUNC_9(VAR_14, VAR_15, sizeof(VAR_17) + sizeof(uint32_t), VAR_3)) {
   FUNC_6(VAR_14, VAR_15);
   return (-1);
  }
 } else {

  FUNC_7(&VAR_18, VAR_12);
  VAR_18.snscb_rblen = VAR_3 >> 1;
  VAR_18.snscb_addr[VAR_7] = FUNC_0(VAR_16->isp_scdma);
  VAR_18.snscb_addr[VAR_8] = FUNC_1(VAR_16->isp_scdma);
  VAR_18.snscb_addr[VAR_9] = FUNC_2(VAR_16->isp_scdma);
  VAR_18.snscb_addr[VAR_10] = FUNC_3(VAR_16->isp_scdma);
  VAR_18.snscb_sblen = 6;
  VAR_18.snscb_cmd = VAR_11;
  VAR_18.snscb_mword_div_2 = VAR_6;
  VAR_18.snscb_port_type = 0x7f;
  VAR_18.snscb_domain = 0;
  VAR_18.snscb_area = 0;
  VAR_18.snscb_flags = 0;
  FUNC_14(VAR_14, &VAR_18, (sns_gid_pt_req_t *)VAR_19);

  if (FUNC_10(VAR_14, VAR_15, sizeof(VAR_18), VAR_6)) {
   FUNC_6(VAR_14, VAR_15);
   return (-1);
  }
 }

 FUNC_11(VAR_14, (sns_gid_xx_rsp_t *)VAR_19,
     (sns_gid_xx_rsp_t *)VAR_16->isp_scanscratch, VAR_6);
 FUNC_6(VAR_14, VAR_15);
 return (0);
}
