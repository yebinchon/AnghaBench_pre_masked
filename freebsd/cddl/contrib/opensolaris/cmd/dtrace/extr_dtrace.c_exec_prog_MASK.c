
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dtrace_stmt_f ;
struct TYPE_9__ {int dtat_class; int dtat_data; int dtat_name; } ;
struct TYPE_8__ {int dtat_class; int dtat_data; int dtat_name; } ;
struct TYPE_10__ {int dpi_matches; TYPE_2__ dpi_stmtattr; TYPE_1__ dpi_descattr; } ;
typedef TYPE_3__ dtrace_proginfo_t ;
typedef int dtrace_ecbdesc_t ;
struct TYPE_11__ {int dc_prog; int dc_name; int dc_desc; } ;
typedef TYPE_4__ dtrace_cmd_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int ,int ,int,char*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(const dtrace_cmd_t *VAR_5)
{
 dtrace_ecbdesc_t *VAR_6 = ((void*)0);
 dtrace_proginfo_t VAR_7;

 if (!VAR_1) {
  FUNC_3(VAR_0, VAR_5->dc_prog, &VAR_7);
 } else if (FUNC_2(VAR_0, VAR_5->dc_prog, &VAR_7) == -1) {
  FUNC_0("failed to enable '%s'", VAR_5->dc_name);
 } else {
  FUNC_6("%s '%s' matched %u probe%s\n",
      VAR_5->dc_desc, VAR_5->dc_name,
      VAR_7.dpi_matches, VAR_7.dpi_matches == 1 ? "" : "s");
 }

 if (VAR_3) {
  FUNC_7("\nStability attributes for %s %s:\n",
      VAR_5->dc_desc, VAR_5->dc_name);

  FUNC_7("\n\tMinimum Probe Description Attributes\n");
  FUNC_7("\t\tIdentifier Names: %s\n",
      FUNC_4(VAR_7.dpi_descattr.dtat_name));
  FUNC_7("\t\tData Semantics:   %s\n",
      FUNC_4(VAR_7.dpi_descattr.dtat_data));
  FUNC_7("\t\tDependency Class: %s\n",
      FUNC_1(VAR_7.dpi_descattr.dtat_class));

  FUNC_7("\n\tMinimum Statement Attributes\n");

  FUNC_7("\t\tIdentifier Names: %s\n",
      FUNC_4(VAR_7.dpi_stmtattr.dtat_name));
  FUNC_7("\t\tData Semantics:   %s\n",
      FUNC_4(VAR_7.dpi_stmtattr.dtat_data));
  FUNC_7("\t\tDependency Class: %s\n",
      FUNC_1(VAR_7.dpi_stmtattr.dtat_class));

  if (!VAR_1) {
   (void) FUNC_5(VAR_0, VAR_5->dc_prog,
       (dtrace_stmt_f *)VAR_4, &VAR_6);
  } else
   FUNC_7("\n");
 }

 VAR_2 += VAR_7.dpi_matches;
}
