
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef void* uchar_t ;
struct TYPE_33__ {int dtt_flags; int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
struct TYPE_34__ {int dts_name; int dts_object; } ;
typedef TYPE_2__ dtrace_syminfo_t ;
struct TYPE_35__ {scalar_t__ dt_errno; int dt_gen; int * dt_tls; TYPE_6__* dt_externs; TYPE_5__* dt_ddefs; int * dt_globals; } ;
typedef TYPE_3__ dtrace_hdl_t ;
typedef int dtrace_attribute_t ;
struct TYPE_36__ {char* dn_string; int dn_flags; TYPE_6__* dn_ident; void* dn_kind; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_37__ {int dm_flags; } ;
typedef TYPE_5__ dt_module_t ;
typedef int dt_idhash_t ;
struct TYPE_38__ {scalar_t__ di_kind; int di_flags; int di_attr; int di_type; int di_ctfp; TYPE_2__* di_data; struct TYPE_38__* di_next; int di_name; } ;
typedef TYPE_6__ dt_ident_t ;
struct TYPE_39__ {int pcb_jmpbuf; int * pcb_locals; int pcb_globals; TYPE_3__* pcb_hdl; } ;
typedef int GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_3 (char*,char const*,int ,char*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,int *) ;
 TYPE_6__* FUNC_5 (char*,int ,int ,int ,int ,int ,int *,int *,int ) ;
 TYPE_6__* FUNC_6 (int *,char*,scalar_t__,scalar_t__,scalar_t__,int ,int ,int *,int *,int ) ;
 TYPE_6__* FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_6__* FUNC_11 (int *,char*) ;
 TYPE_5__* FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_16 (TYPE_3__*,int ) ;
 char const* FUNC_17 (TYPE_3__*,int ) ;
 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (TYPE_3__*,char const*,char*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int *,TYPE_2__*,TYPE_1__*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,int ) ;
 TYPE_2__* FUNC_23 (int) ;
 char* FUNC_24 (char*,char) ;
 int FUNC_25 (int ,char*,char const* const,char const*,...) ;
 TYPE_7__* VAR_34 ;

__attribute__((used)) static void
FUNC_26(dt_node_t *VAR_35, dt_idhash_t *VAR_36, uint_t VAR_37, int VAR_38)
{
 dtrace_hdl_t *VAR_39 = VAR_34->pcb_hdl;
 const char *VAR_40 = FUNC_8(VAR_36);
 int VAR_41 = 0;

 dtrace_attribute_t VAR_42 = VAR_30;
 dt_ident_t *VAR_43;
 dtrace_syminfo_t VAR_44;
 GElf_Sym VAR_45;

 const char *VAR_46, *VAR_47;
 uchar_t VAR_48;
 char *VAR_49;
 if ((VAR_49 = FUNC_24(VAR_35->dn_string, '`')) != ((void*)0)) {
  if (VAR_49 > VAR_35->dn_string && VAR_49[-1] == '`') {
   VAR_41++;
   VAR_49[-1] = '\0';
  }

  if (VAR_49 == VAR_35->dn_string + VAR_41)
   VAR_46 = VAR_41 ? VAR_4 : VAR_3;
  else
   VAR_46 = VAR_35->dn_string;

  *VAR_49++ = '\0';
  VAR_48 = VAR_20;

 } else if (VAR_37 == VAR_7) {
  VAR_46 = VAR_2;
  VAR_49 = VAR_35->dn_string + 1;
  VAR_48 = VAR_18;
 } else {
  VAR_46 = VAR_2;
  VAR_49 = VAR_35->dn_string;
  VAR_48 = VAR_20;
 }







 (void) FUNC_16(VAR_39, VAR_29);
 VAR_47 = VAR_41 ? "``" : "`";

 if (VAR_46 == VAR_2 && (
     (VAR_36 != VAR_39->dt_globals &&
     (VAR_43 = FUNC_7(VAR_36, VAR_49)) != ((void*)0)) ||
     (VAR_36 == VAR_39->dt_globals &&
     (VAR_43 = FUNC_11(&VAR_34->pcb_globals, VAR_49)) != ((void*)0)))) {






  if (VAR_43->di_kind != VAR_37 && VAR_36 == VAR_39->dt_globals) {
   FUNC_25(VAR_21, "%s '%s' may not be referenced "
       "as %s\n", FUNC_10(VAR_43->di_kind),
       VAR_43->di_name, FUNC_10(VAR_37));
  }






  if (VAR_43->di_kind != VAR_8 &&
      VAR_43->di_kind != VAR_7)
   VAR_42 = FUNC_4(VAR_35, VAR_43, ((void*)0));
  else {
   FUNC_15(VAR_35,
       FUNC_0(VAR_39), FUNC_1(VAR_39), VAR_0);
   VAR_42 = VAR_43->di_attr;
  }

  FUNC_21(VAR_35->dn_string);
  VAR_35->dn_string = ((void*)0);
  VAR_35->dn_kind = VAR_48;
  VAR_35->dn_ident = VAR_43;
  VAR_35->dn_flags |= VAR_15;

  if (VAR_43->di_flags & VAR_14)
   VAR_35->dn_flags |= VAR_17;

  FUNC_14(VAR_35, VAR_42);

 } else if (VAR_36 == VAR_39->dt_globals && VAR_46 != VAR_2 &&
     FUNC_19(VAR_39, VAR_46, VAR_49, &VAR_45, &VAR_44) == 0) {

  dt_module_t *VAR_50 = FUNC_12(VAR_39, VAR_44.dts_object);
  int VAR_51 = (VAR_50->dm_flags & VAR_5) == 0;
  static const char *const VAR_52[] = { "kernel", "user" };

  dtrace_typeinfo_t VAR_53;
  dtrace_syminfo_t *VAR_54;

  if (VAR_41 ^ VAR_51) {
   FUNC_25(VAR_24, "%s module '%s' symbol '%s' may "
       "not be referenced as a %s symbol\n", VAR_52[VAR_51],
       VAR_44.dts_object, VAR_44.dts_name, VAR_52[VAR_41]);
  }

  if (FUNC_20(VAR_39, &VAR_45, &VAR_44, &VAR_53) != 0) {




   if (VAR_39->dt_errno == VAR_27) {
    FUNC_25(VAR_25, "cannot use %s symbol "
        "%s%s%s in a %s D program\n",
        FUNC_13(VAR_50),
        VAR_44.dts_object, VAR_47, VAR_44.dts_name,
        FUNC_13(VAR_39->dt_ddefs));
   }

   FUNC_25(VAR_26,
       "no symbolic type information is available for "
       "%s%s%s: %s\n", VAR_44.dts_object, VAR_47, VAR_44.dts_name,
       FUNC_17(VAR_39, FUNC_18(VAR_39)));
  }

  VAR_43 = FUNC_5(VAR_49, VAR_9, 0, 0,
      VAR_31, 0, &VAR_33, ((void*)0), VAR_39->dt_gen);

  if (VAR_43 == ((void*)0))
   FUNC_22(VAR_34->pcb_jmpbuf, VAR_28);

  if (VAR_50->dm_flags & VAR_6)
   VAR_43->di_flags |= VAR_11;

  VAR_43->di_next = VAR_39->dt_externs;
  VAR_39->dt_externs = VAR_43;

  if ((VAR_54 = FUNC_23(sizeof (dtrace_syminfo_t))) == ((void*)0))
   FUNC_22(VAR_34->pcb_jmpbuf, VAR_28);

  FUNC_2(&VAR_44, VAR_54, sizeof (dtrace_syminfo_t));
  VAR_43->di_data = VAR_54;
  VAR_43->di_ctfp = VAR_53.dtt_ctfp;
  VAR_43->di_type = VAR_53.dtt_type;

  FUNC_21(VAR_35->dn_string);
  VAR_35->dn_string = ((void*)0);
  VAR_35->dn_kind = VAR_19;
  VAR_35->dn_ident = VAR_43;
  VAR_35->dn_flags |= VAR_15;

  FUNC_15(VAR_35, VAR_53.dtt_ctfp, VAR_53.dtt_type,
      VAR_53.dtt_flags);
  FUNC_14(VAR_35, VAR_31);

  if (VAR_41) {
   VAR_43->di_flags |= VAR_13;
   VAR_35->dn_flags |= VAR_16;
  }

 } else if (VAR_46 == VAR_2 && VAR_38 == VAR_1) {
  uint_t VAR_55 = VAR_14;
  uint_t VAR_56;

  if (FUNC_9(VAR_36, &VAR_56) == -1) {
   FUNC_25(VAR_23, "cannot create %s: limit on number "
       "of %s variables exceeded\n", VAR_49, VAR_40);
  }

  if (VAR_36 == VAR_34->pcb_locals)
   VAR_55 |= VAR_10;
  else if (VAR_36 == VAR_39->dt_tls)
   VAR_55 |= VAR_12;

  FUNC_3("create %s %s variable %s, id=%u\n",
      VAR_40, FUNC_10(VAR_37), VAR_49, VAR_56);

  if (VAR_37 == VAR_8 || VAR_37 == VAR_7) {
   VAR_43 = FUNC_6(VAR_36, VAR_49,
       VAR_37, VAR_55, VAR_56, VAR_30, 0,
       &VAR_32, ((void*)0), VAR_39->dt_gen);
  } else {
   VAR_43 = FUNC_6(VAR_36, VAR_49,
       VAR_37, VAR_55, VAR_56, VAR_30, 0,
       &VAR_33, ((void*)0), VAR_39->dt_gen);
  }

  if (VAR_43 == ((void*)0))
   FUNC_22(VAR_34->pcb_jmpbuf, VAR_28);






  if (VAR_43->di_kind != VAR_8 &&
      VAR_43->di_kind != VAR_7)
   VAR_42 = FUNC_4(VAR_35, VAR_43, ((void*)0));
  else {
   FUNC_15(VAR_35,
       FUNC_0(VAR_39), FUNC_1(VAR_39), VAR_0);
   VAR_42 = VAR_43->di_attr;
  }

  FUNC_21(VAR_35->dn_string);
  VAR_35->dn_string = ((void*)0);
  VAR_35->dn_kind = VAR_48;
  VAR_35->dn_ident = VAR_43;
  VAR_35->dn_flags |= VAR_15 | VAR_17;

  FUNC_14(VAR_35, VAR_42);

 } else if (VAR_46 != VAR_2) {
  FUNC_25(VAR_22, "failed to resolve %s%s%s: %s\n",
      VAR_35->dn_string, VAR_47, VAR_49,
      FUNC_17(VAR_39, FUNC_18(VAR_39)));
 } else {
  FUNC_25(VAR_22, "failed to resolve %s: %s\n",
      VAR_35->dn_string, FUNC_17(VAR_39, FUNC_18(VAR_39)));
 }
}
