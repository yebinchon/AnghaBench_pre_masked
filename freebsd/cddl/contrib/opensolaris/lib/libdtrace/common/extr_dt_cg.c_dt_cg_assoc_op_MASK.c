
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int dt_regset_t ;
struct TYPE_5__ {scalar_t__ dn_kind; int dn_flags; int dn_reg; TYPE_4__* dn_ident; int * dn_args; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_6__ {int di_flags; int di_id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(dt_node_t *VAR_13, dt_irlist_t *VAR_14, dt_regset_t *VAR_15)
{
 dif_instr_t VAR_16;
 uint_t VAR_17;

 FUNC_5(VAR_13->dn_kind == VAR_12);
 FUNC_5(!(VAR_13->dn_ident->di_flags & VAR_8));
 FUNC_5(VAR_13->dn_args != ((void*)0));

 FUNC_6(VAR_13->dn_ident, VAR_13->dn_args, VAR_14, VAR_15);

 VAR_13->dn_reg = FUNC_12(VAR_15);

 if (VAR_13->dn_ident->di_flags & VAR_9)
  VAR_17 = VAR_3;
 else
  VAR_17 = VAR_2;

 VAR_13->dn_ident->di_flags |= VAR_6;
 VAR_16 = FUNC_2(VAR_17, VAR_13->dn_ident->di_id, VAR_13->dn_reg);
 FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));
 if (VAR_13->dn_flags & VAR_11) {
  uint_t VAR_18 = VAR_17 == VAR_3 ? VAR_5 : VAR_4;
  uint_t VAR_19 = FUNC_10(VAR_14);

  VAR_16 = FUNC_4(VAR_13->dn_reg);
  FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));

  VAR_16 = FUNC_1(VAR_1, VAR_19);
  FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));

  FUNC_8(VAR_14, VAR_13->dn_reg, FUNC_11(VAR_13));
  VAR_16 = FUNC_0(VAR_13->dn_reg, VAR_13->dn_reg);
  FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));

  VAR_13->dn_ident->di_flags |= VAR_7;
  VAR_16 = FUNC_3(VAR_18, VAR_13->dn_ident->di_id, VAR_13->dn_reg);
  FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));

  VAR_16 = FUNC_2(VAR_17, VAR_13->dn_ident->di_id, VAR_13->dn_reg);
  FUNC_9(VAR_14, FUNC_7(VAR_10, VAR_16));

  FUNC_9(VAR_14, FUNC_7(VAR_19, VAR_0));
 }
}
