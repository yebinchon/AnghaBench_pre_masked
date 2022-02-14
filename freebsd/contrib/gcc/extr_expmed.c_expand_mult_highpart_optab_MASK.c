
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef TYPE_2__* optab ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_10__ {TYPE_1__* handlers; } ;
struct TYPE_9__ {scalar_t__ insn_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int* VAR_5 ;
 scalar_t__ FUNC_4 (int,int,scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 () ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int** VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 int FUNC_13 () ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;

__attribute__((used)) static rtx
FUNC_14 (enum machine_mode VAR_15, rtx VAR_16, rtx VAR_17,
       rtx VAR_18, int VAR_19, int VAR_20)
{
  rtx VAR_21 = FUNC_11 (FUNC_2 (VAR_17), VAR_15);
  enum machine_mode VAR_22;
  optab VAR_23;
  rtx VAR_24;
  int VAR_25;

  FUNC_10 (!FUNC_3 (VAR_15));

  VAR_22 = FUNC_1 (VAR_15);
  VAR_25 = FUNC_0 (VAR_15);



  if (VAR_7[VAR_15] < VAR_20)
    {
      VAR_23 = VAR_19 ? VAR_13 : VAR_10;
      VAR_24 = FUNC_7 (VAR_15, VAR_23, VAR_16, VAR_21, VAR_18,
     VAR_19, VAR_3);
      if (VAR_24)
 return VAR_24;
    }



  if (VAR_25 - 1 < VAR_0
      && (VAR_7[VAR_15] + 2 * VAR_9[VAR_15][VAR_25-1]
   + 4 * VAR_5[VAR_15] < VAR_20))
    {
      VAR_23 = VAR_19 ? VAR_10 : VAR_13;
      VAR_24 = FUNC_7 (VAR_15, VAR_23, VAR_16, VAR_21, VAR_18,
     VAR_19, VAR_3);
      if (VAR_24)

 return FUNC_8 (VAR_15, VAR_24, VAR_16, VAR_21,
         VAR_24, VAR_19);
    }


  VAR_23 = VAR_19 ? VAR_14 : VAR_12;
  if (VAR_23->handlers[VAR_22].insn_code != VAR_1
      && VAR_8[VAR_22] < VAR_20)
    {
      VAR_24 = FUNC_7 (VAR_22, VAR_23, VAR_16, VAR_21, 0,
     VAR_19, VAR_4);
      if (VAR_24)
 return FUNC_9 (VAR_15, VAR_24);
    }


  if (VAR_11->handlers[VAR_22].insn_code != VAR_1
      && VAR_25 - 1 < VAR_0
      && VAR_6[VAR_22] + VAR_9[VAR_15][VAR_25-1] < VAR_20)
    {
      rtx VAR_26, VAR_27, VAR_28;





      FUNC_13 ();
      VAR_27 = FUNC_4 (VAR_22, VAR_15, VAR_16, VAR_19);
      VAR_28 = FUNC_4 (VAR_22, VAR_15, VAR_17, VAR_19);
      VAR_24 = FUNC_7 (VAR_22, VAR_11, VAR_27, VAR_28, 0,
     VAR_19, VAR_4);
      VAR_26 = FUNC_12 ();
      FUNC_6 ();

      if (VAR_24)
 {
   FUNC_5 (VAR_26);
   return FUNC_9 (VAR_15, VAR_24);
 }
    }


  VAR_23 = VAR_19 ? VAR_12 : VAR_14;
  if (VAR_23->handlers[VAR_22].insn_code != VAR_1
      && VAR_25 - 1 < VAR_0
      && (VAR_8[VAR_22] + 2 * VAR_9[VAR_15][VAR_25-1]
   + 4 * VAR_5[VAR_15] < VAR_20))
    {
      VAR_24 = FUNC_7 (VAR_22, VAR_23, VAR_16, VAR_21,
     VAR_2, ! VAR_19, VAR_4);
      if (VAR_24 != 0)
 {
   VAR_24 = FUNC_9 (VAR_15, VAR_24);

   return FUNC_8 (VAR_15, VAR_24, VAR_16, VAR_21,
           VAR_18, VAR_19);
 }
    }

  return 0;
}
