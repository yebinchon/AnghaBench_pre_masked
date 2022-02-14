
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dt_provlist; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_provider_t ;
typedef int FILE ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char) ;

int
FUNC_8(dtrace_hdl_t *VAR_1, FILE *VAR_2, const char *VAR_3)
{
 dt_provider_t *VAR_4;
 char *VAR_5, *VAR_6;

 if (VAR_3 != ((void*)0)) {
  if ((VAR_6 = FUNC_7(VAR_3, '/')) != ((void*)0))
   VAR_3 = VAR_6 + 1;

  VAR_5 = FUNC_0(FUNC_6(VAR_3) + 1);
  FUNC_1(VAR_5, VAR_3);
  if (FUNC_5(VAR_2, "#ifndef\t_%s\n#define\t_%s\n\n",
      VAR_5, VAR_5) < 0)
   return (FUNC_4(VAR_1, VAR_0));
 }

 if (FUNC_5(VAR_2, "#include <unistd.h>\n\n") < 0)
  return (-1);

 if (FUNC_5(VAR_2, "#ifdef\t__cplusplus\nextern \"C\" {\n#endif\n\n") < 0)
  return (-1);

 for (VAR_4 = FUNC_3(&VAR_1->dt_provlist);
     VAR_4 != ((void*)0); VAR_4 = FUNC_3(VAR_4)) {
  if (FUNC_2(VAR_1, VAR_4, VAR_2) != 0)
   return (-1);
 }

 if (FUNC_5(VAR_2, "\n#ifdef\t__cplusplus\n}\n#endif\n") < 0)
  return (FUNC_4(VAR_1, VAR_0));

 if (VAR_3 != ((void*)0) && FUNC_5(VAR_2, "\n#endif\t/* _%s */\n", VAR_5) < 0)
  return (FUNC_4(VAR_1, VAR_0));

 return (0);
}
