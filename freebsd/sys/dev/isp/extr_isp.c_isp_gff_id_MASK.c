
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {scalar_t__ ct_cmd_resp; } ;
struct TYPE_12__ {scalar_t__* snscb_fc4_features; TYPE_1__ snscb_cthdr; } ;
typedef TYPE_2__ sns_gff_id_rsp_t ;
typedef int ispsoftc_t ;
struct TYPE_13__ {int isp_use_gff_id; int * isp_scratch; } ;
typedef TYPE_3__ fcparam ;
struct TYPE_14__ {int ct_bcnt_resid; int ct_cmd_resp; int ct_fcs_subtype; int ct_fcs_type; int ct_revision; } ;
typedef TYPE_4__ ct_hdr_t ;
typedef int ct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int *,int,int,int) ;
 int FUNC_8 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (int *,int ,char*,...) ;
 int FUNC_10 (int *,TYPE_4__*,TYPE_4__*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_11(ispsoftc_t *VAR_10, int VAR_11, uint32_t VAR_12)
{
 fcparam *VAR_13 = FUNC_0(VAR_10, VAR_11);
 ct_hdr_t VAR_14;
 uint32_t *VAR_15;
 uint8_t *VAR_16 = VAR_13->isp_scratch;
 sns_gff_id_rsp_t VAR_17;
 int VAR_18, VAR_19 = -1;

 if (!VAR_13->isp_use_gff_id)
  return (VAR_19);

 if (!FUNC_6(VAR_10))
  return (VAR_19);

 FUNC_9(VAR_10, VAR_4, "Chan %d requesting GFF_ID", VAR_11);
 if (FUNC_1(VAR_10, VAR_11)) {
  FUNC_9(VAR_10, VAR_5, VAR_9);
  return (VAR_19);
 }


 FUNC_4(&VAR_14, sizeof (VAR_14));
 VAR_14.ct_revision = VAR_2;
 VAR_14.ct_fcs_type = VAR_1;
 VAR_14.ct_fcs_subtype = VAR_0;
 VAR_14.ct_cmd_resp = VAR_7;
 VAR_14.ct_bcnt_resid = (VAR_8 - sizeof(VAR_14)) / 4;
 FUNC_10(VAR_10, &VAR_14, (ct_hdr_t *)VAR_16);
 VAR_15 = (uint32_t *) &VAR_16[sizeof(VAR_14)];
 FUNC_3(VAR_10, VAR_12, VAR_15);

 if (FUNC_7(VAR_10, VAR_11, sizeof(VAR_14) + sizeof(uint32_t),
     VAR_8)) {
  FUNC_2(VAR_10, VAR_11);
  return (VAR_19);
 }

 FUNC_8(VAR_10, (sns_gff_id_rsp_t *)VAR_16, &VAR_17);
 if (VAR_17.snscb_cthdr.ct_cmd_resp == VAR_6) {
  for (VAR_18 = 0; VAR_18 < 32; VAR_18++) {
   if (VAR_17.snscb_fc4_features[VAR_18] != 0) {
    VAR_19 = 0;
    break;
   }
  }
  if (((VAR_17.snscb_fc4_features[VAR_3 / 8] >>
      ((VAR_3 % 8) * 4)) & 0x01) != 0)
   VAR_19 = 1;

  if (((FUNC_5(VAR_10, VAR_17.snscb_fc4_features[VAR_3 / 8]) >>
      ((VAR_3 % 8) * 4)) & 0x01) != 0)
   VAR_19 = 1;
 }
 FUNC_2(VAR_10, VAR_11);
 FUNC_9(VAR_10, VAR_4, "Chan %d GFF_ID result is %d", VAR_11, VAR_19);
 return (VAR_19);
}
