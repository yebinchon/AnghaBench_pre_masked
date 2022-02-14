
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int sn ;
typedef int n2 ;
typedef int n1 ;
struct TYPE_18__ {int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
typedef int dt_xlator_t ;
struct TYPE_19__ {struct TYPE_19__* dn_members; int * dn_xlator; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_decl_t ;
typedef int dn ;
struct TYPE_20__ {int pcb_jmpbuf; int pcb_list; int * pcb_hdl; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_2__*,char*,int) ;
 int FUNC_9 (int ,int ,char*,int) ;
 int * FUNC_10 (int *,TYPE_1__*,TYPE_1__*,char*,TYPE_2__*,int ) ;
 int * FUNC_11 (int *,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 TYPE_3__* VAR_13 ;

dt_node_t *
FUNC_16(dt_decl_t *VAR_14, dt_decl_t *VAR_15, char *VAR_16, dt_node_t *VAR_17)
{
 dtrace_hdl_t *VAR_18 = VAR_13->pcb_hdl;
 dtrace_typeinfo_t VAR_19, VAR_20;
 dt_node_t VAR_21, VAR_22;
 dt_xlator_t *VAR_23;
 dt_node_t *VAR_24;
 int VAR_25, VAR_26;
 uint_t VAR_27;

 char VAR_28[VAR_6];
 char VAR_29[VAR_6];

 VAR_25 = FUNC_4(VAR_14, &VAR_20);
 FUNC_3(VAR_14);

 VAR_26 = FUNC_4(VAR_15, &VAR_19);
 FUNC_3(VAR_15);

 if (VAR_25 != 0 || VAR_26 != 0) {
  FUNC_12(VAR_16);
  FUNC_13(VAR_13->pcb_jmpbuf, VAR_10);
 }

 FUNC_0(&VAR_21, sizeof (VAR_21));
 FUNC_7(&VAR_21, VAR_19.dtt_ctfp, VAR_19.dtt_type, VAR_0);

 FUNC_0(&VAR_22, sizeof (VAR_22));
 FUNC_7(&VAR_22, VAR_20.dtt_ctfp, VAR_20.dtt_type, VAR_0);

 if (FUNC_11(VAR_18, &VAR_21, &VAR_22, VAR_7) != ((void*)0)) {
  FUNC_14(VAR_8,
      "translator from %s to %s has already been declared\n",
      FUNC_8(&VAR_21, VAR_28, sizeof (VAR_28)),
      FUNC_8(&VAR_22, VAR_29, sizeof (VAR_29)));
 }

 VAR_27 = FUNC_1(VAR_20.dtt_ctfp,
     FUNC_2(VAR_20.dtt_ctfp, VAR_20.dtt_type));

 if (VAR_27 == VAR_1) {
  FUNC_14(VAR_9, "incomplete struct/union/enum %s\n",
      FUNC_9(VAR_20.dtt_ctfp, VAR_20.dtt_type, VAR_28, sizeof (VAR_28)));
 }

 if (VAR_27 != VAR_2 && VAR_27 != VAR_3) {
  FUNC_14(VAR_9,
      "translator output type must be a struct or union\n");
 }

 VAR_23 = FUNC_10(VAR_18, &VAR_19, &VAR_20, VAR_16, VAR_17, VAR_13->pcb_list);
 FUNC_15(VAR_12);
 FUNC_12(VAR_16);

 if (VAR_23 == ((void*)0))
  FUNC_13(VAR_13->pcb_jmpbuf, VAR_11);

 VAR_24 = FUNC_5(VAR_5);
 VAR_24->dn_xlator = VAR_23;
 VAR_24->dn_members = VAR_17;

 return (FUNC_6(VAR_24, VAR_4));
}
