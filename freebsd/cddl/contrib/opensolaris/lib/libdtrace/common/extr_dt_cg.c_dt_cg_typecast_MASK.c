
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dt_regset_t ;
struct TYPE_6__ {int dn_flags; int dn_reg; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;
 size_t FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(const dt_node_t *VAR_6, const dt_node_t *VAR_7,
    dt_irlist_t *VAR_8, dt_regset_t *VAR_9)
{
 size_t VAR_10 = FUNC_5(VAR_6);
 size_t VAR_11 = FUNC_5(VAR_7);

 dif_instr_t VAR_12;
 int VAR_13;

 if (!FUNC_4(VAR_7))
  return;
 if (VAR_11 == VAR_10 &&
     ((VAR_6->dn_flags ^ VAR_7->dn_flags) & VAR_4) != 0)
  return;
 if (VAR_11 > VAR_10 && (VAR_6->dn_flags & VAR_4) == 0)
  return;

 VAR_13 = FUNC_6(VAR_9);

 if (VAR_11 > VAR_10) {
  int VAR_14 = sizeof (uint64_t) * VAR_5 - VAR_10 * VAR_5;
  int VAR_15 = (VAR_11 - VAR_10) * VAR_5;

  FUNC_2(VAR_8, VAR_13, VAR_14);

  VAR_12 = FUNC_0(VAR_0, VAR_6->dn_reg, VAR_13, VAR_7->dn_reg);
  FUNC_3(VAR_8, FUNC_1(VAR_3, VAR_12));

  if ((VAR_7->dn_flags & VAR_4) || VAR_14 == VAR_15) {
   VAR_12 = FUNC_0(VAR_1,
       VAR_7->dn_reg, VAR_13, VAR_7->dn_reg);
   FUNC_3(VAR_8,
       FUNC_1(VAR_3, VAR_12));
  } else {
   FUNC_2(VAR_8, VAR_13, VAR_15);
   VAR_12 = FUNC_0(VAR_1,
       VAR_7->dn_reg, VAR_13, VAR_7->dn_reg);
   FUNC_3(VAR_8,
       FUNC_1(VAR_3, VAR_12));
   FUNC_2(VAR_8, VAR_13, VAR_14 - VAR_15);
   VAR_12 = FUNC_0(VAR_2,
       VAR_7->dn_reg, VAR_13, VAR_7->dn_reg);
   FUNC_3(VAR_8,
       FUNC_1(VAR_3, VAR_12));
  }
 } else if (VAR_11 != sizeof (uint64_t)) {
  int VAR_16 = sizeof (uint64_t) * VAR_5 - VAR_11 * VAR_5;

  FUNC_2(VAR_8, VAR_13, VAR_16);

  VAR_12 = FUNC_0(VAR_0, VAR_6->dn_reg, VAR_13, VAR_7->dn_reg);
  FUNC_3(VAR_8, FUNC_1(VAR_3, VAR_12));

  VAR_12 = FUNC_0((VAR_7->dn_flags & VAR_4) ?
      VAR_1 : VAR_2, VAR_7->dn_reg, VAR_13, VAR_7->dn_reg);
  FUNC_3(VAR_8, FUNC_1(VAR_3, VAR_12));
 }

 FUNC_7(VAR_9, VAR_13);
}
