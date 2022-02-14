
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {scalar_t__ copied_p; int insn; struct occr* next; scalar_t__ deleted_p; } ;
struct hash_table {unsigned int size; scalar_t__ set_p; struct expr** table; } ;
struct expr {int bitmap_index; scalar_t__ reaching_reg; struct occr* avail_occr; struct occr* antic_occr; int expr; struct expr* next_same_hash; } ;
typedef int sbitmap ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5 (sbitmap *VAR_1, sbitmap *VAR_2, sbitmap *VAR_3,
     struct hash_table *VAR_4)
{
  unsigned int VAR_5;


  if (VAR_1)
    {
      if (VAR_4->set_p)
 FUNC_4 (VAR_1, VAR_0);
      else
 FUNC_3 (VAR_1, VAR_0);
    }

  if (VAR_2)
    FUNC_4 (VAR_2, VAR_0);
  if (VAR_3)
    FUNC_4 (VAR_3, VAR_0);

  for (VAR_5 = 0; VAR_5 < VAR_4->size; VAR_5++)
    {
      struct expr *VAR_6;

      for (VAR_6 = VAR_4->table[VAR_5]; VAR_6 != ((void*)0); VAR_6 = VAR_6->next_same_hash)
 {
   int VAR_7 = VAR_6->bitmap_index;
   struct occr *VAR_8;




   if (VAR_1)
     FUNC_2 (VAR_6->expr, VAR_7, VAR_1, VAR_4->set_p);



   if (VAR_3)
     for (VAR_8 = VAR_6->antic_occr; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
       {
  FUNC_1 (VAR_3[FUNC_0 (VAR_8->insn)], VAR_7);



  VAR_8->deleted_p = 0;
       }



   if (VAR_2)
     for (VAR_8 = VAR_6->avail_occr; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
       {
  FUNC_1 (VAR_2[FUNC_0 (VAR_8->insn)], VAR_7);



  VAR_8->copied_p = 0;
       }



   VAR_6->reaching_reg = 0;
 }
    }
}
