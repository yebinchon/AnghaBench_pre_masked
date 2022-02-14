
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {int tag; struct die_info* child; } ;
typedef int CORE_ADDR ;




 scalar_t__ FUNC_0 (struct die_info*,int *,int *,struct dwarf2_cu*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct die_info* FUNC_3 (struct die_info*) ;

__attribute__((used)) static void
FUNC_4 (struct die_info *VAR_0,
       CORE_ADDR *VAR_1, CORE_ADDR *VAR_2,
       struct dwarf2_cu *VAR_3)
{
  CORE_ADDR VAR_4 = (CORE_ADDR) -1;
  CORE_ADDR VAR_5 = (CORE_ADDR) 0;
  CORE_ADDR VAR_6, VAR_7;

  if (FUNC_0 (VAR_0, &VAR_6, &VAR_7, VAR_3))
    {
      VAR_4 = VAR_6;
      VAR_5 = VAR_7;
    }
  else
    {
      struct die_info *VAR_8 = VAR_0->child;

      while (VAR_8 && VAR_8->tag)
 {
   switch (VAR_8->tag) {
   case 128:
     if (FUNC_0 (VAR_8, &VAR_6, &VAR_7, VAR_3))
       {
  VAR_4 = FUNC_2 (VAR_4, VAR_6);
  VAR_5 = FUNC_1 (VAR_5, VAR_7);
       }
     break;
   case 129:
     FUNC_4 (VAR_8, &VAR_6, &VAR_7, VAR_3);

     if (VAR_6 != ((CORE_ADDR) -1))
       {
  VAR_4 = FUNC_2 (VAR_4, VAR_6);
  VAR_5 = FUNC_1 (VAR_5, VAR_7);
       }
     break;
   default:

     break;
   }

   VAR_8 = FUNC_3 (VAR_8);
 }
    }

  *VAR_1 = VAR_4;
  *VAR_2 = VAR_5;
}
