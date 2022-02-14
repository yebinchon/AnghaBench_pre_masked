
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int language; } ;
typedef enum language { ____Placeholder_language } language ;


 scalar_t__ VAR_0 ;
 struct symtab* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;

enum language
FUNC_2 (void)
{
  struct symtab *VAR_2;
  enum language VAR_3;

  if (VAR_0)
    {







      VAR_2 = FUNC_0 (FUNC_1 (VAR_0));
      if (VAR_2)
 VAR_3 = VAR_2->language;
      else
 VAR_3 = VAR_1;
    }
  else
    VAR_3 = VAR_1;

  return VAR_3;
}
