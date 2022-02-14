
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extended_symbol_info {int dummy; } ;
typedef int bfd ;


 int FUNC_0 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_1 (struct extended_symbol_info*) ;
 int FUNC_2 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_3 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8 (struct extended_symbol_info *VAR_0, bfd *VAR_1)
{
  FUNC_5 ("%s ", FUNC_0 (VAR_0), VAR_1);
  FUNC_7 ("%c ", FUNC_2 (VAR_0));

  if (FUNC_4 (FUNC_2 (VAR_0)))
    FUNC_7 ("        ");
  else
    {
      FUNC_6 (VAR_1, FUNC_3 (VAR_0));
      FUNC_7 (" ");
      if (FUNC_1 (VAR_0))
 FUNC_6 (VAR_1, FUNC_1 (VAR_0));
    }
}
