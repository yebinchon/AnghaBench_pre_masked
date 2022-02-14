
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char** optv; int flag; int optc; struct TYPE_5__* next; TYPE_1__* module; } ;
typedef TYPE_2__ pam_chain_t ;
struct TYPE_4__ {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

int
FUNC_5(const char *VAR_2, pam_chain_t *VAR_3)
{
 char *VAR_4, **VAR_5, *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_3 != ((void*)0); ++VAR_7, VAR_3 = VAR_3->next) {

  VAR_4 = FUNC_4(VAR_3->module->path, '/');
  VAR_4 = FUNC_3(VAR_4 ? VAR_4 : VAR_3->module->path);
  if (VAR_4 == ((void*)0))
   return (VAR_0);
  for (VAR_6 = VAR_4; *VAR_6 && *VAR_6 != '.'; ++VAR_6)
                 ;
  *VAR_6 = '\0';
  FUNC_2("extern struct pam_module %s_pam_module;\n", VAR_4);

  FUNC_2("static char *%s_%d_optv[] = {\n", VAR_2, VAR_7);
  for (VAR_5 = VAR_3->optv; *VAR_5; ++VAR_5) {
   FUNC_2("\t\"");
   for (VAR_6 = *VAR_5; *VAR_6; ++VAR_6) {
    if (FUNC_1((unsigned char)*VAR_6) && *VAR_6 != '"')
     FUNC_2("%c", *VAR_6);
    else
     FUNC_2("\\x%02x", (unsigned char)*VAR_6);
   }
   FUNC_2("\",\n");
  }
  FUNC_2("\tNULL,\n");
  FUNC_2("};\n");

  if (VAR_3->next != ((void*)0))
   FUNC_2("static pam_chain_t %s_%d;\n", VAR_2, VAR_7 + 1);

  FUNC_2("static pam_chain_t %s_%d = {\n", VAR_2, VAR_7);
  FUNC_2("\t.module = &%s_pam_module,\n", VAR_4);
  FUNC_2("\t.flag = 0x%08x,\n", VAR_3->flag);
  FUNC_2("\t.optc = %d,\n", VAR_3->optc);
  FUNC_2("\t.optv = %s_%d_optv,\n", VAR_2, VAR_7);
  if (VAR_3->next)
   FUNC_2("\t.next = &%s_%d,\n", VAR_2, VAR_7 + 1);
  else
   FUNC_2("\t.next = NULL,\n");
  FUNC_2("};\n");
  FUNC_0(VAR_4);
 }
 return (VAR_1);
}
