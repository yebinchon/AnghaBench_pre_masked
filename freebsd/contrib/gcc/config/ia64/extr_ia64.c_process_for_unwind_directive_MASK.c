
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_6__ {scalar_t__ next_bb; } ;
struct TYPE_5__ {TYPE_1__* machine; } ;
struct TYPE_4__ {int state_num; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int const FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_4 ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;

 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,int,int) ;

void
FUNC_14 (FILE *VAR_12, rtx VAR_13)
{
  bool VAR_14 = (VAR_9
   || (VAR_8 && !VAR_6));
  bool VAR_15 = FUNC_8 ();

  if (VAR_14 || VAR_15)
    {
      rtx VAR_16;

      if (FUNC_0 (VAR_13) == VAR_2
   && FUNC_2 (VAR_13) == VAR_3)
 {
   VAR_10 = FUNC_1 (VAR_13)->next_bb == VAR_0;


   if (VAR_11)
     {
       if (VAR_14)
  {
    FUNC_10 (VAR_12, "\t.body\n");
    FUNC_10 (VAR_12, "\t.copy_state %d\n",
      VAR_7->machine->state_num);
  }
       if (VAR_1 && VAR_15)
  FUNC_12 (VAR_13);
       VAR_11 = 0;
     }
 }

      if (FUNC_0 (VAR_13) == VAR_2 || ! FUNC_4 (VAR_13))
 return;

      VAR_16 = FUNC_9 (VAR_13, VAR_5, VAR_4);
      if (VAR_16)
 VAR_16 = FUNC_5 (VAR_16, 0);
      else
 VAR_16 = FUNC_3 (VAR_13);

      switch (FUNC_0 (VAR_16))
        {
 case 128:
   FUNC_13 (VAR_12, VAR_16, VAR_13, VAR_14, VAR_15);
   break;

 case 129:
   {
     int VAR_17;
     int VAR_18 = FUNC_7 (VAR_16, 0);
     for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
       {
  rtx VAR_19 = FUNC_6 (VAR_16, 0, VAR_17);
  if (FUNC_0 (VAR_19) == 128)
    FUNC_13 (VAR_12, VAR_19, VAR_13, VAR_14, VAR_15);
       }
     break;
   }

 default:
   FUNC_11 ();
 }
    }
}
