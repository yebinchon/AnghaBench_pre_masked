
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int type; scalar_t__ visible; } ;
typedef enum symbol_type { ____Placeholder_symbol_type } symbol_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 scalar_t__ VAR_4 ;

enum symbol_type FUNC_1(struct symbol *VAR_5)
{
 enum symbol_type VAR_6 = VAR_5->type;

 if (VAR_6 == VAR_1) {
  if (FUNC_0(VAR_5) && VAR_5->visible == VAR_4)
   VAR_6 = VAR_0;
  else if (VAR_2 == VAR_3)
   VAR_6 = VAR_0;
 }
 return VAR_6;
}
