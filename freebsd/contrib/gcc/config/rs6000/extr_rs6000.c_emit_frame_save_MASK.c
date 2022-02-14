
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int,unsigned int) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_6, rtx VAR_7, enum machine_mode VAR_8,
   unsigned int VAR_9, int VAR_10, HOST_WIDE_INT VAR_11)
{
  rtx VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  rtx VAR_18, VAR_19;

  VAR_17 = FUNC_1 (VAR_10);


  if ((VAR_3 && FUNC_0 (VAR_8))
      || (VAR_4 && VAR_8 == VAR_0)
      || (VAR_5
   && FUNC_3 (VAR_8)
   && !FUNC_2 (VAR_10)))
    {


      VAR_13 = FUNC_7 (VAR_2, 11);
      FUNC_4 (VAR_13, VAR_17);

      VAR_18 = VAR_13;
      VAR_19 = VAR_17;
    }
  else
    {
      VAR_13 = VAR_17;
      VAR_18 = VAR_1;
      VAR_19 = VAR_1;
    }

  VAR_12 = FUNC_7 (VAR_8, VAR_9);
  VAR_16 = FUNC_6 (VAR_2, VAR_6, VAR_13);
  VAR_15 = FUNC_5 (VAR_8, VAR_16);

  VAR_14 = FUNC_4 (VAR_15, VAR_12);

  FUNC_8 (VAR_14, VAR_7, VAR_11, VAR_18, VAR_19);
}
