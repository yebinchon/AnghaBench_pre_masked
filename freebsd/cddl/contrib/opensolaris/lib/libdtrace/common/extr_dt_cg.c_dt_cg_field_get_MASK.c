
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dt_regset_t ;
struct TYPE_9__ {scalar_t__ dn_op; int dn_flags; TYPE_1__* dn_left; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_10__ {int ctm_offset; int ctm_type; } ;
typedef TYPE_3__ ctf_membinfo_t ;
typedef int ctf_file_t ;
struct TYPE_11__ {int cte_bits; } ;
typedef TYPE_4__ ctf_encoding_t ;
struct TYPE_8__ {int dn_reg; } ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int,unsigned long long) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,char*,int,int ,int) ;

__attribute__((used)) static void
FUNC_11(dt_node_t *VAR_10, dt_irlist_t *VAR_11, dt_regset_t *VAR_12,
    ctf_file_t *VAR_13, const ctf_membinfo_t *VAR_14)
{
 ctf_encoding_t VAR_15;
 dif_instr_t VAR_16;
 uint64_t VAR_17;
 int VAR_18, VAR_19;

 if (FUNC_4(VAR_13, VAR_14->ctm_type, &VAR_15) != 0 || VAR_15.cte_bits > 64) {
  FUNC_10(VAR_8, "cg: bad field: off %lu type <%ld> "
      "bits %u\n", VAR_14->ctm_offset, VAR_14->ctm_type, VAR_15.cte_bits);
 }

 FUNC_2(VAR_10->dn_op == VAR_7 || VAR_10->dn_op == VAR_6);
 VAR_18 = VAR_10->dn_left->dn_reg;
 VAR_19 = FUNC_8(VAR_12);
 if (VAR_10->dn_flags & VAR_5) {

  VAR_17 = FUNC_3(FUNC_1(VAR_15.cte_bits, VAR_9) / VAR_9) * VAR_9 -
      VAR_14->ctm_offset % VAR_9;



  FUNC_6(VAR_11, VAR_19, 64 - VAR_17);
  VAR_16 = FUNC_0(VAR_1, VAR_18, VAR_19, VAR_18);
  FUNC_7(VAR_11, FUNC_5(VAR_4, VAR_16));

  FUNC_6(VAR_11, VAR_19, 64 - VAR_15.cte_bits);
  VAR_16 = FUNC_0(VAR_2, VAR_18, VAR_19, VAR_18);
  FUNC_7(VAR_11, FUNC_5(VAR_4, VAR_16));
 } else {

  VAR_17 = FUNC_3(FUNC_1(VAR_15.cte_bits, VAR_9) / VAR_9) * VAR_9 -
      (VAR_14->ctm_offset % VAR_9 + VAR_15.cte_bits);



  FUNC_6(VAR_11, VAR_19, VAR_17);
  VAR_16 = FUNC_0(VAR_3, VAR_18, VAR_19, VAR_18);
  FUNC_7(VAR_11, FUNC_5(VAR_4, VAR_16));

  FUNC_6(VAR_11, VAR_19, (1ULL << VAR_15.cte_bits) - 1);
  VAR_16 = FUNC_0(VAR_0, VAR_18, VAR_19, VAR_18);
  FUNC_7(VAR_11, FUNC_5(VAR_4, VAR_16));
 }

 FUNC_9(VAR_12, VAR_19);
}
