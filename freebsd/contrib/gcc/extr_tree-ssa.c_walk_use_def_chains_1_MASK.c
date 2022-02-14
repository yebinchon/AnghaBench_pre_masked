
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* walk_use_def_chains_fn ) (int ,int ,void*) ;
typedef int tree ;
struct pointer_set_t {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pointer_set_t*,int ) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_2, walk_use_def_chains_fn VAR_3, void *VAR_4,
         struct pointer_set_t *VAR_5, bool VAR_6)
{
  tree VAR_7;

  if (FUNC_4 (VAR_5, VAR_2))
    return 0;

  VAR_7 = FUNC_2 (VAR_2);

  if (FUNC_3 (VAR_7) != VAR_0)
    {

      return VAR_3 (VAR_2, VAR_7, VAR_4);
    }
  else
    {
      int VAR_8;



      if (!VAR_6)
 for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_7); VAR_8++)
   if (VAR_3 (FUNC_0 (VAR_7, VAR_8), VAR_7, VAR_4))
     return 1;


      for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_7); VAR_8++)
 {
   tree VAR_9 = FUNC_0 (VAR_7, VAR_8);
   if (FUNC_3 (VAR_9) == VAR_1
       && FUNC_5 (VAR_9, VAR_3, VAR_4, VAR_5, VAR_6))
     return 1;
 }



      if (VAR_6)
 for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_7); VAR_8++)
   if (VAR_3 (FUNC_0 (VAR_7, VAR_8), VAR_7, VAR_4))
     return 1;
    }

  return 0;
}
