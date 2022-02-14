
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct fw_ldst_mps_rplc {int rplc255_224; int rplc223_192; int rplc191_160; int rplc159_128; int rplc127_96; int rplc95_64; int rplc63_32; int rplc31_0; int fid_idx; } ;
struct TYPE_5__ {struct fw_ldst_mps_rplc rplc; } ;
struct TYPE_6__ {TYPE_2__ mps; } ;
struct fw_ldst_cmd {TYPE_3__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct cudbg_mps_tcam {scalar_t__ lookup_type; int vniy; int dip_hit; int vlan_vld; int ivlan; int vnix; int cls_lo; int cls_hi; int repli; int idx; scalar_t__ rplc_size; int mask; int addr; void** rplc; int port_num; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; struct fw_ldst_cmd* data; } ;
struct adapter {TYPE_1__* chip_params; int mbox; } ;
typedef int ldst_cmd ;
struct TYPE_4__ {int mps_tcam_size; scalar_t__ mps_rplc_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct fw_ldst_cmd) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_16 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct adapter*,int *,int,char*) ;
 scalar_t__ FUNC_20 (struct adapter*) ;
 int FUNC_21 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_22 (int,int,int ,int *) ;
 int FUNC_23 (struct adapter*,int ) ;
 int FUNC_24 (struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 void* FUNC_25 (int) ;
 int FUNC_26 (int) ;
 scalar_t__ FUNC_27 (struct adapter*) ;
 scalar_t__ FUNC_28 (struct adapter*) ;
 int FUNC_29 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_30 (struct adapter*,struct fw_ldst_mps_rplc*) ;
 void* FUNC_31 (int ) ;
 int FUNC_32 (struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_33 (struct adapter*,int ) ;
 int FUNC_34 (struct adapter*,int ) ;
 int FUNC_35 (struct adapter*,int ,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;
 int FUNC_36 (struct adapter*,int ,int) ;
 int FUNC_37 (struct cudbg_buffer*,struct cudbg_buffer*) ;

__attribute__((used)) static int FUNC_38(struct cudbg_init *VAR_19,
       struct cudbg_buffer *VAR_20,
       struct cudbg_error *VAR_21)
{
 struct cudbg_buffer VAR_22;
 struct adapter *VAR_23 = VAR_19->adap;
 struct cudbg_mps_tcam *VAR_24 = ((void*)0);
 u32 VAR_25 = 0, VAR_26, VAR_27, VAR_28 = 0;
 u32 VAR_29, VAR_30;
 u64 VAR_31, VAR_32, VAR_33;
 int VAR_34;

 VAR_27 = VAR_23->chip_params->mps_tcam_size;
 VAR_25 = sizeof(struct cudbg_mps_tcam) * VAR_27;
 VAR_22.size = VAR_25;

 VAR_34 = FUNC_24(VAR_20, VAR_22.size, &VAR_22);
 if (VAR_34)
  goto err;
 FUNC_29(VAR_22.data, 0, VAR_25);

 VAR_24 = (struct cudbg_mps_tcam *)VAR_22.data;
 for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++) {
  if (FUNC_20(VAR_23) >= VAR_4) {







   VAR_29 = (FUNC_11(1) |
          FUNC_10(0) | FUNC_14(0));
   if (VAR_26 < 256)
    VAR_29 |= FUNC_12(VAR_26) | FUNC_13(0);
   else
    VAR_29 |= FUNC_12(VAR_26 - 256) |
           FUNC_13(1);

   FUNC_36(VAR_23, VAR_0, VAR_29);
   VAR_33 = FUNC_33(VAR_23, VAR_2);
   VAR_31 = FUNC_4(VAR_33) << 32;
   VAR_31 |= FUNC_33(VAR_23, VAR_1);
   VAR_30 = FUNC_33(VAR_23, VAR_3);
   VAR_24->lookup_type = FUNC_1(VAR_30);






   if (VAR_24->lookup_type &&
       (VAR_24->lookup_type != VAR_17)) {

    VAR_24->vniy = ((VAR_30 & VAR_11) << 23) |
          (FUNC_3(VAR_30) << 16) |
          FUNC_5(VAR_33);
    VAR_24->dip_hit = VAR_30 & VAR_10;
   } else {
    VAR_24->vlan_vld = VAR_30 & VAR_11;
    VAR_24->ivlan = FUNC_5(VAR_33);
   }

   VAR_24->port_num = FUNC_2(VAR_30);


   VAR_29 |= FUNC_14(1);
   FUNC_36(VAR_23, VAR_0, VAR_29);
   VAR_33 = FUNC_33(VAR_23, VAR_2);
   VAR_32 = FUNC_4(VAR_33) << 32;
   VAR_32 |= FUNC_33(VAR_23, VAR_1);
   VAR_30 = FUNC_33(VAR_23, VAR_3);
   if (VAR_24->lookup_type &&
       (VAR_24->lookup_type != VAR_17)) {

    VAR_24->vnix = ((VAR_30 & VAR_11) << 23) |
          (FUNC_3(VAR_30) << 16) |
          FUNC_5(VAR_33);
   }
  } else {
   VAR_31 = FUNC_34(VAR_23, FUNC_9(VAR_26));
   VAR_32 = FUNC_34(VAR_23, FUNC_8(VAR_26));
  }

  if (VAR_32 & VAR_31)
   continue;

  VAR_24->cls_lo = FUNC_33(VAR_23, FUNC_7(VAR_26));
  VAR_24->cls_hi = FUNC_33(VAR_23, FUNC_6(VAR_26));

  if (FUNC_27(VAR_23))
   VAR_24->repli = (VAR_24->cls_lo & VAR_14);
  else if (FUNC_28(VAR_23))
   VAR_24->repli = (VAR_24->cls_lo & VAR_15);

  if (VAR_24->repli) {
   struct fw_ldst_cmd VAR_35;
   struct fw_ldst_mps_rplc VAR_36;

   FUNC_29(&VAR_35, 0, sizeof(VAR_35));
   VAR_35.op_to_addrspace =
    FUNC_25(FUNC_15(VAR_8) |
          VAR_13 |
          VAR_12 |
          FUNC_16(
           VAR_7));

   VAR_35.cycles_to_len16 = FUNC_25(FUNC_0(VAR_35));

   VAR_35.u.mps.rplc.fid_idx =
    FUNC_26(FUNC_17(VAR_9) |
          FUNC_18(VAR_26));

   VAR_34 = FUNC_19(VAR_23, ((void*)0),
       VAR_18 | VAR_16, "t4cudm");
   if (VAR_34 == 0) {
    VAR_34 = FUNC_35(VAR_23, VAR_23->mbox, &VAR_35,
      sizeof(VAR_35), &VAR_35);
    FUNC_23(VAR_23, 0);
   }

   if (VAR_34)
    FUNC_30(VAR_23, &VAR_36);
   else
    VAR_36 = VAR_35.u.mps.rplc;

   VAR_24->rplc[0] = FUNC_31(VAR_36.rplc31_0);
   VAR_24->rplc[1] = FUNC_31(VAR_36.rplc63_32);
   VAR_24->rplc[2] = FUNC_31(VAR_36.rplc95_64);
   VAR_24->rplc[3] = FUNC_31(VAR_36.rplc127_96);
   if (VAR_23->chip_params->mps_rplc_size >
     VAR_5) {
    VAR_24->rplc[4] = FUNC_31(VAR_36.rplc159_128);
    VAR_24->rplc[5] = FUNC_31(VAR_36.rplc191_160);
    VAR_24->rplc[6] = FUNC_31(VAR_36.rplc223_192);
    VAR_24->rplc[7] = FUNC_31(VAR_36.rplc255_224);
   }
  }
  FUNC_22(VAR_32, VAR_31, VAR_24->addr, &VAR_24->mask);

  VAR_24->idx = VAR_26;
  VAR_24->rplc_size = VAR_23->chip_params->mps_rplc_size;

  VAR_28 += sizeof(struct cudbg_mps_tcam);

  VAR_24++;
 }

 if (VAR_28 == 0) {
  VAR_34 = VAR_6;
  goto err1;
 }

 VAR_22.size = VAR_28;
 VAR_34 = FUNC_37(&VAR_22, VAR_20);
 if (VAR_34)
  goto err1;

 VAR_34 = FUNC_21(&VAR_22, VAR_20);

err1:
 VAR_22.size = VAR_25;
 FUNC_32(&VAR_22, VAR_20);
err:
 return VAR_34;
}
