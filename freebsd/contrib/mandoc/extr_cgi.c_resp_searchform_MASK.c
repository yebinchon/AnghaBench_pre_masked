
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* manpath; int * arch; int * sec; int * query; } ;
struct req {int psz; int ** p; TYPE_1__ q; } ;
typedef enum focus { ____Placeholder_focus } focus ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 char** VAR_6 ;
 scalar_t__ FUNC_3 (char*,int *) ;

__attribute__((used)) static void
FUNC_4(const struct req *VAR_7, enum focus VAR_8)
{
 int VAR_9;

 FUNC_1("<form action=\"/%s\" method=\"get\">\n"
        "  <fieldset>\n"
        "    <legend>Manual Page Search Parameters</legend>\n",
        VAR_3);



 FUNC_1("    <input type=\"search\" name=\"query\" value=\"");
 if (VAR_7->q.query != ((void*)0))
  FUNC_0(VAR_7->q.query);
 FUNC_1( "\" size=\"40\"");
 if (VAR_8 == VAR_0)
  FUNC_1(" autofocus");
 FUNC_2(">");



 FUNC_1( "    <button type=\"submit\" name=\"apropos\" value=\"0\">"
  "man</button>\n"
  "    <button type=\"submit\" name=\"apropos\" value=\"1\">"
  "apropos</button>\n"
  "    <br/>\n");



 FUNC_2("    <select name=\"sec\">");
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_1("      <option value=\"%s\"", VAR_6[VAR_9]);
  if (((void*)0) != VAR_7->q.sec &&
      0 == FUNC_3(VAR_6[VAR_9], VAR_7->q.sec))
   FUNC_1(" selected=\"selected\"");
  FUNC_1(">%s</option>\n", VAR_5[VAR_9]);
 }
 FUNC_2("    </select>");



 FUNC_1( "    <select name=\"arch\">\n"
  "      <option value=\"default\"");
 if (((void*)0) == VAR_7->q.arch)
  FUNC_1(" selected=\"selected\"");
 FUNC_2(">All Architectures</option>");
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_1("      <option");
  if (((void*)0) != VAR_7->q.arch &&
      0 == FUNC_3(VAR_2[VAR_9], VAR_7->q.arch))
   FUNC_1(" selected=\"selected\"");
  FUNC_1(">%s</option>\n", VAR_2[VAR_9]);
 }
 FUNC_2("    </select>");



 if (VAR_7->psz > 1) {
  FUNC_2("    <select name=\"manpath\">");
  for (VAR_9 = 0; VAR_9 < (int)VAR_7->psz; VAR_9++) {
   FUNC_1("      <option");
   if (FUNC_3(VAR_7->q.manpath, VAR_7->p[VAR_9]) == 0)
    FUNC_1(" selected=\"selected\"");
   FUNC_1(">");
   FUNC_0(VAR_7->p[VAR_9]);
   FUNC_2("</option>");
  }
  FUNC_2("    </select>");
 }

 FUNC_2("  </fieldset>\n"
      "</form>");
}
