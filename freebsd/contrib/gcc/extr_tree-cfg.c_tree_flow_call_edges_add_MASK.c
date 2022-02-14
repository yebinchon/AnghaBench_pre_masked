
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ sbitmap ;
typedef int * edge ;
typedef int block_stmt_iterator ;
typedef TYPE_1__* basic_block ;
struct TYPE_11__ {TYPE_1__* prev_bb; } ;
struct TYPE_10__ {int index; } ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int * FUNC_9 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 int FUNC_11 (TYPE_1__*,TYPE_4__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int * FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15 (sbitmap VAR_6)
{
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = VAR_4;
  bool VAR_10 = 0;

  if (VAR_5 == VAR_3)
    return 0;

  if (! VAR_6)
    VAR_10 = 1;
  else
    VAR_10 = FUNC_1 (VAR_6, VAR_1->prev_bb->index);
  if (VAR_10)
    {
      basic_block VAR_11 = VAR_1->prev_bb;
      block_stmt_iterator VAR_12 = FUNC_5 (VAR_11);
      tree VAR_13 = VAR_2;
      if (!FUNC_3 (VAR_12))
 VAR_13 = FUNC_7 (VAR_12);

      if (VAR_13 && FUNC_12 (VAR_13))
 {
   edge VAR_14;

   VAR_14 = FUNC_9 (VAR_11, VAR_1);
   if (VAR_14)
     {
       FUNC_4 (VAR_14, FUNC_8 ());
       FUNC_2 ();
     }
 }
    }




  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
    {
      basic_block VAR_15 = FUNC_0 (VAR_7);
      block_stmt_iterator VAR_16;
      tree VAR_17, VAR_18;

      if (!VAR_15)
 continue;

      if (VAR_6 && !FUNC_1 (VAR_6, VAR_7))
 continue;

      VAR_16 = FUNC_5 (VAR_15);
      if (!FUNC_3 (VAR_16))
 {
   VAR_18 = FUNC_7 (VAR_16);
   do
     {
       VAR_17 = FUNC_7 (VAR_16);
       if (FUNC_12 (VAR_17))
  {
    edge VAR_19;
    if (VAR_17 != VAR_18)
      {
        VAR_19 = FUNC_13 (VAR_15, VAR_17);
        if (VAR_19)
   VAR_8++;
      }
    FUNC_11 (VAR_15, VAR_1, VAR_0);
  }
       FUNC_6 (&VAR_16);
     }
   while (!FUNC_3 (VAR_16));
 }
    }

  if (VAR_8)
    FUNC_14 ();

  return VAR_8;
}
