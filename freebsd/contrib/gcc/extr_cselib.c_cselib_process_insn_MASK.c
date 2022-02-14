
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_8__ {TYPE_2__* elt; } ;
struct TYPE_7__ {int n_elements; } ;
struct TYPE_5__ {int val_rtx; } ;
struct TYPE_6__ {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_13 (int) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int FUNC_15 () ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (scalar_t__,int ,int *) ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int FUNC_21 () ;

void
FUNC_22 (rtx VAR_15)
{
  int VAR_16;
  rtx VAR_17;

  if (FUNC_20 (VAR_15, VAR_5, ((void*)0)))
    VAR_11 = 1;
  VAR_10 = VAR_15;


  if (FUNC_7 (VAR_15)
      || (FUNC_1 (VAR_15)
   && FUNC_20 (VAR_15, VAR_7, ((void*)0)))
      || (FUNC_9 (VAR_15)
   && FUNC_3 (FUNC_10 (VAR_15)) == VAR_0
   && FUNC_8 (FUNC_10 (VAR_15))))
    {
      if (FUNC_20 (VAR_15, VAR_6, ((void*)0)))
        VAR_11 = 0;
      FUNC_15 ();
      return;
    }

  if (! FUNC_6 (VAR_15))
    {
      if (FUNC_20 (VAR_15, VAR_6, ((void*)0)))
        VAR_11 = 0;
      VAR_10 = 0;
      return;
    }




  if (FUNC_1 (VAR_15))
    {
      for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
 if (VAR_8[VAR_16]
     || (FUNC_13 (VAR_16) && FUNC_13 (VAR_16)->elt
  && FUNC_5 (VAR_16,
        FUNC_4 (FUNC_13 (VAR_16)->elt->u.val_rtx))))
   FUNC_17 (VAR_16, VAR_14[VAR_16]);

      if (! FUNC_2 (VAR_15))
 FUNC_16 (VAR_9);
    }

  FUNC_19 (VAR_15);
  if (FUNC_1 (VAR_15))
    for (VAR_17 = FUNC_0 (VAR_15); VAR_17; VAR_17 = FUNC_14 (VAR_17, 1))
      if (FUNC_3 (FUNC_14 (VAR_17, 0)) == VAR_1)
 FUNC_18 (FUNC_14 (FUNC_14 (VAR_17, 0), 0));

  if (FUNC_20 (VAR_15, VAR_6, ((void*)0)))
    VAR_11 = 0;
  VAR_10 = 0;

  if (VAR_13 > VAR_3



      && (unsigned int)VAR_13 > VAR_12->n_elements / 4)
    FUNC_21 ();
}
