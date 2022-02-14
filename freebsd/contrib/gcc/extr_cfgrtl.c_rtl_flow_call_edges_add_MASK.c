
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ sbitmap ;
typedef scalar_t__ rtx ;
typedef int * edge ;
typedef TYPE_1__* basic_block ;
struct TYPE_12__ {TYPE_1__* prev_bb; } ;
struct TYPE_11__ {int index; } ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_7 () ;
 int VAR_4 ;
 int * FUNC_8 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_1__*,TYPE_4__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int * FUNC_15 (TYPE_1__*,scalar_t__) ;
 int FUNC_16 () ;

__attribute__((used)) static int
FUNC_17 (sbitmap VAR_7)
{
  int VAR_8;
  int VAR_9 = 0;
  int VAR_10 = VAR_5;
  bool VAR_11 = 0;

  if (VAR_6 == VAR_2)
    return 0;

  if (! VAR_7)
    VAR_11 = 1;
  else
    VAR_11 = FUNC_6 (VAR_7, VAR_1->prev_bb->index);
  if (VAR_11)
    {
      basic_block VAR_12 = VAR_1->prev_bb;
      rtx VAR_13 = FUNC_1 (VAR_12);


      while (VAR_13 != FUNC_2 (VAR_12)
      && FUNC_12 (VAR_13))
 VAR_13 = FUNC_5 (VAR_13);

      if (FUNC_14 (VAR_13))
 {
   edge VAR_14;

   VAR_14 = FUNC_8 (VAR_12, VAR_1);
   if (VAR_14)
     {
       FUNC_11 (FUNC_10 (VAR_3, VAR_4), VAR_14);
       FUNC_7 ();
     }
 }
    }





  for (VAR_8 = VAR_2; VAR_8 < VAR_10; VAR_8++)
    {
      basic_block VAR_15 = FUNC_0 (VAR_8);
      rtx VAR_16;
      rtx VAR_17;

      if (!VAR_15)
 continue;

      if (VAR_7 && !FUNC_6 (VAR_7, VAR_8))
 continue;

      for (VAR_16 = FUNC_1 (VAR_15); ; VAR_16 = VAR_17)
 {
   VAR_17 = FUNC_5 (VAR_16);
   if (FUNC_14 (VAR_16))
     {
       edge VAR_18;
       rtx VAR_19 = VAR_16;



       if (FUNC_3 (VAR_16))
  while (VAR_19 != FUNC_1 (VAR_15)
         && FUNC_12 (FUNC_4 (VAR_19)))
    VAR_19 = FUNC_4 (VAR_19);
       if (VAR_19 != FUNC_1 (VAR_15))
  {
    VAR_18 = FUNC_15 (VAR_15, VAR_19);
    if (VAR_18)
      VAR_9++;
  }

       FUNC_13 (VAR_15, VAR_1, VAR_0);
     }

   if (VAR_16 == FUNC_2 (VAR_15))
     break;
 }
    }

  if (VAR_9)
    FUNC_16 ();

  return VAR_9;
}
