
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ls_expr {unsigned int hash_index; struct ls_expr* next; struct expr* expr; int pattern; int invalid; } ;
struct expr {int expr; struct expr* next_same_hash; } ;
struct TYPE_2__ {unsigned int size; struct expr** table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct ls_expr*) ;
 int FUNC_2 (int ,struct ls_expr*,unsigned int) ;
 struct ls_expr* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (void)
{
  struct ls_expr * * VAR_4 = & VAR_2;
  struct ls_expr * VAR_5 = VAR_2;

  while (VAR_5 != ((void*)0))
    {
      struct expr * VAR_6;


      if (! VAR_5->invalid)
 {

   unsigned int VAR_7 = VAR_5->hash_index % VAR_1.size;

   for (VAR_6 = VAR_1.table[VAR_7];
        VAR_6 != ((void*)0);
        VAR_6 = VAR_6->next_same_hash)
     if (FUNC_0 (VAR_6->expr, VAR_5->pattern))
       break;
 }
      else
 VAR_6 = (struct expr *) 0;

      if (VAR_6)
 {

   VAR_5->expr = VAR_6;
   VAR_4 = & VAR_5->next;
   VAR_5 = VAR_5->next;
 }
      else
 {
   *VAR_4 = VAR_5->next;
   FUNC_2 (VAR_3, VAR_5, VAR_5->hash_index);
   FUNC_1 (VAR_5);
   VAR_5 = * VAR_4;
 }
    }


  if (VAR_0 && VAR_2 != ((void*)0))
    FUNC_3 (VAR_0);
}
