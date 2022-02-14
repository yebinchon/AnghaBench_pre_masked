
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int n ;
typedef int longlong_t ;
typedef scalar_t__ int64_t ;
struct TYPE_10__ {int dtt_type; int dtt_ctfp; } ;
typedef TYPE_1__ dtrace_typeinfo_t ;
typedef int dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ dn_kind; int dn_flags; scalar_t__ dn_value; int dn_type; int dn_ctfp; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_12__ {int di_type; int di_ctfp; int di_name; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_13__ {int * pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,...) ;
 TYPE_4__* VAR_8 ;

__attribute__((used)) static void
FUNC_6(dt_node_t *VAR_9, dt_ident_t *VAR_10, int VAR_11, dt_node_t *VAR_12)
{
 dtrace_typeinfo_t VAR_13;
 dtrace_hdl_t *VAR_14 = VAR_8->pcb_hdl;
 char VAR_15[VAR_3];

 if (VAR_11 != 1) {
  FUNC_5(VAR_5, "%s[ ] prototype mismatch: %d arg%s"
      "passed, 1 expected\n", VAR_10->di_name,
      VAR_11, VAR_11 == 1 ? " " : "s ");
 }

 if (VAR_12->dn_kind != VAR_2) {
  FUNC_5(VAR_4, "%s[ ] argument #1 is incompatible with "
      "prototype:\n\tprototype: %s\n\t argument: %s\n",
      VAR_10->di_name, "integer constant",
      FUNC_2(VAR_12->dn_ctfp, VAR_12->dn_type, VAR_15, sizeof (VAR_15)));
 }

 if ((VAR_12->dn_flags & VAR_1) && (int64_t)VAR_12->dn_value < 0) {
  FUNC_5(VAR_6, "index %lld is out of range for array %s\n",
      (longlong_t)VAR_12->dn_value, VAR_10->di_name);
 }

 if (FUNC_1("uint64_t", &VAR_13) == -1) {
  FUNC_5(VAR_7, "failed to resolve type of %s: %s\n",
      VAR_10->di_name, FUNC_3(VAR_14, FUNC_4(VAR_14)));
 }

 VAR_10->di_ctfp = VAR_13.dtt_ctfp;
 VAR_10->di_type = VAR_13.dtt_type;

 FUNC_0(VAR_9, VAR_10->di_ctfp, VAR_10->di_type, VAR_0);
}
