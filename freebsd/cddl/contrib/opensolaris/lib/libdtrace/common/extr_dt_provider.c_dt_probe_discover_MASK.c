
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_32__ {scalar_t__ dtt_type; int dtt_flags; int * dtt_ctfp; int * dtt_object; } ;
typedef TYPE_2__ dtrace_typeinfo_t ;
struct TYPE_33__ {char* dtpd_provider; int dtpd_id; } ;
typedef TYPE_3__ dtrace_probedesc_t ;
struct TYPE_34__ {int dt_gen; } ;
typedef TYPE_4__ dtrace_hdl_t ;
struct TYPE_35__ {int dtargd_ndx; size_t dtargd_mapping; char* dtargd_native; char* dtargd_xlate; int dtargd_id; } ;
typedef TYPE_5__ dtrace_argdesc_t ;
struct TYPE_31__ {char* dtvd_name; } ;
struct TYPE_36__ {TYPE_1__ pv_desc; TYPE_4__* pv_hdl; } ;
typedef TYPE_6__ dt_provider_t ;
struct TYPE_37__ {size_t* pr_mapping; TYPE_2__* pr_argv; int * pr_xargv; int * pr_nargv; } ;
typedef TYPE_7__ dt_probe_t ;
typedef int dt_node_t ;
typedef int dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (char*,char*,char*,char*,...) ;
 int * FUNC_5 (char*,int ,int ,int ,int ,int ,int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_8 (int ,int *,scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__ const*,TYPE_5__*,int*) ;
 int * FUNC_11 (TYPE_6__*,int) ;
 TYPE_7__* FUNC_12 (TYPE_4__*,int *,int,int *,int,int *,int) ;
 int FUNC_13 (TYPE_6__*,TYPE_7__*) ;
 char* FUNC_14 (TYPE_3__ const*,TYPE_5__*) ;
 int FUNC_15 (TYPE_3__ const*) ;
 int FUNC_16 (TYPE_4__*,int ) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (TYPE_4__*,char*,TYPE_2__*) ;
 int VAR_13 ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*,char*,int) ;

__attribute__((used)) static dt_probe_t *
FUNC_22(dt_provider_t *VAR_14, const dtrace_probedesc_t *VAR_15)
{
 dtrace_hdl_t *VAR_16 = VAR_14->pv_hdl;
 char *VAR_17 = FUNC_14(VAR_15, FUNC_1(FUNC_15(VAR_15)));

 dt_node_t *VAR_18, *VAR_19;
 dt_ident_t *VAR_20;
 dt_probe_t *VAR_21;

 dtrace_typeinfo_t VAR_22;
 int VAR_23, VAR_24, VAR_25;

 int VAR_26 = VAR_10;
 dtrace_argdesc_t *VAR_27 = FUNC_1(sizeof (dtrace_argdesc_t) * VAR_26);
 dtrace_argdesc_t *VAR_28 = VAR_27;

 FUNC_2(FUNC_20(VAR_14->pv_desc.dtvd_name, VAR_15->dtpd_provider) == 0);
 FUNC_2(VAR_15->dtpd_id != VAR_5);

 FUNC_4("discovering probe %s:%s id=%d\n",
     VAR_14->pv_desc.dtvd_name, VAR_17, VAR_15->dtpd_id);

 for (VAR_24 = -1, VAR_23 = 0; VAR_23 < VAR_26; VAR_23++, VAR_28++) {
  FUNC_3(VAR_28, sizeof (dtrace_argdesc_t));
  VAR_28->dtargd_ndx = VAR_23;
  VAR_28->dtargd_id = VAR_15->dtpd_id;

  if (FUNC_7(VAR_16, VAR_3, VAR_28) != 0) {
   (void) FUNC_16(VAR_16, VAR_13);
   return (((void*)0));
  }

  if (VAR_28->dtargd_ndx == VAR_4)
   break;

  VAR_24 = FUNC_0(VAR_24, VAR_28->dtargd_mapping);
 }

 VAR_25 = VAR_23;
 VAR_24++;
 if (VAR_25 == 0 && VAR_24 == 0 &&
     FUNC_21(VAR_14->pv_desc.dtvd_name, "pid", 3) == 0) {
  VAR_24 = VAR_26;
  FUNC_10(VAR_16, VAR_15, VAR_27, &VAR_24);
  VAR_25 = VAR_24;
 }






 VAR_18 = FUNC_11(VAR_14, VAR_25);
 VAR_19 = FUNC_11(VAR_14, VAR_24);

 if ((VAR_25 != 0 && VAR_18 == ((void*)0)) || (VAR_24 != 0 && VAR_19 == ((void*)0)))
  return (((void*)0));

 VAR_20 = FUNC_5(VAR_17, VAR_7,
     VAR_8, VAR_15->dtpd_id, VAR_11, 0,
     &VAR_12, ((void*)0), VAR_16->dt_gen);

 if (VAR_20 == ((void*)0)) {
  (void) FUNC_16(VAR_16, VAR_9);
  return (((void*)0));
 }

 if ((VAR_21 = FUNC_12(VAR_16, VAR_20, 2,
     VAR_19, VAR_24, VAR_18, VAR_25)) == ((void*)0)) {
  FUNC_6(VAR_20);
  return (((void*)0));
 }

 FUNC_13(VAR_14, VAR_21);






 for (VAR_28 = VAR_27, VAR_23 = 0; VAR_23 < VAR_25; VAR_23++, VAR_28++) {
  if (FUNC_19(VAR_16,
      VAR_28->dtargd_native, &VAR_22) != 0) {
   FUNC_4("failed to resolve input type %s "
       "for %s:%s arg #%d: %s\n", VAR_28->dtargd_native,
       VAR_14->pv_desc.dtvd_name, VAR_17, VAR_23 + 1,
       FUNC_17(VAR_16, FUNC_18(VAR_16)));

   VAR_22.dtt_object = ((void*)0);
   VAR_22.dtt_ctfp = ((void*)0);
   VAR_22.dtt_type = VAR_2;
  } else {
   FUNC_8(VAR_21->pr_nargv[VAR_28->dtargd_mapping],
       VAR_22.dtt_ctfp, VAR_22.dtt_type,
       VAR_22.dtt_flags & VAR_6 ? VAR_1 : VAR_0);
  }

  if (VAR_22.dtt_type != VAR_2 && (VAR_28->dtargd_xlate[0] == '\0' ||
      FUNC_20(VAR_28->dtargd_native, VAR_28->dtargd_xlate) == 0)) {
   FUNC_9(VAR_21->pr_nargv[
       VAR_28->dtargd_mapping], VAR_21->pr_xargv[VAR_23]);
  } else if (FUNC_19(VAR_16,
      VAR_28->dtargd_xlate, &VAR_22) != 0) {
   FUNC_4("failed to resolve output type %s "
       "for %s:%s arg #%d: %s\n", VAR_28->dtargd_xlate,
       VAR_14->pv_desc.dtvd_name, VAR_17, VAR_23 + 1,
       FUNC_17(VAR_16, FUNC_18(VAR_16)));

   VAR_22.dtt_object = ((void*)0);
   VAR_22.dtt_ctfp = ((void*)0);
   VAR_22.dtt_type = VAR_2;
  } else {
   FUNC_8(VAR_21->pr_xargv[VAR_23],
       VAR_22.dtt_ctfp, VAR_22.dtt_type, VAR_0);
  }

  VAR_21->pr_mapping[VAR_23] = VAR_28->dtargd_mapping;
  VAR_21->pr_argv[VAR_23] = VAR_22;
 }

 return (VAR_21);
}
