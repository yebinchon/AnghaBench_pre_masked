
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct occr {int copied_p; int insn; struct occr* next; int deleted_p; } ;
struct expr {struct occr* avail_occr; struct occr* antic_occr; int * reaching_reg; struct expr* next_same_hash; } ;
typedef int rtx ;
struct TYPE_2__ {unsigned int size; struct expr** table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int ,struct expr*,int ) ;
 int FUNC_4 (struct expr*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct expr*) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  unsigned int VAR_2, VAR_3;
  struct expr *VAR_4;
  struct occr *VAR_5;
  struct occr *VAR_6;







  for (VAR_2 = 0; VAR_2 < VAR_0.size; VAR_2++)
    for (VAR_4 = VAR_0.table[VAR_2]; VAR_4 != ((void*)0); VAR_4 = VAR_4->next_same_hash)
      {





 if (VAR_4->reaching_reg == ((void*)0))
   continue;


 VAR_3 = 0;

 for (VAR_5 = VAR_4->antic_occr; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   {
     if (! VAR_5->deleted_p)
       continue;

     for (VAR_6 = VAR_4->avail_occr; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
       {
  rtx VAR_7 = VAR_6->insn;


  if (VAR_6->copied_p)
    continue;


  if (FUNC_2 (VAR_1, FUNC_1 (VAR_7)))
    continue;


  if (! FUNC_3 (FUNC_0 (VAR_6->insn),
            VAR_4,
            FUNC_0 (VAR_5->insn)))
    continue;

                VAR_3 = 1;


  FUNC_4 (VAR_4, VAR_7);
  VAR_6->copied_p = 1;
       }
   }

   if (VAR_3)
            FUNC_5 (VAR_4);
      }
}
