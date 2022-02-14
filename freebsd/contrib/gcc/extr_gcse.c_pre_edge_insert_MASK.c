
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct occr {int deleted_p; struct occr* next; } ;
struct expr {scalar_t__ reaching_reg; int bitmap_index; struct occr* antic_occr; } ;
struct edge_list {int dummy; } ;
typedef int sbitmap ;
typedef int rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {scalar_t__ n_elems; } ;
struct TYPE_12__ {int size; int* elms; } ;
struct TYPE_11__ {int index; } ;
struct TYPE_10__ {int flags; } ;
typedef int SBITMAP_ELT_TYPE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct edge_list*,int) ;
 TYPE_2__* FUNC_1 (struct edge_list*,int) ;
 TYPE_7__* FUNC_2 (struct edge_list*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct edge_list*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_6 (scalar_t__,char*,int,...) ;
 int VAR_5 ;
 int FUNC_7 (struct expr*,TYPE_2__*,int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 TYPE_3__** VAR_6 ;
 int FUNC_9 (struct expr*) ;
 int * FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct expr*) ;

__attribute__((used)) static int
FUNC_14 (struct edge_list *VAR_7, struct expr **VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
  sbitmap *VAR_15;




  VAR_13 = VAR_6[0]->size;
  VAR_12 = FUNC_3 (VAR_7);
  VAR_15 = FUNC_10 (VAR_12, VAR_4.n_elems);
  FUNC_12 (VAR_15, VAR_12);

  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
    {
      int VAR_16;
      basic_block VAR_17 = FUNC_1 (VAR_7, VAR_9);

      for (VAR_10 = VAR_16 = 0; VAR_10 < VAR_13; VAR_10++, VAR_16 += VAR_2)
 {
   SBITMAP_ELT_TYPE VAR_18 = VAR_6[VAR_9]->elms[VAR_10];

   for (VAR_11 = VAR_16; VAR_18 && VAR_11 < (int) VAR_4.n_elems; VAR_11++, VAR_18 >>= 1)
     if ((VAR_18 & 1) != 0 && VAR_8[VAR_11]->reaching_reg != VAR_1)
       {
  struct expr *VAR_19 = VAR_8[VAR_11];
  struct occr *VAR_20;


  for (VAR_20 = VAR_19->antic_occr; VAR_20 != ((void*)0); VAR_20 = VAR_20->next)
    {
      if (! VAR_20->deleted_p)
        continue;



      if (!FUNC_5 (VAR_15[VAR_9], VAR_11))
        {
   rtx VAR_21;
   edge VAR_22 = FUNC_0 (VAR_7, VAR_9);
   if (VAR_22->flags & VAR_0)
     FUNC_7 (VAR_8[VAR_11], VAR_17, 0);
   else
     {
       VAR_21 = FUNC_9 (VAR_8[VAR_11]);
       FUNC_8 (VAR_21, VAR_22);
     }

   if (VAR_3)
     {
       FUNC_6 (VAR_3, "PRE/HOIST: edge (%d,%d), ",
         VAR_17->index,
         FUNC_2 (VAR_7, VAR_9)->index);
       FUNC_6 (VAR_3, "copy expression %d\n",
         VAR_19->bitmap_index);
     }

   FUNC_13 (VAR_19);
   FUNC_4 (VAR_15[VAR_9], VAR_11);
   VAR_14 = 1;
   VAR_5++;
        }
    }
       }
 }
    }

  FUNC_11 (VAR_15);
  return VAR_14;
}
