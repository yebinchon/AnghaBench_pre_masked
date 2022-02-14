
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_15__ {int ct_bcnt_resid; int snscb_rblen; int snscb_sblen; int snscb_mword_div_2; int snscb_portid; void* snscb_cmd; int * snscb_addr; void* ct_cmd_resp; int ct_fcs_subtype; int ct_fcs_type; int ct_revision; } ;
typedef TYPE_2__ sns_gxx_id_req_t ;
struct TYPE_14__ {scalar_t__ ct_cmd_resp; } ;
struct TYPE_16__ {scalar_t__* snscb_fc4_types; TYPE_1__ snscb_cthdr; } ;
typedef TYPE_3__ sns_gft_id_rsp_t ;
typedef int rq ;
typedef int ispsoftc_t ;
struct TYPE_17__ {int isp_scdma; int isp_use_gft_id; int * isp_scratch; } ;
typedef TYPE_4__ fcparam ;
typedef TYPE_2__ ct_hdr_t ;
typedef int ct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 TYPE_4__* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (int *,int,int,int) ;
 scalar_t__ FUNC_11 (int *,int,int,int) ;
 int FUNC_12 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_13 (int *,int ,char*,...) ;
 int FUNC_14 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_2__*,TYPE_2__*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_16(ispsoftc_t *VAR_15, int VAR_16, uint32_t VAR_17)
{
 fcparam *VAR_18 = FUNC_4(VAR_15, VAR_16);
 ct_hdr_t VAR_19;
 sns_gxx_id_req_t VAR_20;
 uint32_t *VAR_21;
 uint8_t *VAR_22 = VAR_18->isp_scratch;
 sns_gft_id_rsp_t VAR_23;
 int VAR_24, VAR_25 = -1;

 if (!VAR_18->isp_use_gft_id)
  return (VAR_25);

 FUNC_13(VAR_15, VAR_4, "Chan %d requesting GFT_ID", VAR_16);
 if (FUNC_5(VAR_15, VAR_16)) {
  FUNC_13(VAR_15, VAR_5, VAR_14);
  return (VAR_25);
 }

 if (FUNC_9(VAR_15)) {

  FUNC_8(&VAR_19, sizeof (VAR_19));
  VAR_19.ct_revision = VAR_2;
  VAR_19.ct_fcs_type = VAR_1;
  VAR_19.ct_fcs_subtype = VAR_0;
  VAR_19.ct_cmd_resp = VAR_11;
  VAR_19.ct_bcnt_resid = (VAR_12 - sizeof(VAR_19)) / 4;
  FUNC_14(VAR_15, &VAR_19, (ct_hdr_t *)VAR_22);
  VAR_21 = (uint32_t *) &VAR_22[sizeof(VAR_19)];
  FUNC_7(VAR_15, VAR_17, VAR_21);

  if (FUNC_10(VAR_15, VAR_16, sizeof(VAR_19) + sizeof(uint32_t),
      VAR_12)) {
   FUNC_6(VAR_15, VAR_16);
   return (VAR_25);
  }
 } else {

  FUNC_8(&VAR_20, VAR_13);
  VAR_20.snscb_rblen = VAR_12 >> 1;
  VAR_20.snscb_addr[VAR_7] = FUNC_0(VAR_18->isp_scdma);
  VAR_20.snscb_addr[VAR_8] = FUNC_1(VAR_18->isp_scdma);
  VAR_20.snscb_addr[VAR_9] = FUNC_2(VAR_18->isp_scdma);
  VAR_20.snscb_addr[VAR_10] = FUNC_3(VAR_18->isp_scdma);
  VAR_20.snscb_sblen = 6;
  VAR_20.snscb_cmd = VAR_11;
  VAR_20.snscb_mword_div_2 = (VAR_12 - sizeof(VAR_19)) / 4;
  VAR_20.snscb_portid = VAR_17;
  FUNC_15(VAR_15, &VAR_20, (sns_gxx_id_req_t *)VAR_22);

  if (FUNC_11(VAR_15, VAR_16, sizeof(VAR_20), VAR_12)) {
   FUNC_6(VAR_15, VAR_16);
   return (VAR_25);
  }
 }

 FUNC_12(VAR_15, (sns_gft_id_rsp_t *)VAR_22, &VAR_23);
 if (VAR_23.snscb_cthdr.ct_cmd_resp == VAR_6) {
  for (VAR_24 = 0; VAR_24 < 8; VAR_24++) {
   if (VAR_23.snscb_fc4_types[VAR_24] != 0) {
    VAR_25 = 0;
    break;
   }
  }
  if (((VAR_23.snscb_fc4_types[VAR_3 / 32] >>
      (VAR_3 % 32)) & 0x01) != 0)
   VAR_25 = 1;
 }
 FUNC_6(VAR_15, VAR_16);
 FUNC_13(VAR_15, VAR_4, "Chan %d GFT_ID result is %d", VAR_16, VAR_25);
 return (VAR_25);
}
