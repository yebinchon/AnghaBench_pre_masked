
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct unicx {size_t errcnt; TYPE_1__* err; int tabsiz; int multiline; int cause_hard; int bearer_hard; int git_hard; int pnni; int q2932; } ;
struct TYPE_2__ {size_t err; size_t act; scalar_t__ man; int ie; } ;







 int FUNC_0 (char*,size_t,struct unicx*) ;
 int FUNC_1 (struct unicx*,char*,...) ;
 int FUNC_2 (char,struct unicx*) ;

void
FUNC_3(char *VAR_0, size_t VAR_1, struct unicx *VAR_2)
{
 static const char *VAR_3[] = {
  "clr",
  "ign",
  "rep",
  "x03",
  "x04",
  "mig",
  "mrp",
  "x07",
  "def",
 };

 static const char *VAR_4[] = {
  [128] = "unk",
  [130] = "len",
  [131] = "bad",
  [132] = "acc",
  [129] = "mis",
 };

 u_int VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_2, "q2932		%d\n", VAR_2->q2932);
 FUNC_1(VAR_2, "pnni		%d\n", VAR_2->pnni);
 FUNC_1(VAR_2, "git_hard	%d\n", VAR_2->git_hard);
 FUNC_1(VAR_2, "bearer_hard	%d\n", VAR_2->bearer_hard);
 FUNC_1(VAR_2, "cause_hard	%d\n", VAR_2->cause_hard);

 FUNC_1(VAR_2, "multiline	%d\n", VAR_2->multiline);
 FUNC_1(VAR_2, "tabsiz		%d\n", VAR_2->tabsiz);

 FUNC_1(VAR_2, "errcnt		%d (", VAR_2->errcnt);
 for(VAR_5 = 0; VAR_5 < VAR_2->errcnt; VAR_5++) {
  FUNC_1(VAR_2, "%02x[%s,%s%s]", VAR_2->err[VAR_5].ie,
      VAR_4[VAR_2->err[VAR_5].err], VAR_3[VAR_2->err[VAR_5].act],
      VAR_2->err[VAR_5].man ? ",M" : "");
  if(VAR_5 != VAR_2->errcnt - 1)
   FUNC_2(' ', VAR_2);
 }
 FUNC_1(VAR_2, ")\n");
}
