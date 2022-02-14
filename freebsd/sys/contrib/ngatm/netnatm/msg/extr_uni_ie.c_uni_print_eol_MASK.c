
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {int doindent; scalar_t__ multiline; } ;


 int FUNC_0 (char,struct unicx*) ;

void
FUNC_1(struct unicx *VAR_0)
{
 if (VAR_0->multiline) {
  if (!VAR_0->doindent) {
   FUNC_0('\n', VAR_0);
   VAR_0->doindent = 1;
  }
 }
}
