
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int sibcall_blocked; scalar_t__ lr_save_eliminated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_4 () ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned int) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static unsigned long
FUNC_7 (void)
{
  unsigned int VAR_12 = 0;
  unsigned long VAR_13 = FUNC_5 ();

  if (FUNC_2 (VAR_13))

    return 0;



  if (VAR_9)
    VAR_12 |=
      (1 << VAR_1)
      | (1 << VAR_2)
      | (1 << VAR_3)
      | (1 << VAR_4);



  if (FUNC_3 (VAR_13))
    return VAR_12;

  VAR_12 |= FUNC_4 ();
  if (VAR_11 [VAR_3]
   || (VAR_12
       && VAR_10
       && FUNC_0 (VAR_13) == VAR_0
       && !VAR_7))
    VAR_12 |= 1 << VAR_3;

  if (VAR_6->machine->lr_save_eliminated)
    VAR_12 &= ~ (1 << VAR_3);

  if (VAR_5
      && ((FUNC_6 (VAR_12)
    + FUNC_1 (VAR_8)) % 2) != 0)
    {
      unsigned int VAR_14;
      for (VAR_14 = 4; VAR_14 <= 12; VAR_14++)
 if ((VAR_12 & (1 << VAR_14)) == 0)
   break;

      if (VAR_14 <= 12)
 VAR_12 |= (1 << VAR_14);
      else
 {
   VAR_6->machine->sibcall_blocked = 1;
   VAR_12 |= (1 << 3);
 }
    }

  return VAR_12;
}
