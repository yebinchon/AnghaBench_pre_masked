
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint_t ;
typedef int n2 ;
typedef int n1 ;
typedef int dtrace_hdl_t ;
typedef void* dtrace_attribute_t ;
struct TYPE_17__ {void* di_attr; } ;
struct TYPE_16__ {void* di_attr; } ;
struct TYPE_18__ {TYPE_2__ dx_ptrid; TYPE_1__ dx_souid; int dx_locals; int dx_dst_ctfp; int dx_dst_type; } ;
typedef TYPE_3__ dt_xlator_t ;
struct TYPE_19__ {struct TYPE_19__* dn_membexpr; int dn_membname; int dn_attr; struct TYPE_19__* dn_list; struct TYPE_19__* dn_members; TYPE_3__* dn_xlator; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_20__ {int ctm_type; } ;
typedef TYPE_5__ ctf_membinfo_t ;
struct TYPE_21__ {int pcb_globals; int * pcb_hdl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_5__*) ;
 int FUNC_3 (int ,int ,char*,int) ;
 void* FUNC_4 (void*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_4__*,char*,int) ;
 int FUNC_12 (int ,char*,int ,int ,...) ;
 TYPE_6__* VAR_8 ;

__attribute__((used)) static dt_node_t *
FUNC_13(dt_node_t *VAR_9, uint_t VAR_10)
{
 dtrace_hdl_t *VAR_11 = VAR_8->pcb_hdl;
 dt_xlator_t *VAR_12 = VAR_9->dn_xlator;
 dt_node_t *VAR_13;

 char VAR_14[VAR_3];
 char VAR_15[VAR_3];

 dtrace_attribute_t VAR_16 = VAR_7;
 ctf_membinfo_t VAR_17;






 FUNC_6(&VAR_8->pcb_globals, VAR_12->dx_locals);

 for (VAR_13 = VAR_9->dn_members; VAR_13 != ((void*)0); VAR_13 = VAR_13->dn_list) {
  if (FUNC_2(VAR_12->dx_dst_ctfp, VAR_12->dx_dst_type,
      VAR_13->dn_membname, &VAR_17) == VAR_1) {
   FUNC_12(VAR_5,
       "translator member %s is not a member of %s\n",
       VAR_13->dn_membname, FUNC_3(VAR_12->dx_dst_ctfp,
       VAR_12->dx_dst_type, VAR_14, sizeof (VAR_14)));
  }

  (void) FUNC_8(VAR_13, VAR_2);
  FUNC_10(VAR_13, VAR_12->dx_dst_ctfp, VAR_17.ctm_type,
      VAR_0);
  VAR_16 = FUNC_4(VAR_16, VAR_13->dn_attr);

  if (FUNC_9(VAR_13, VAR_13->dn_membexpr) == 0) {
   FUNC_12(VAR_4,
       "translator member %s definition uses "
       "incompatible types: \"%s\" = \"%s\"\n",
       VAR_13->dn_membname,
       FUNC_11(VAR_13, VAR_14, sizeof (VAR_14)),
       FUNC_11(VAR_13->dn_membexpr,
       VAR_15, sizeof (VAR_15)));
  }
 }

 FUNC_5(&VAR_8->pcb_globals, VAR_12->dx_locals);

 VAR_12->dx_souid.di_attr = VAR_16;
 VAR_12->dx_ptrid.di_attr = VAR_16;

 FUNC_10(VAR_9, FUNC_0(VAR_11), FUNC_1(VAR_11), VAR_0);
 FUNC_7(VAR_9, VAR_6);

 return (VAR_9);
}
