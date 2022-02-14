
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct extended_symbol_info {TYPE_4__* elfinfo; } ;
typedef int bfd ;
struct TYPE_7__ {TYPE_2__* section; } ;
struct TYPE_5__ {int st_info; } ;
struct TYPE_8__ {TYPE_3__ symbol; TYPE_1__ internal_elf_sym; } ;
struct TYPE_6__ {char* name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_2 (struct extended_symbol_info*) ;
 int FUNC_3 (struct extended_symbol_info*) ;
 char* FUNC_4 (struct extended_symbol_info*) ;
 char FUNC_5 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_6 (struct extended_symbol_info*) ;
 scalar_t__ FUNC_7 (char) ;
 char* VAR_0 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int *) ;
 int FUNC_10 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12 (struct extended_symbol_info *VAR_2, bfd *VAR_3)
{
  FUNC_9 ("%-20s|", FUNC_1 (VAR_2), VAR_3);

  if (FUNC_7 (FUNC_5 (VAR_2)))
    {
      if (VAR_1 == 32)
 FUNC_11 ("        ");
      else
 FUNC_11 ("                ");
    }
  else
    FUNC_10 (VAR_3, FUNC_6 (VAR_2));

  FUNC_11 ("|   %c  |", FUNC_5 (VAR_2));

  if (FUNC_5 (VAR_2) == '-')
    {

      FUNC_11 ("%18s|  ", FUNC_4 (VAR_2));
      FUNC_11 (VAR_0, FUNC_3 (VAR_2));
      FUNC_11 ("|     |");
    }
  else
    {

      if (VAR_2->elfinfo)
 FUNC_11 ("%18s|",
  FUNC_8 (FUNC_0 (VAR_2->elfinfo->internal_elf_sym.st_info)));
      else
 FUNC_11 ("                  |");

      if (FUNC_2 (VAR_2))
 FUNC_10 (VAR_3, FUNC_2 (VAR_2));
      else
 {
   if (VAR_1 == 32)
     FUNC_11 ("        ");
   else
     FUNC_11 ("                ");
 }

      if (VAR_2->elfinfo)
 FUNC_11("|     |%s", VAR_2->elfinfo->symbol.section->name);
      else
 FUNC_11("|     |");
    }
}
