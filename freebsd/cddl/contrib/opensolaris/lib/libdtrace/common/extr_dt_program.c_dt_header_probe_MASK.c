
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_5__ {char* pr_name; int pr_nargc; } ;
typedef TYPE_1__ dt_probe_t ;
typedef int dt_idhash_t ;
struct TYPE_6__ {TYPE_1__* di_data; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_7__ {char* dthi_pmname; char* dthi_pfname; int dthi_out; int dthi_empty; int * dthi_dtp; } ;
typedef TYPE_3__ dt_header_info_t ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(dt_idhash_t *VAR_1, dt_ident_t *VAR_2, void *VAR_3)
{
 dt_header_info_t *VAR_4 = VAR_3;
 dtrace_hdl_t *VAR_5 = VAR_4->dthi_dtp;
 dt_probe_t *VAR_6 = VAR_2->di_data;
 char *VAR_7, *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_9 = VAR_6->pr_name;
 for (VAR_10 = 0; (VAR_9 = FUNC_5(VAR_9, '-')) != ((void*)0); VAR_10++)
  VAR_9++;

 VAR_7 = FUNC_0(FUNC_6(VAR_6->pr_name) + 1);
 FUNC_2(VAR_7, VAR_6->pr_name);

 VAR_8 = FUNC_0(FUNC_6(VAR_6->pr_name) + 1 + VAR_10);
 FUNC_1(VAR_8, VAR_6->pr_name);

 if (FUNC_4(VAR_4->dthi_out, "#define\t%s_%s(",
     VAR_4->dthi_pmname, VAR_7) < 0)
  return (FUNC_3(VAR_5, VAR_0));

 for (VAR_10 = 0; VAR_10 < VAR_6->pr_nargc; VAR_10++) {
  if (FUNC_4(VAR_4->dthi_out, "arg%d", VAR_10) < 0)
   return (FUNC_3(VAR_5, VAR_0));

  if (VAR_10 + 1 != VAR_6->pr_nargc &&
      FUNC_4(VAR_4->dthi_out, ", ") < 0)
   return (FUNC_3(VAR_5, VAR_0));
 }

 if (!VAR_4->dthi_empty) {
  if (FUNC_4(VAR_4->dthi_out, ") \\\n\t") < 0)
   return (FUNC_3(VAR_5, VAR_0));

  if (FUNC_4(VAR_4->dthi_out, "__dtrace_%s___%s(",
      VAR_4->dthi_pfname, VAR_8) < 0)
   return (FUNC_3(VAR_5, VAR_0));

  for (VAR_10 = 0; VAR_10 < VAR_6->pr_nargc; VAR_10++) {
   if (FUNC_4(VAR_4->dthi_out, "arg%d", VAR_10) < 0)
    return (FUNC_3(VAR_5, VAR_0));

   if (VAR_10 + 1 != VAR_6->pr_nargc &&
       FUNC_4(VAR_4->dthi_out, ", ") < 0)
    return (FUNC_3(VAR_5, VAR_0));
  }
 }

 if (FUNC_4(VAR_4->dthi_out, ")\n") < 0)
  return (FUNC_3(VAR_5, VAR_0));

 if (!VAR_4->dthi_empty) {
  if (FUNC_4(VAR_4->dthi_out,
      "#ifndef\t__sparc\n"
      "#define\t%s_%s_ENABLED() \\\n"
      "\t__dtraceenabled_%s___%s()\n"
      "#else\n"
      "#define\t%s_%s_ENABLED() \\\n"
      "\t__dtraceenabled_%s___%s(0)\n"
      "#endif\n",
      VAR_4->dthi_pmname, VAR_7,
      VAR_4->dthi_pfname, VAR_8,
      VAR_4->dthi_pmname, VAR_7,
      VAR_4->dthi_pfname, VAR_8) < 0)
   return (FUNC_3(VAR_5, VAR_0));

 } else {
  if (FUNC_4(VAR_4->dthi_out, "#define\t%s_%s_ENABLED() (0)\n",
      VAR_4->dthi_pmname, VAR_7) < 0)
   return (FUNC_3(VAR_5, VAR_0));
 }

 return (0);
}
