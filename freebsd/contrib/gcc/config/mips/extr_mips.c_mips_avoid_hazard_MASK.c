
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int all_noreorder_p; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;



 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_2, rtx VAR_3, int *VAR_4,
     rtx *VAR_5, rtx VAR_6)
{
  rtx VAR_7, VAR_8;
  int VAR_9, VAR_10;

  if (!FUNC_2 (VAR_3))
    return;

  VAR_7 = FUNC_3 (VAR_3);




  if (FUNC_0 (VAR_7) == VAR_0 || FUNC_5 (VAR_7) >= 0)
    VAR_1->machine->all_noreorder_p = 0;


  VAR_10 = FUNC_10 (VAR_3) / 4;
  if (VAR_10 == 0)
    return;





  if (*VAR_4 < 2 && FUNC_12 (VAR_6, VAR_7))
    VAR_9 = 2 - *VAR_4;
  else if (*VAR_5 != 0 && FUNC_11 (*VAR_5, VAR_7))
    VAR_9 = 1;
  else
    VAR_9 = 0;



  *VAR_4 += VAR_9;
  while (VAR_9-- > 0)
    FUNC_6 (FUNC_8 (), VAR_2);


  *VAR_4 += VAR_10;
  *VAR_5 = 0;
  if (FUNC_1 (VAR_3) >= 0)
    switch (FUNC_9 (VAR_3))
      {
      case 128:
 break;

      case 129:
 *VAR_4 = 0;
 break;

      case 130:
 VAR_8 = FUNC_13 (VAR_3);
 FUNC_7 (VAR_8 != 0);
 *VAR_5 = FUNC_4 (VAR_8);
 break;
      }
}
