
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int rp ;
typedef int rft_id_t ;
struct TYPE_23__ {scalar_t__ ct_cmd_resp; int ct_bcnt_resid; int ct_fcs_subtype; int ct_fcs_type; int ct_revision; } ;
struct TYPE_20__ {int* rffid_portid; int rffid_fc4features; int rffid_fc4type; TYPE_4__ rffid_hdr; } ;
typedef TYPE_1__ rff_id_t ;
struct TYPE_21__ {int isp_dblev; } ;
typedef TYPE_2__ ispsoftc_t ;
struct TYPE_22__ {int isp_portid; int role; int * isp_scratch; } ;
typedef TYPE_3__ fcparam ;
typedef TYPE_4__ ct_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,int,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,char*,int,int *) ;
 int FUNC_7 (TYPE_2__*,int,char*,...) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_9(ispsoftc_t *VAR_15, int VAR_16)
{
 fcparam *VAR_17 = FUNC_0(VAR_15, VAR_16);
 ct_hdr_t *VAR_18;
 rff_id_t VAR_19;
 uint8_t *VAR_20 = VAR_17->isp_scratch;

 if (FUNC_1(VAR_15, VAR_16)) {
  FUNC_7(VAR_15, VAR_5, VAR_14);
  return (-1);
 }




 FUNC_3(&VAR_19, sizeof(VAR_19));
 VAR_18 = &VAR_19.rffid_hdr;
 VAR_18->ct_revision = VAR_2;
 VAR_18->ct_fcs_type = VAR_1;
 VAR_18->ct_fcs_subtype = VAR_0;
 VAR_18->ct_cmd_resp = VAR_13;
 VAR_18->ct_bcnt_resid = (sizeof (rff_id_t) - sizeof (ct_hdr_t)) >> 2;
 VAR_19.rffid_portid[0] = VAR_17->isp_portid >> 16;
 VAR_19.rffid_portid[1] = VAR_17->isp_portid >> 8;
 VAR_19.rffid_portid[2] = VAR_17->isp_portid;
 VAR_19.rffid_fc4features = 0;
 if (VAR_17->role & VAR_10)
  VAR_19.rffid_fc4features |= 1;
 if (VAR_17->role & VAR_9)
  VAR_19.rffid_fc4features |= 2;
 VAR_19.rffid_fc4type = VAR_3;
 FUNC_8(VAR_15, &VAR_19, (rff_id_t *)VAR_20);
 if (VAR_15->isp_dblev & VAR_4)
  FUNC_6(VAR_15, "CT request", sizeof(rft_id_t), VAR_20);

 if (FUNC_4(VAR_15, VAR_16, sizeof(rft_id_t), sizeof(ct_hdr_t))) {
  FUNC_2(VAR_15, VAR_16);
  return (-1);
 }

 FUNC_5(VAR_15, (ct_hdr_t *) VAR_20, VAR_18);
 FUNC_2(VAR_15, VAR_16);
 if (VAR_18->ct_cmd_resp == VAR_12) {
  FUNC_7(VAR_15, VAR_7|VAR_8,
      "Chan %d Register FC4 Features rejected", VAR_16);
  return (-1);
 } else if (VAR_18->ct_cmd_resp == VAR_11) {
  FUNC_7(VAR_15, VAR_7,
      "Chan %d Register FC4 Features accepted", VAR_16);
 } else {
  FUNC_7(VAR_15, VAR_6,
      "Chan %d Register FC4 Features: 0x%x", VAR_16, VAR_18->ct_cmd_resp);
  return (-1);
 }
 return (0);
}
