
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {void* insn; scalar_t__ deleted_p; struct occr* next; } ;
struct hash_table {int n_elems; struct expr** table; int size; } ;
struct expr {struct occr* avail_occr; int * antic_occr; struct expr* next_same_hash; scalar_t__ bitmap_index; int expr; } ;
typedef void* rtx ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (void*) ;
 int VAR_1 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int) ;
 unsigned int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_2, rtx VAR_3, struct hash_table *VAR_4)
{
  int VAR_5;
  unsigned int VAR_6;
  struct expr *VAR_7, *VAR_8 = ((void*)0);
  struct occr *VAR_9;

  FUNC_7 (FUNC_1 (VAR_2) == VAR_0 && FUNC_3 (FUNC_4 (VAR_2)));

  VAR_6 = FUNC_9 (FUNC_2 (FUNC_4 (VAR_2)), VAR_4->size);

  VAR_7 = VAR_4->table[VAR_6];
  VAR_5 = 0;

  while (VAR_7 && 0 == (VAR_5 = FUNC_6 (VAR_7->expr, VAR_2)))
    {


      VAR_8 = VAR_7;
      VAR_7 = VAR_7->next_same_hash;
    }

  if (! VAR_5)
    {
      VAR_7 = FUNC_8 (sizeof (struct expr));
      VAR_1 += sizeof (struct expr);
      if (VAR_4->table[VAR_6] == ((void*)0))

 VAR_4->table[VAR_6] = VAR_7;
      else

 VAR_8->next_same_hash = VAR_7;




      VAR_7->expr = FUNC_5 (VAR_2);
      VAR_7->bitmap_index = VAR_4->n_elems++;
      VAR_7->next_same_hash = ((void*)0);
      VAR_7->antic_occr = ((void*)0);
      VAR_7->avail_occr = ((void*)0);
    }


  VAR_9 = VAR_7->avail_occr;

  if (VAR_9 && FUNC_0 (VAR_9->insn) == FUNC_0 (VAR_3))
    {




      VAR_9->insn = VAR_3;
    }
  else
    {

      VAR_9 = FUNC_8 (sizeof (struct occr));
      VAR_1 += sizeof (struct occr);

   VAR_9->insn = VAR_3;
   VAR_9->next = VAR_7->avail_occr;
   VAR_9->deleted_p = 0;
   VAR_7->avail_occr = VAR_9;
    }
}
