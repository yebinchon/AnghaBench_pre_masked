
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint_t ;
typedef int n ;
struct TYPE_26__ {scalar_t__ dtt_type; int * dtt_ctfp; int dtt_object; scalar_t__ dtt_flags; } ;
typedef TYPE_3__ dtrace_typeinfo_t ;
struct TYPE_27__ {TYPE_5__* dt_ddefs; int dt_ctferr; TYPE_5__* dt_cdefs; } ;
typedef TYPE_4__ dtrace_hdl_t ;
struct TYPE_28__ {int * dm_ctfp; int dm_name; } ;
typedef TYPE_5__ dt_module_t ;
struct TYPE_29__ {int dd_attr; scalar_t__ dd_type; scalar_t__ dd_kind; char* dd_name; int * dd_ctfp; TYPE_2__* dd_node; struct TYPE_29__* dd_next; } ;
typedef TYPE_6__ dt_decl_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_30__ {scalar_t__ ctr_contents; int ctr_nelems; int ctr_index; } ;
typedef TYPE_7__ ctf_arinfo_t ;
struct TYPE_24__ {scalar_t__ ds_next; } ;
struct TYPE_31__ {TYPE_1__ pcb_dstack; scalar_t__ pcb_idepth; TYPE_4__* pcb_hdl; } ;
struct TYPE_25__ {scalar_t__ dn_kind; scalar_t__ dn_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;



 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int * FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_7__*) ;
 scalar_t__ FUNC_8 (int *,int ,char*,int) ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 int * FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_5__* FUNC_15 (TYPE_4__*,int *) ;
 int FUNC_16 (char*,TYPE_3__*) ;
 char* FUNC_17 (int *,scalar_t__,char*,int) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ,char*,...) ;
 TYPE_8__* VAR_16 ;

