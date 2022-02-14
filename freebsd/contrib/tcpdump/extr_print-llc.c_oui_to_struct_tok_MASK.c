
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tok {int dummy; } ;
struct oui_tok {scalar_t__ oui; struct tok* tok; } ;


 struct tok* VAR_0 ;
 struct oui_tok* VAR_1 ;

__attribute__((used)) static const struct tok *
FUNC_0(uint32_t VAR_2)
{
 const struct tok *VAR_3 = VAR_0;
 const struct oui_tok *VAR_4;

 for (VAR_4 = &VAR_1[0]; VAR_4->tok != ((void*)0); VAR_4++) {
  if (VAR_4->oui == VAR_2) {
   VAR_3 = VAR_4->tok;
   break;
  }
 }
 return (VAR_3);
}
