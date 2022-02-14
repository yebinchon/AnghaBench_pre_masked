
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {int dummy; } ;
struct die_info {scalar_t__ tag; struct die_info* child; } ;
struct cleanup {int dummy; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 struct die_info* FUNC_2 (struct die_info*,struct dwarf2_cu*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (struct die_info*,struct dwarf2_cu*) ;
 char* FUNC_5 (struct die_info*,struct dwarf2_cu*) ;
 struct cleanup* FUNC_6 (int ,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 struct die_info* FUNC_7 (struct die_info*) ;
 char* FUNC_8 (char*,char const*) ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_9 (struct die_info *VAR_4, struct dwarf2_cu *VAR_5)
{
  struct cleanup *VAR_6 = ((void*)0);
  struct die_info *VAR_7 = FUNC_2 (VAR_4, VAR_5);
  char *VAR_8 = ((void*)0);




  if (VAR_7 != ((void*)0))
    {
      char *VAR_9 = FUNC_1 (VAR_7, VAR_5);
      VAR_1 = VAR_9;
      VAR_6 = FUNC_6 (VAR_3, VAR_9);
    }




  if (!VAR_2)
    {
      struct die_info *VAR_10;

      for (VAR_10 = VAR_4->child;
    VAR_10 != ((void*)0) && VAR_10->tag != 0;
    VAR_10 = FUNC_7 (VAR_10))
 {
   if (VAR_10->tag == VAR_0)
     {
       VAR_8 = FUNC_0 (FUNC_4
           (VAR_10, VAR_5));

       if (VAR_8 != ((void*)0))
  break;
     }
 }
    }

  if (VAR_8 == ((void*)0))
    {
      const char *VAR_11 = FUNC_5 (VAR_4, VAR_5);
      VAR_8 = FUNC_8 (VAR_1,
        VAR_11 ? VAR_11 : "<<anonymous>>");
    }

  if (VAR_6 != ((void*)0))
    FUNC_3 (VAR_6);

  return VAR_8;
}
