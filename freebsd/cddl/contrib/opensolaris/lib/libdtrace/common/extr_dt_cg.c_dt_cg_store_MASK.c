
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ulong_t ;
typedef int dt_regset_t ;
struct TYPE_9__ {int dn_flags; int dn_reg; int dn_type; int dn_ctfp; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_10__ {int cte_bits; } ;
typedef TYPE_2__ ctf_encoding_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int) ;
 size_t FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int,size_t) ;
 int FUNC_8 (int *,int ) ;
 size_t FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_13(dt_node_t *VAR_10, dt_irlist_t *VAR_11, dt_regset_t *VAR_12, dt_node_t *VAR_13)
{
 ctf_encoding_t VAR_14;
 dif_instr_t VAR_15;
 size_t VAR_16;
 int VAR_17;






 if ((VAR_13->dn_flags & VAR_6) &&
     FUNC_4(VAR_13->dn_ctfp, VAR_13->dn_type, &VAR_14) != VAR_0)
  VAR_16 = FUNC_3(FUNC_2(VAR_14.cte_bits, VAR_9) / VAR_9);
 else
  VAR_16 = FUNC_9(VAR_10);

 if (VAR_10->dn_flags & VAR_7) {
  VAR_17 = FUNC_10(VAR_12);
  FUNC_7(VAR_11, VAR_17, VAR_16);
  VAR_15 = FUNC_0(VAR_10->dn_reg, VAR_17, VAR_13->dn_reg);
  FUNC_8(VAR_11, FUNC_6(VAR_5, VAR_15));
  FUNC_11(VAR_12, VAR_17);
 } else {
  if (VAR_13->dn_flags & VAR_6)
   VAR_17 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13);
  else
   VAR_17 = VAR_10->dn_reg;

  switch (VAR_16) {
  case 1:
   VAR_15 = FUNC_1(VAR_1, VAR_17, VAR_13->dn_reg);
   break;
  case 2:
   VAR_15 = FUNC_1(VAR_2, VAR_17, VAR_13->dn_reg);
   break;
  case 4:
   VAR_15 = FUNC_1(VAR_3, VAR_17, VAR_13->dn_reg);
   break;
  case 8:
   VAR_15 = FUNC_1(VAR_4, VAR_17, VAR_13->dn_reg);
   break;
  default:
   FUNC_12(VAR_8, "internal error -- cg cannot store "
       "size %lu when passed by value\n", (ulong_t)VAR_16);
  }
  FUNC_8(VAR_11, FUNC_6(VAR_5, VAR_15));

  if (VAR_13->dn_flags & VAR_6)
   FUNC_11(VAR_12, VAR_17);
 }
}
