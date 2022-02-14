
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum insn_code { ____Placeholder_insn_code } insn_code ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int (* predicate ) (int ,int) ;} ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (int,int *) ;
 scalar_t__** VAR_5 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 () ;
 TYPE_2__* VAR_6 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static rtx
FUNC_19 (rtx VAR_7, rtx VAR_8)
{
  enum machine_mode VAR_9 = FUNC_2 (VAR_7);
  enum machine_mode VAR_10 = FUNC_2 (VAR_8);
  enum machine_mode VAR_11;
  REAL_VALUE_TYPE VAR_12;
  int VAR_13, VAR_14;

  FUNC_6 (VAR_12, VAR_8);

  if (FUNC_5 (VAR_8))
    VAR_13 = FUNC_15 (VAR_8, VAR_3);
  else
    VAR_13 = FUNC_15 (FUNC_11 (VAR_9, VAR_8), VAR_3);

  for (VAR_11 = FUNC_1 (FUNC_3 (VAR_10));
       VAR_11 != VAR_10;
       VAR_11 = FUNC_4 (VAR_11))
    {
      enum insn_code VAR_15;
      rtx VAR_16, VAR_17;


      VAR_15 = FUNC_8 (VAR_9, VAR_11, 0);
      if (VAR_15 == VAR_0)
 continue;


      if (! FUNC_10 (VAR_11, &VAR_12))
 continue;

      VAR_16 = FUNC_0 (VAR_12, VAR_11);

      if (FUNC_5 (VAR_16))
 {


   if (! (*VAR_6[VAR_15].operand[1].predicate) (VAR_16, VAR_11))
     continue;

   VAR_14 = FUNC_15 (FUNC_13 (VAR_9, VAR_16), VAR_3);
   if (VAR_13 < VAR_14)
     continue;
 }
      else if (VAR_5[VAR_9][VAR_11])
 {
   VAR_16 = FUNC_11 (VAR_11, VAR_16);

   VAR_14 = FUNC_15 (FUNC_13 (VAR_9, VAR_16), VAR_3);
   if (VAR_13 < VAR_14)
     continue;
   VAR_16 = FUNC_18 (VAR_16);
 }
      else
 continue;




      VAR_16 = FUNC_12 (VAR_11, VAR_16);
      FUNC_9 (VAR_15, VAR_7, VAR_16, VAR_4);
      VAR_17 = FUNC_14 ();

      if (FUNC_7 (VAR_7))
 FUNC_16 (VAR_17, VAR_2, VAR_8);

      return VAR_17;
    }

  return VAR_1;
}
