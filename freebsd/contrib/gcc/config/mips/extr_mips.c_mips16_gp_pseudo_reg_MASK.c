
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ mips16_gp_pseudo_rtx; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;

__attribute__((used)) static rtx
FUNC_14 (void)
{
  if (VAR_5->machine->mips16_gp_pseudo_rtx == VAR_1)
    {
      rtx VAR_7;
      rtx VAR_8, VAR_9;

      VAR_5->machine->mips16_gp_pseudo_rtx = FUNC_6 (VAR_2);



      FUNC_13 ();
      VAR_7 = FUNC_9 (VAR_4, FUNC_7 (1, VAR_6), VAR_3);
      FUNC_4 (VAR_5->machine->mips16_gp_pseudo_rtx,
        FUNC_8 (VAR_2, VAR_7));
      VAR_8 = FUNC_10 ();
      FUNC_5 ();

      FUNC_12 ();


      for (VAR_9 = FUNC_10 (); VAR_9 != VAR_1; VAR_9 = FUNC_0 (VAR_9))
 if (FUNC_2 (VAR_9)
     && FUNC_1 (VAR_9) == VAR_0)
   break;
      if (VAR_9 == VAR_1)
 VAR_9 = FUNC_10 ();
      VAR_8 = FUNC_3 (VAR_8, VAR_9);
      FUNC_11 ();
    }

  return VAR_5->machine->mips16_gp_pseudo_rtx;
}
