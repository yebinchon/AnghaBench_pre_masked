
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alignment_context {int shift; int modemaski; int memsi; scalar_t__ aligned; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct alignment_context*,int ,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,int ) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;

void
FUNC_17 (enum machine_mode VAR_9, rtx VAR_10, rtx VAR_11, rtx VAR_12, rtx VAR_13)
{
  struct alignment_context VAR_14;
  rtx VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
  rtx VAR_20 = FUNC_9 (VAR_7);
  rtx VAR_21 = FUNC_8 ();
  rtx VAR_22 = FUNC_8 ();

  FUNC_7 (FUNC_11 (VAR_10, VAR_8));
  FUNC_7 (FUNC_1 (VAR_11));

  FUNC_10 (&VAR_14, VAR_11, VAR_9);


  if (!(VAR_14.aligned && FUNC_1 (VAR_12)))
    VAR_12 = FUNC_15 (VAR_12, VAR_9, VAR_14.shift);
  if (!(VAR_14.aligned && FUNC_1 (VAR_13)))
    VAR_13 = FUNC_15 (VAR_13, VAR_9, VAR_14.shift);


  VAR_17 = FUNC_5 (VAR_7, VAR_0, VAR_14.memsi, VAR_14.modemaski,
        VAR_5, 1, VAR_6);


  FUNC_3 (VAR_21);






  if (VAR_14.aligned && FUNC_1 (VAR_12))
    {
      VAR_15 = FUNC_6 (VAR_7, VAR_17);
      FUNC_16 (VAR_15, FUNC_0 (VAR_9), 0, VAR_7, VAR_12);
    }
  else
    VAR_15 = FUNC_6 (VAR_7, FUNC_5 (VAR_7, VAR_2, VAR_12, VAR_17,
         VAR_5, 1, VAR_6));
  if (VAR_14.aligned && FUNC_1 (VAR_13))
    {
      VAR_16 = FUNC_6 (VAR_7, VAR_17);
      FUNC_16 (VAR_16, FUNC_0 (VAR_9), 0, VAR_7, VAR_13);
    }
  else
    VAR_16 = FUNC_6 (VAR_7, FUNC_5 (VAR_7, VAR_2, VAR_13, VAR_17,
         VAR_5, 1, VAR_6));


  FUNC_14 (VAR_22, FUNC_13 (VAR_1, VAR_20, VAR_14.memsi,
           VAR_15, VAR_16));


  VAR_18 = FUNC_5 (VAR_7, VAR_0, VAR_20, VAR_14.modemaski,
         VAR_5, 1, VAR_6);
  VAR_19 = FUNC_12 (VAR_4, VAR_18, VAR_17);
  FUNC_4 (VAR_17, VAR_18);

  FUNC_14 (VAR_21, VAR_19);

  FUNC_3 (VAR_22);


  FUNC_2 (VAR_10, FUNC_5 (VAR_7, VAR_3, VAR_20, VAR_14.shift,
          VAR_5, 1, VAR_6), 1);
}
