
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ max_jumptable_ents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ,int ,int,int,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ,int ) ;
 int FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18 (rtx VAR_7, enum machine_mode VAR_8, rtx VAR_9, rtx VAR_10,
       rtx VAR_11)
{
  rtx VAR_12, VAR_13;

  if (FUNC_2 (VAR_9) > VAR_5->max_jumptable_ents)
    VAR_5->max_jumptable_ents = FUNC_2 (VAR_9);
  FUNC_9 (VAR_7, VAR_9, VAR_2, VAR_3, VAR_8, 1,
      VAR_11);



  if (VAR_8 != VAR_4)
    VAR_7 = FUNC_6 (VAR_4, VAR_7, 1);
  VAR_7 = FUNC_15 (VAR_4,
   FUNC_14 (VAR_4, VAR_7,
          FUNC_0 (FUNC_1 (VAR_0))),
   FUNC_13 (VAR_4, VAR_10));





    VAR_7 = FUNC_17 (VAR_0, VAR_7);
  VAR_12 = FUNC_12 (VAR_0);
  VAR_13 = FUNC_11 (VAR_0, VAR_7);
  FUNC_5 (VAR_12, VAR_13, 0);

  FUNC_10 (FUNC_16 (VAR_12, VAR_10));



  if (! VAR_1 && ! VAR_6)
    FUNC_8 ();
}
