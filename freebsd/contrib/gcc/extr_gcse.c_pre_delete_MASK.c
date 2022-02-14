
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct occr {int deleted_p; int insn; struct occr* next; } ;
struct expr {int bitmap_index; int * reaching_reg; struct occr* antic_occr; struct expr* next_same_hash; } ;
typedef int rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_5__ {unsigned int size; struct expr** table; } ;
struct TYPE_4__ {size_t index; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_9 (scalar_t__,char*,int,int) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_2 ;
 int * FUNC_11 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13 (void)
{
  unsigned int VAR_5;
  int VAR_6;
  struct expr *VAR_7;
  struct occr *VAR_8;

  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1.size; VAR_5++)
    for (VAR_7 = VAR_1.table[VAR_5];
  VAR_7 != ((void*)0);
  VAR_7 = VAR_7->next_same_hash)
      {
 int VAR_9 = VAR_7->bitmap_index;




 for (VAR_8 = VAR_7->antic_occr; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
   {
     rtx VAR_10 = VAR_8->insn;
     rtx VAR_11;
     basic_block VAR_12 = FUNC_0 (VAR_10);


     if (FUNC_7 (VAR_3[VAR_12->index], VAR_9)
  && (VAR_11 = FUNC_12 (VAR_10)) != 0)
       {



  if (VAR_7->reaching_reg == ((void*)0))
    VAR_7->reaching_reg
      = FUNC_11 (FUNC_1 (FUNC_6 (VAR_11)));

  FUNC_10 (VAR_7->reaching_reg, FUNC_6 (VAR_11), VAR_10);
  FUNC_8 (VAR_10);
  VAR_8->deleted_p = 1;
  FUNC_5 (VAR_4, FUNC_2 (VAR_10));
  VAR_6 = 1;
  VAR_2++;

  if (VAR_0)
    {
      FUNC_9 (VAR_0,
        "PRE: redundant insn %d (expression %d) in ",
          FUNC_3 (VAR_10), VAR_9);
      FUNC_9 (VAR_0, "bb %d, reaching reg is %d\n",
        VAR_12->index, FUNC_4 (VAR_7->reaching_reg));
    }
       }
   }
      }

  return VAR_6;
}
