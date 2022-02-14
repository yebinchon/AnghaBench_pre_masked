
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dwarf2_cu {int dummy; } ;
struct die_info {scalar_t__ tag; struct die_info* child; } ;
struct attribute {scalar_t__ form; } ;
typedef scalar_t__ SYMBOL_VALUE_ADDRESS ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct attribute*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct attribute*) ;
 scalar_t__ FUNC_3 (int ,struct dwarf2_cu*) ;
 struct attribute* FUNC_4 (struct die_info*,int ,struct dwarf2_cu*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int VAR_4 ;
 struct symbol* FUNC_7 (struct die_info*,int *,struct dwarf2_cu*) ;
 struct die_info* FUNC_8 (struct die_info*) ;

__attribute__((used)) static void
FUNC_9 (struct die_info *VAR_5, struct dwarf2_cu *VAR_6)
{
  struct die_info *VAR_7;
  struct attribute *VAR_8;
  struct symbol *VAR_9;
  CORE_ADDR VAR_10 = (CORE_ADDR) 0;

  VAR_8 = FUNC_4 (VAR_5, VAR_1, VAR_6);
  if (VAR_8)
    {

      if (FUNC_2 (VAR_8))
        {
          VAR_10 = FUNC_3 (FUNC_0 (VAR_8), VAR_6);
        }
      else if (VAR_8->form == VAR_2 || VAR_8->form == VAR_3)
        {
   FUNC_5 ();
        }
      else
        {
   FUNC_6 ("DW_AT_location",
       "common block member");
        }
    }
  if (VAR_5->child != ((void*)0))
    {
      VAR_7 = VAR_5->child;
      while (VAR_7 && VAR_7->tag)
 {
   VAR_9 = FUNC_7 (VAR_7, ((void*)0), VAR_6);
   VAR_8 = FUNC_4 (VAR_7, VAR_0, VAR_6);
   if (VAR_8)
     {
       SYMBOL_VALUE_ADDRESS (VAR_11) =
  VAR_10 + FUNC_3 (FUNC_0 (VAR_8), VAR_6);
       FUNC_1 (VAR_11, &VAR_4);
     }
   VAR_7 = FUNC_8 (VAR_7);
 }
    }
}
