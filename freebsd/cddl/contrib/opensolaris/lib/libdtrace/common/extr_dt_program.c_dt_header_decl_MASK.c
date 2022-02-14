
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_6__ {char* pr_name; int pr_nargc; TYPE_2__* pr_nargs; } ;
typedef TYPE_1__ dt_probe_t ;
struct TYPE_7__ {int dn_type; int dn_ctfp; struct TYPE_7__* dn_list; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_idhash_t ;
struct TYPE_8__ {TYPE_1__* di_data; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_9__ {char* dthi_pfname; int dthi_out; int * dthi_dtp; } ;
typedef TYPE_4__ dt_header_info_t ;
typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(dt_idhash_t *VAR_2, dt_ident_t *VAR_3, void *VAR_4)
{
 dt_header_info_t *VAR_5 = VAR_4;
 dtrace_hdl_t *VAR_6 = VAR_5->dthi_dtp;
 dt_probe_t *VAR_7 = VAR_3->di_data;
 dt_node_t *VAR_8;
 char VAR_9[VAR_0];
 char *VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_11 = VAR_7->pr_name;
 for (VAR_12 = 0; (VAR_11 = FUNC_5(VAR_11, '-')) != ((void*)0); VAR_12++)
  VAR_11++;

 VAR_10 = FUNC_0(FUNC_6(VAR_7->pr_name) + 1 + VAR_12);
 FUNC_2(VAR_10, VAR_7->pr_name);

 if (FUNC_4(VAR_5->dthi_out, "extern void __dtrace_%s___%s(",
     VAR_5->dthi_pfname, VAR_10) < 0)
  return (FUNC_3(VAR_6, VAR_1));

 for (VAR_8 = VAR_7->pr_nargs, VAR_12 = 0; VAR_8 != ((void*)0); VAR_8 = VAR_8->dn_list, VAR_12++) {
  if (FUNC_4(VAR_5->dthi_out, "%s",
      FUNC_1(VAR_8->dn_ctfp, VAR_8->dn_type,
      VAR_9, sizeof (VAR_9))) < 0)
   return (FUNC_3(VAR_6, VAR_1));

  if (VAR_12 + 1 != VAR_7->pr_nargc &&
      FUNC_4(VAR_5->dthi_out, ", ") < 0)
   return (FUNC_3(VAR_6, VAR_1));
 }

 if (VAR_12 == 0 && FUNC_4(VAR_5->dthi_out, "void") < 0)
  return (FUNC_3(VAR_6, VAR_1));

 if (FUNC_4(VAR_5->dthi_out, ");\n") < 0)
  return (FUNC_3(VAR_6, VAR_1));

 if (FUNC_4(VAR_5->dthi_out,
     "#ifndef\t__sparc\n"
     "extern int __dtraceenabled_%s___%s(void);\n"
     "#else\n"
     "extern int __dtraceenabled_%s___%s(long);\n"
     "#endif\n",
     VAR_5->dthi_pfname, VAR_10, VAR_5->dthi_pfname, VAR_10) < 0)
  return (FUNC_3(VAR_6, VAR_1));

 return (0);
}
