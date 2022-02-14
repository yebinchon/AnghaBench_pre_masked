
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct see_pre_extension_expr {int bitmap_index; int se_insn; } ;
typedef int * rtx ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {int size; int* elms; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int flags; } ;
typedef int SBITMAP_ELT_TYPE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 TYPE_6__* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,char*,int,...) ;
 int FUNC_10 (int) ;
 int * FUNC_11 () ;
 size_t FUNC_12 (int ) ;
 int * FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 TYPE_3__** VAR_4 ;
 int VAR_5 ;
 int FUNC_15 () ;

__attribute__((used)) static bool
FUNC_16 (struct see_pre_extension_expr **VAR_6)
{
  int VAR_7 = FUNC_5 (VAR_3);
  int VAR_8 = VAR_4[0]->size;
  size_t VAR_9 = FUNC_12 (VAR_5);

  int VAR_10 = 0;
  int VAR_11;
  int VAR_12;
  int VAR_13;

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
      int VAR_14;
      basic_block VAR_15 = FUNC_1 (VAR_3, VAR_11);

      for (VAR_12 = VAR_14 = 0; VAR_12 < VAR_8; VAR_12++, VAR_14 += VAR_1)
 {
   SBITMAP_ELT_TYPE VAR_16 = VAR_4[VAR_11]->elms[VAR_12];

   for (VAR_13 = VAR_14; VAR_16 && VAR_13 < (int) VAR_9;
        VAR_13++, VAR_16 >>= 1)
     if (VAR_16 & 1)
       {
  struct see_pre_extension_expr *VAR_17 = VAR_6[VAR_13];
  int VAR_18 = VAR_17->bitmap_index;
  rtx VAR_19 = ((void*)0);
  edge VAR_20 = FUNC_0 (VAR_3, VAR_11);

  FUNC_15 ();
  FUNC_7 (FUNC_6 (VAR_17->se_insn));
  VAR_19 = FUNC_11 ();
  FUNC_8 ();

  if (VAR_20->flags & VAR_0)
    {
      rtx VAR_21 = ((void*)0);

      VAR_21 = FUNC_13 (VAR_19, VAR_15);
      FUNC_10 (VAR_21 && FUNC_3 (VAR_21));

      if (VAR_2)
        {
   FUNC_9 (VAR_2,
     "PRE: end of bb %d, insn %d, ",
     VAR_15->index, FUNC_4 (VAR_21));
   FUNC_9 (VAR_2,
     "inserting expression %d\n", VAR_18);
        }
    }
  else
    {
      FUNC_14 (VAR_19, VAR_20);

      if (VAR_2)
        {
   FUNC_9 (VAR_2, "PRE: edge (%d,%d), ",
     VAR_15->index,
     FUNC_2 (VAR_3, VAR_11)->index);
   FUNC_9 (VAR_2, "inserting expression %d\n", VAR_18);
        }
    }
  VAR_10 = 1;
       }
 }
    }
  return VAR_10;
}
