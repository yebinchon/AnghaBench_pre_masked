
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dt_regset_t ;
struct TYPE_16__ {scalar_t__ dn_op; int dn_reg; TYPE_2__* dn_right; TYPE_1__* dn_left; } ;
typedef TYPE_4__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_17__ {int ctm_offset; int ctm_type; } ;
typedef TYPE_5__ ctf_membinfo_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_18__ {int cte_bits; } ;
typedef TYPE_6__ ctf_encoding_t ;
struct TYPE_19__ {int pcb_jmpbuf; TYPE_3__* pcb_hdl; } ;
struct TYPE_15__ {int dt_ctferr; } ;
struct TYPE_14__ {scalar_t__ dn_kind; int dn_string; } ;
struct TYPE_13__ {int dn_type; int * dn_ctfp; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_6__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_4__*,int *,int ) ;
 int * FUNC_10 (int *,int ,int ,TYPE_5__*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,char*,int,int ,int) ;
 TYPE_7__* VAR_10 ;

__attribute__((used)) static int
FUNC_18(dt_node_t *VAR_11, dt_irlist_t *VAR_12,
    dt_regset_t *VAR_13, dt_node_t *VAR_14)
{
 uint64_t VAR_15, VAR_16, VAR_17;
 dif_instr_t VAR_18;
 int VAR_19, VAR_20, VAR_21;

 ctf_membinfo_t VAR_22;
 ctf_encoding_t VAR_23;
 ctf_file_t *VAR_24, *VAR_25;
 ctf_id_t VAR_26;

 FUNC_3(VAR_14->dn_op == VAR_6 || VAR_14->dn_op == VAR_5);
 FUNC_3(VAR_14->dn_right->dn_kind == VAR_4);

 VAR_24 = VAR_14->dn_left->dn_ctfp;
 VAR_26 = FUNC_8(VAR_24, VAR_14->dn_left->dn_type);

 if (VAR_14->dn_op == VAR_6) {
  VAR_26 = FUNC_7(VAR_24, VAR_26);
  VAR_26 = FUNC_8(VAR_24, VAR_26);
 }

 if ((VAR_24 = FUNC_10(VAR_25 = VAR_24, VAR_26,
     VAR_14->dn_right->dn_string, &VAR_22)) == ((void*)0)) {
  VAR_10->pcb_hdl->dt_ctferr = FUNC_5(VAR_25);
  FUNC_16(VAR_10->pcb_jmpbuf, VAR_8);
 }

 if (FUNC_6(VAR_24, VAR_22.ctm_type, &VAR_23) != 0 || VAR_23.cte_bits > 64) {
  FUNC_17(VAR_7, "cg: bad field: off %lu type <%ld> "
      "bits %u\n", VAR_22.ctm_offset, VAR_22.ctm_type, VAR_23.cte_bits);
 }

 VAR_19 = FUNC_14(VAR_13);
 VAR_20 = FUNC_14(VAR_13);
 VAR_21 = FUNC_14(VAR_13);
 VAR_17 = FUNC_4(FUNC_2(VAR_23.cte_bits, VAR_9) / VAR_9) * VAR_9 -
     (VAR_22.ctm_offset % VAR_9 + VAR_23.cte_bits);



 VAR_16 = (1ULL << VAR_23.cte_bits) - 1;
 VAR_15 = ~(VAR_16 << VAR_17);

 VAR_18 = FUNC_1(
     FUNC_9(VAR_14, VAR_24, VAR_22.ctm_type), VAR_14->dn_reg, VAR_19);
 FUNC_13(VAR_12, FUNC_11(VAR_3, VAR_18));

 FUNC_12(VAR_12, VAR_20, VAR_15);
 VAR_18 = FUNC_0(VAR_0, VAR_19, VAR_20, VAR_19);
 FUNC_13(VAR_12, FUNC_11(VAR_3, VAR_18));

 FUNC_12(VAR_12, VAR_20, VAR_16);
 VAR_18 = FUNC_0(VAR_0, VAR_11->dn_reg, VAR_20, VAR_20);
 FUNC_13(VAR_12, FUNC_11(VAR_3, VAR_18));

 FUNC_12(VAR_12, VAR_21, VAR_17);
 VAR_18 = FUNC_0(VAR_2, VAR_20, VAR_21, VAR_20);
 FUNC_13(VAR_12, FUNC_11(VAR_3, VAR_18));

 VAR_18 = FUNC_0(VAR_1, VAR_19, VAR_20, VAR_19);
 FUNC_13(VAR_12, FUNC_11(VAR_3, VAR_18));

 FUNC_15(VAR_13, VAR_21);
 FUNC_15(VAR_13, VAR_20);

 return (VAR_19);
}
