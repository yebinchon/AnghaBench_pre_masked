
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_11__ {int dtt_ctfp; int dtt_type; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_12__ {int dn_flags; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_decl_t ;
typedef int dn ;
struct TYPE_13__ {int ctm_offset; int ctm_type; } ;
typedef TYPE_3__ ctf_membinfo_t ;
typedef int ctf_id_t ;
struct TYPE_14__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,char*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,...) ;
 TYPE_4__* VAR_10 ;

dt_node_t *
FUNC_16(dt_decl_t *VAR_11, char *VAR_12)
{
 dtrace_typeinfo_t VAR_13;
 dt_node_t VAR_14;
 char *VAR_15;
 int VAR_16;

 ctf_membinfo_t VAR_17;
 ctf_id_t VAR_18;
 uint_t VAR_19;

 VAR_15 = FUNC_0(FUNC_14(VAR_12) + 1);
 (void) FUNC_13(VAR_15, VAR_12);
 FUNC_11(VAR_12);

 VAR_16 = FUNC_8(VAR_11, &VAR_13);
 FUNC_7(VAR_11);

 if (VAR_16 != 0)
  FUNC_12(VAR_10->pcb_jmpbuf, VAR_8);

 VAR_18 = FUNC_6(VAR_13.dtt_ctfp, VAR_13.dtt_type);
 VAR_19 = FUNC_5(VAR_13.dtt_ctfp, VAR_18);

 if (VAR_19 != VAR_2 && VAR_19 != VAR_3) {
  FUNC_15(VAR_6,
      "offsetof operand must be a struct or union type\n");
 }

 if (FUNC_4(VAR_13.dtt_ctfp, VAR_18, VAR_15, &VAR_17) == VAR_1) {
  FUNC_15(VAR_7, "failed to determine offset of %s: %s\n",
      VAR_15, FUNC_2(FUNC_3(VAR_13.dtt_ctfp)));
 }

 FUNC_1(&VAR_14, sizeof (VAR_14));
 FUNC_10(&VAR_14, VAR_13.dtt_ctfp, VAR_17.ctm_type, VAR_0);

 if (VAR_14.dn_flags & VAR_4) {
  FUNC_15(VAR_5,
      "cannot take offset of a bit-field: %s\n", VAR_15);
 }

 return (FUNC_9(VAR_17.ctm_offset / VAR_9));
}
