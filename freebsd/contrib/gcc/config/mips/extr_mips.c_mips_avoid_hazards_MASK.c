
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int ignore_hazard_length_p; int all_noreorder_p; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__,scalar_t__,int*,scalar_t__*,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11 (void)
{
  rtx VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;


  FUNC_10 ();


  VAR_6->machine->ignore_hazard_length_p = 1;
  FUNC_9 (FUNC_7 ());

  VAR_6->machine->all_noreorder_p = 1;



  if (VAR_7)
    VAR_6->machine->all_noreorder_p = 0;



  if (VAR_4)
    VAR_6->machine->all_noreorder_p = 0;





  if (VAR_5 && !VAR_0)
    VAR_6->machine->all_noreorder_p = 0;

  VAR_9 = 0;
  VAR_12 = 2;
  VAR_11 = 0;
  VAR_10 = FUNC_6 (VAR_3, VAR_1);

  for (VAR_8 = FUNC_7 (); VAR_8 != 0; VAR_8 = FUNC_2 (VAR_8))
    if (FUNC_1 (VAR_8))
      {
 if (FUNC_0 (FUNC_3 (VAR_8)) == VAR_2)
   for (VAR_13 = 0; VAR_13 < FUNC_5 (FUNC_3 (VAR_8), 0); VAR_13++)
     FUNC_8 (VAR_9, FUNC_4 (FUNC_3 (VAR_8), 0, VAR_13),
          &VAR_12, &VAR_11, VAR_10);
 else
   FUNC_8 (VAR_9, VAR_8, &VAR_12,
        &VAR_11, VAR_10);

 VAR_9 = VAR_8;
      }
}
