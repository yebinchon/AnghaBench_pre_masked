
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int c_pretty_printer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,char*) ;

void
FUNC_4 (c_pretty_printer *VAR_4, tree VAR_5)
{
   int VAR_6;

  if (!FUNC_1 (VAR_5))
    VAR_5 = FUNC_0 (VAR_5);

  VAR_6 = FUNC_2 (VAR_5);
  if (VAR_6 & VAR_0)
    FUNC_3 (VAR_4, "const");
  if (VAR_6 & VAR_2)
    FUNC_3 (VAR_4, "volatile");
  if (VAR_6 & VAR_1)
    FUNC_3 (VAR_4, VAR_3 ? "restrict" : "__restrict__");
}
