
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_15__ {scalar_t__ dtt_type; int dtt_ctfp; int dtt_object; } ;
typedef TYPE_3__ dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_16__ {char* pr_name; TYPE_2__* pr_pvp; } ;
typedef TYPE_4__ dt_probe_t ;
struct TYPE_17__ {int dn_kind; } ;
typedef TYPE_5__ dt_node_t ;
struct TYPE_13__ {char* dtvd_name; } ;
struct TYPE_14__ {TYPE_1__ pv_desc; int * pv_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (int ,int ,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *,int ,char*,TYPE_3__*) ;
 size_t FUNC_11 (char*,size_t,char*,char*,char*,int) ;
 int FUNC_12 (int ,char*,char*,int ) ;

dt_node_t *
FUNC_13(dt_probe_t *VAR_7, uint_t VAR_8, dt_node_t *VAR_9)
{
 dtrace_hdl_t *VAR_10 = VAR_7->pr_pvp->pv_hdl;
 dtrace_typeinfo_t VAR_11;
 size_t VAR_12;
 char *VAR_13;

 VAR_12 = FUNC_11(((void*)0), 0, "__dtrace_%s___%s_arg%u",
     VAR_7->pr_pvp->pv_desc.dtvd_name, VAR_7->pr_name, VAR_8);

 VAR_13 = FUNC_2(VAR_12 + 1);

 (void) FUNC_11(VAR_13, VAR_12 + 1, "__dtrace_%s___%s_arg%u",
     VAR_7->pr_pvp->pv_desc.dtvd_name, VAR_7->pr_name, VAR_8);

 if (FUNC_10(VAR_10, VAR_3, VAR_13, &VAR_11) != 0) {
  VAR_11.dtt_object = VAR_3;
  VAR_11.dtt_ctfp = FUNC_0(VAR_10);
  VAR_11.dtt_type = FUNC_4(FUNC_0(VAR_10),
      VAR_1, VAR_13, FUNC_1(VAR_10));

  if (VAR_11.dtt_type == VAR_2 ||
      FUNC_7(VAR_11.dtt_ctfp) == VAR_2) {
   FUNC_12(VAR_5, "cannot define type %s: %s\n",
       VAR_13, FUNC_5(FUNC_6(VAR_11.dtt_ctfp)));
  }
 }

 FUNC_3(VAR_9, sizeof (dt_node_t));
 VAR_9->dn_kind = VAR_4;

 FUNC_9(VAR_9, VAR_11.dtt_ctfp, VAR_11.dtt_type, VAR_0);
 FUNC_8(VAR_9, VAR_6);

 return (VAR_9);
}
