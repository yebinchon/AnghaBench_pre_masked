
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpp_dir {char* name; struct cpp_dir* next; } ;
typedef int cpp_reader ;
struct TYPE_2__ {struct cpp_dir* next; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 struct cpp_dir** VAR_4 ;
 struct cpp_dir* FUNC_2 (int *,struct cpp_dir*,struct cpp_dir*,struct cpp_dir*,int) ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_7, int VAR_8)
{


  if (VAR_4[VAR_3])
    VAR_6[VAR_3]->next = VAR_4[VAR_0];
  else
    VAR_4[VAR_3] = VAR_4[VAR_0];
  VAR_4[VAR_3] = FUNC_2 (VAR_7, VAR_4[VAR_3], 0, 0, VAR_8);



  VAR_4[VAR_1] = FUNC_2 (VAR_7, VAR_4[VAR_1], VAR_4[VAR_3],
          VAR_4[VAR_3], VAR_8);



  VAR_4[VAR_2] = FUNC_2 (VAR_7, VAR_4[VAR_2], VAR_4[VAR_3],
        VAR_4[VAR_1], VAR_8);


  if (VAR_8)
    {
      struct cpp_dir *VAR_9;

      FUNC_1 (VAR_5, "%s", FUNC_0("#include \"...\" search starts here:\n"));
      for (VAR_9 = VAR_4[VAR_2];; VAR_9 = VAR_9->next)
 {
   if (VAR_9 == VAR_4[VAR_1])
     FUNC_1 (VAR_5, "%s", FUNC_0("#include <...> search starts here:\n"));
   if (!VAR_9)
     break;
   FUNC_1 (VAR_5, " %s\n", VAR_9->name);
 }
      FUNC_1 (VAR_5, "%s", FUNC_0("End of search list.\n"));
    }
}