int
FUNC_25(dt_decl_t *VAR_17, dtrace_typeinfo_t *VAR_18)
{
 dtrace_hdl_t *VAR_19 = VAR_16->pcb_hdl;

 dt_module_t *VAR_20;
 ctf_arinfo_t VAR_21;
 ctf_id_t VAR_22;

 char VAR_23[VAR_14];
 uint_t VAR_24;
 char *VAR_25;
 int VAR_26;

 VAR_18->dtt_flags = 0;





 VAR_20 = VAR_16->pcb_idepth ? VAR_19->dt_cdefs : VAR_19->dt_ddefs;
 VAR_24 = VAR_16->pcb_dstack.ds_next ? VAR_0 : VAR_1;

 if (VAR_17->dd_attr & VAR_12)
  VAR_18->dtt_flags = VAR_6;





 if (VAR_17->dd_ctfp != ((void*)0) &&
     (VAR_20 = FUNC_15(VAR_19, VAR_17->dd_ctfp)) != ((void*)0)) {
  VAR_18->dtt_object = VAR_20->dm_name;
  VAR_18->dtt_ctfp = VAR_17->dd_ctfp;
  VAR_18->dtt_type = VAR_17->dd_type;
  return (0);
 }
 if (VAR_17->dd_kind == VAR_4) {
  VAR_18->dtt_object = VAR_19->dt_ddefs->dm_name;
  VAR_18->dtt_ctfp = FUNC_4(VAR_19);
  VAR_18->dtt_type = FUNC_5(VAR_19);
  return (0);
 }






 if (VAR_17->dd_kind == VAR_5) {
  if (VAR_17->dd_next->dd_kind == VAR_4) {
   VAR_18->dtt_object = VAR_19->dt_ddefs->dm_name;
   VAR_18->dtt_ctfp = FUNC_2(VAR_19);
   VAR_18->dtt_type = FUNC_3(VAR_19);
   return (0);
  }

  if ((VAR_26 = FUNC_25(VAR_17->dd_next, VAR_18)) == 0 &&
      (VAR_26 = FUNC_18(VAR_18)) != 0) {
   FUNC_24(VAR_15, "cannot find type: %s*: %s\n",
       FUNC_17(VAR_18->dtt_ctfp, VAR_18->dtt_type,
       VAR_23, sizeof (VAR_23)), FUNC_10(VAR_19->dt_ctferr));
  }

  return (VAR_26);
 }
 if (VAR_17->dd_kind == VAR_3) {




  if (VAR_17->dd_node != ((void*)0) &&
      VAR_17->dd_node->dn_kind == VAR_13) {
   VAR_18->dtt_object = VAR_19->dt_ddefs->dm_name;
   VAR_18->dtt_ctfp = FUNC_0(VAR_19);
   VAR_18->dtt_type = FUNC_1(VAR_19);
   return (0);
  }

  if ((VAR_26 = FUNC_25(VAR_17->dd_next, VAR_18)) != 0)
   return (VAR_26);






  if (VAR_18->dtt_ctfp != VAR_20->dm_ctfp &&
      VAR_18->dtt_ctfp != FUNC_13(VAR_20->dm_ctfp)) {

   VAR_18->dtt_type = FUNC_9(VAR_20->dm_ctfp,
       VAR_18->dtt_ctfp, VAR_18->dtt_type);
   VAR_18->dtt_ctfp = VAR_20->dm_ctfp;

   if (VAR_18->dtt_type == VAR_2 ||
       FUNC_14(VAR_18->dtt_ctfp) == VAR_2) {
    FUNC_24(VAR_15, "failed to copy type: %s\n",
        FUNC_10(FUNC_11(VAR_18->dtt_ctfp)));
    return (-1);
   }
  }





  VAR_21.ctr_contents = VAR_18->dtt_type;
  VAR_21.ctr_index = FUNC_12(VAR_18->dtt_ctfp, "long");
  VAR_21.ctr_nelems = VAR_17->dd_node ?
      (uint_t)VAR_17->dd_node->dn_value : 0;

  VAR_18->dtt_object = VAR_20->dm_name;
  VAR_18->dtt_ctfp = VAR_20->dm_ctfp;
  VAR_18->dtt_type = FUNC_7(VAR_20->dm_ctfp, VAR_1, &VAR_21);

  if (VAR_18->dtt_type == VAR_2 ||
      FUNC_14(VAR_18->dtt_ctfp) == VAR_2) {
   FUNC_24(VAR_15, "failed to create array type: %s\n",
       FUNC_10(FUNC_11(VAR_18->dtt_ctfp)));
   return (-1);
  }

  return (0);
 }





 VAR_25 = FUNC_6(VAR_17->dd_name ? FUNC_23(VAR_17->dd_name) + 20 : 20);
 VAR_25[0] = '\0';

 switch (VAR_17->dd_kind) {
 case 131:
 case 132:
  if (VAR_17->dd_attr & VAR_10)
   (void) FUNC_21(VAR_25, "signed ");
  if (VAR_17->dd_attr & VAR_11)
   (void) FUNC_21(VAR_25, "unsigned ");
  if (VAR_17->dd_attr & VAR_9)
   (void) FUNC_21(VAR_25, "short ");
  if (VAR_17->dd_attr & VAR_7)
   (void) FUNC_21(VAR_25, "long ");
  if (VAR_17->dd_attr & VAR_8)
   (void) FUNC_21(VAR_25, "long long ");
  if (VAR_17->dd_attr == 0 && VAR_17->dd_name == ((void*)0))
   (void) FUNC_21(VAR_25, "int");
  break;
 case 130:
  (void) FUNC_22(VAR_25, "struct ");
  break;
 case 128:
  (void) FUNC_22(VAR_25, "union ");
  break;
 case 133:
  (void) FUNC_22(VAR_25, "enum ");
  break;
 case 129:
  break;
 default:
  FUNC_24(VAR_15, "internal error -- "
      "bad decl kind %u\n", VAR_17->dd_kind);
  return (-1);
 }





 if (VAR_17->dd_name != ((void*)0) && (VAR_17->dd_kind != 131 ||
     (VAR_17->dd_attr & (VAR_9 | VAR_7 | VAR_8)) == 0))
  (void) FUNC_21(VAR_25, VAR_17->dd_name);






 if ((VAR_26 = FUNC_16(VAR_25, VAR_18)) == 0)
  return (VAR_26);

 switch (VAR_17->dd_kind) {
 case 130:
 case 128:
 case 133:
  VAR_22 = FUNC_8(VAR_20->dm_ctfp, VAR_24,
      VAR_17->dd_name, VAR_17->dd_kind);
  break;
 default:
  FUNC_24(VAR_15, "failed to resolve type %s: %s\n", VAR_25,
      FUNC_19(VAR_19, FUNC_20(VAR_19)));
  return (VAR_26);
 }

 if (VAR_22 == VAR_2 || FUNC_14(VAR_20->dm_ctfp) == VAR_2) {
  FUNC_24(VAR_15, "failed to add forward tag for %s: %s\n",
      VAR_25, FUNC_10(FUNC_11(VAR_20->dm_ctfp)));
  return (-1);
 }

 VAR_17->dd_ctfp = VAR_20->dm_ctfp;
 VAR_17->dd_type = VAR_22;

 VAR_18->dtt_object = VAR_20->dm_name;
 VAR_18->dtt_ctfp = VAR_20->dm_ctfp;
 VAR_18->dtt_type = VAR_22;

 return (0);
}
