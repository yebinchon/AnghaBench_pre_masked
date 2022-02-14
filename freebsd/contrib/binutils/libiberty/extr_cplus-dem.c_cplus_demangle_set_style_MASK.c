
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangler_engine {scalar_t__ demangling_style; } ;
typedef enum demangling_styles { ____Placeholder_demangling_styles } demangling_styles ;


 int VAR_0 ;
 struct demangler_engine* VAR_1 ;
 scalar_t__ VAR_2 ;

enum demangling_styles
FUNC_0 (enum demangling_styles VAR_3)
{
  const struct demangler_engine *VAR_4 = VAR_1;

  for (; VAR_4->demangling_style != VAR_2; ++VAR_4)
    if (VAR_3 == VAR_4->demangling_style)
      {
 VAR_0 = VAR_3;
 return VAR_0;
      }

  return VAR_2;
}
