
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {void* insn; scalar_t__ deleted_p; struct occr* next; } ;
struct hash_table {int n_elems; struct expr** table; int size; } ;
struct expr {struct occr* avail_occr; struct occr* antic_occr; struct expr* next_same_hash; scalar_t__ bitmap_index; void* expr; } ;
typedef void* rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*) ;
 void* FUNC_2 (int) ;
 unsigned int FUNC_3 (void*,int,int*,int ) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_1, enum machine_mode VAR_2, rtx VAR_3, int VAR_4,
        int VAR_5, struct hash_table *VAR_6)
{
  int VAR_7, VAR_8;
  unsigned int VAR_9;
  struct expr *VAR_10, *VAR_11 = ((void*)0);
  struct occr *VAR_12, *VAR_13;

  VAR_9 = FUNC_3 (VAR_1, VAR_2, &VAR_8, VAR_6->size);




  if (VAR_8)
    return;

  VAR_10 = VAR_6->table[VAR_9];
  VAR_7 = 0;

  while (VAR_10 && 0 == (VAR_7 = FUNC_1 (VAR_10->expr, VAR_1)))
    {


      VAR_11 = VAR_10;
      VAR_10 = VAR_10->next_same_hash;
    }

  if (! VAR_7)
    {
      VAR_10 = FUNC_2 (sizeof (struct expr));
      VAR_0 += sizeof (struct expr);
      if (VAR_6->table[VAR_9] == ((void*)0))

 VAR_6->table[VAR_9] = VAR_10;
      else

 VAR_11->next_same_hash = VAR_10;


      VAR_10->expr = VAR_1;
      VAR_10->bitmap_index = VAR_6->n_elems++;
      VAR_10->next_same_hash = ((void*)0);
      VAR_10->antic_occr = ((void*)0);
      VAR_10->avail_occr = ((void*)0);
    }


  if (VAR_4)
    {
      VAR_12 = VAR_10->antic_occr;

      if (VAR_12 && FUNC_0 (VAR_12->insn) != FUNC_0 (VAR_3))
 VAR_12 = ((void*)0);

      if (VAR_12)



 ;
      else
 {

   VAR_12 = FUNC_2 (sizeof (struct occr));
   VAR_0 += sizeof (struct occr);
   VAR_12->insn = VAR_3;
   VAR_12->next = VAR_10->antic_occr;
   VAR_12->deleted_p = 0;
   VAR_10->antic_occr = VAR_12;
 }
    }

  if (VAR_5)
    {
      VAR_13 = VAR_10->avail_occr;

      if (VAR_13 && FUNC_0 (VAR_13->insn) == FUNC_0 (VAR_3))
 {




   VAR_13->insn = VAR_3;
 }
      else
 {

   VAR_13 = FUNC_2 (sizeof (struct occr));
   VAR_0 += sizeof (struct occr);
   VAR_13->insn = VAR_3;
   VAR_13->next = VAR_10->avail_occr;
   VAR_13->deleted_p = 0;
   VAR_10->avail_occr = VAR_13;
 }
    }
}
