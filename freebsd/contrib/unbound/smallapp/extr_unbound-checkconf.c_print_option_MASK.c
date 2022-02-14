
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strlist {int str; struct config_strlist* next; } ;
struct config_file {struct config_strlist* auto_trust_anchor_file_list; int pidfile; } ;


 int FUNC_0 (struct config_file*,char const*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int ,struct config_file*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(struct config_file* VAR_2, const char* VAR_3, int VAR_4)
{
 if(FUNC_5(VAR_3, "pidfile") == 0 && VAR_4) {
  char *VAR_5 = FUNC_2(VAR_2->pidfile, VAR_2, 1);
  if(!VAR_5) FUNC_1("out of memory");
  FUNC_4("%s\n", VAR_5);
  FUNC_3(VAR_5);
  return;
 }
 if(FUNC_5(VAR_3, "auto-trust-anchor-file") == 0 && VAR_4) {
  struct config_strlist* VAR_6 = VAR_2->auto_trust_anchor_file_list;
  for(; VAR_6; VAR_6=VAR_6->next) {
   char *VAR_7 = FUNC_2(VAR_6->str, VAR_2, 1);
   if(!VAR_7) FUNC_1("out of memory");
   FUNC_4("%s\n", VAR_7);
   FUNC_3(VAR_7);
  }
  return;
 }
 if(!FUNC_0(VAR_2, VAR_3, VAR_0, VAR_1))
  FUNC_1("cannot print option '%s'", VAR_3);
}
