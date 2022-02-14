
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf2_cu {scalar_t__ language; } ;
struct die_info {int tag; int * type; struct die_info* parent; } ;





 char* FUNC_0 (int *) ;
 char* FUNC_1 (struct die_info*,struct dwarf2_cu*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct die_info*,int*,struct dwarf2_cu*) ;
 char const* VAR_1 ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6 (struct die_info *VAR_2, struct dwarf2_cu *VAR_3)
{
  struct die_info *VAR_4;

  if (VAR_3->language != VAR_0)
    return ((void*)0);

  VAR_4 = VAR_2->parent;

  if (VAR_4 == ((void*)0))
    {
      return FUNC_5 ("");
    }
  else
    {
      switch (VAR_4->tag) {
      case 129:
 {


   if (VAR_4->type != ((void*)0) && FUNC_0 (VAR_4->type) != ((void*)0))
     {
       return FUNC_5 (FUNC_0 (VAR_4->type));
     }
   else
     {
       int VAR_5;
       char *VAR_6 = FUNC_6 (VAR_4, VAR_3);
       char *VAR_7 = FUNC_3 (VAR_6,
           FUNC_2 (VAR_4, &VAR_5,
             VAR_3));
       FUNC_4 (VAR_6);
       return VAR_7;
     }
 }
 break;
      case 130:
      case 128:
 {
   if (VAR_4->type != ((void*)0) && FUNC_0 (VAR_4->type) != ((void*)0))
     {
       return FUNC_5 (FUNC_0 (VAR_4->type));
     }
   else
     {
       const char *VAR_8 = VAR_1;
       char *VAR_9 = FUNC_6 (VAR_4, VAR_3);
       char *VAR_10;

       VAR_1 = VAR_9;
       VAR_10 = FUNC_1 (VAR_4, VAR_3);
       VAR_1 = VAR_8;

       FUNC_4 (VAR_9);
       return VAR_10;
     }
 }
      default:
 return FUNC_6 (VAR_4, VAR_3);
      }
    }
}
