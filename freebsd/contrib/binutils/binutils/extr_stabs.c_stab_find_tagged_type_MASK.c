
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_tag {char* name; scalar_t__ kind; scalar_t__ type; scalar_t__ slot; struct stab_tag* next; } ;
struct stab_handle {struct stab_tag* tags; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef scalar_t__ debug_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct stab_tag*,int ,int) ;
 char* FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static debug_type
FUNC_7 (void *VAR_2, struct stab_handle *VAR_3,
         const char *VAR_4, int VAR_5, enum debug_type_kind VAR_6)
{
  char *VAR_7;
  debug_type VAR_8;
  struct stab_tag *VAR_9;

  VAR_7 = FUNC_4 (VAR_4, VAR_5);




  VAR_8 = FUNC_0 (VAR_2, VAR_7, VAR_0);
  if (VAR_8 != VAR_1)
    {
      FUNC_2 (VAR_7);
      return VAR_8;
    }


  for (VAR_9 = VAR_3->tags; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
    {
      if (VAR_9->name[0] == VAR_7[0]
   && FUNC_5 (VAR_9->name, VAR_7) == 0)
 {
   if (VAR_9->kind == VAR_0)
     VAR_9->kind = VAR_6;
   FUNC_2 (VAR_7);
   break;
 }
    }
  if (VAR_9 == ((void*)0))
    {
      VAR_9 = (struct stab_tag *) FUNC_6 (sizeof *VAR_9);
      FUNC_3 (VAR_9, 0, sizeof *VAR_9);

      VAR_9->next = VAR_3->tags;
      VAR_9->name = VAR_7;
      VAR_9->kind = VAR_6;
      VAR_9->slot = VAR_1;
      VAR_9->type = FUNC_1 (VAR_2, &VAR_9->slot, VAR_7);
      VAR_3->tags = VAR_9;
    }

  return VAR_9->type;
}
