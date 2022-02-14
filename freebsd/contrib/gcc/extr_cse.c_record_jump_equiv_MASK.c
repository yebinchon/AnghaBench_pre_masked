
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int *,int *,int*,int*) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,int ,int ,int) ;
 int FUNC_9 (int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_4, int VAR_5)
{
  int VAR_6;
  rtx VAR_7, VAR_8;
  rtx VAR_9;
  enum machine_mode VAR_10, VAR_11, VAR_12;
  int VAR_13 = 0;
  enum rtx_code VAR_14;


  if (! FUNC_4 (VAR_4))
    return;
  VAR_9 = FUNC_7 (VAR_4);


  if (VAR_5)
    VAR_6 = (FUNC_3 (FUNC_2 (VAR_9), 2) == VAR_3);
  else
    VAR_6 = (FUNC_3 (FUNC_2 (VAR_9), 1) == VAR_3);




  VAR_14 = FUNC_0 (FUNC_3 (FUNC_2 (VAR_9), 0));
  VAR_7 = FUNC_6 (FUNC_3 (FUNC_3 (FUNC_2 (VAR_9), 0), 0), VAR_4);
  VAR_8 = FUNC_6 (FUNC_3 (FUNC_3 (FUNC_2 (VAR_9), 0), 1), VAR_4);

  VAR_14 = FUNC_5 (VAR_14, &VAR_7, &VAR_8, &VAR_11, &VAR_12);





  if (FUNC_1 (VAR_11) == VAR_0)
    return;

  if (! VAR_6)
    {
      VAR_14 = FUNC_9 (VAR_14, VAR_7, VAR_8, VAR_4);


      if (VAR_14 == VAR_1)
 return;
    }


  VAR_10 = VAR_11;
  if (VAR_12 != VAR_2)
    VAR_10 = VAR_12;

  FUNC_8 (VAR_14, VAR_10, VAR_7, VAR_8, VAR_13);
}
