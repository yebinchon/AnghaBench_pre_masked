
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
typedef int dt_node_t ;
struct TYPE_7__ {scalar_t__ di_type; int di_ctfp; int di_name; scalar_t__ di_iarg; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_8__ {int * pcb_hdl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char const*,int ,int ) ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void
FUNC_5(dt_node_t *VAR_4, dt_ident_t *VAR_5, int VAR_6, dt_node_t *VAR_7)
{
 if (VAR_5->di_type == VAR_1) {
  dtrace_hdl_t *VAR_8 = VAR_3->pcb_hdl;
  dtrace_typeinfo_t VAR_9;

  if (FUNC_1(VAR_5->di_iarg, &VAR_9) == -1) {
   FUNC_4(VAR_2,
       "failed to resolve type %s for identifier %s: %s\n",
       (const char *)VAR_5->di_iarg, VAR_5->di_name,
       FUNC_2(VAR_8, FUNC_3(VAR_8)));
  }

  VAR_5->di_ctfp = VAR_9.dtt_ctfp;
  VAR_5->di_type = VAR_9.dtt_type;
 }

 FUNC_0(VAR_4, VAR_5->di_ctfp, VAR_5->di_type, VAR_0);
}
