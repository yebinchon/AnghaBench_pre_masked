
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *,int *) ;
 int * FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static rtx
FUNC_11 (rtx VAR_3, enum rtx_code VAR_4,
            enum machine_mode VAR_5)
{
  rtx VAR_6, VAR_7;
  rtx VAR_8 = ((void*)0);

  if (!VAR_3
      || !FUNC_1 (VAR_3)
      || (VAR_4 != VAR_0 && VAR_4 != VAR_2))
    return ((void*)0);

  VAR_6 = FUNC_4 (VAR_5, VAR_3);
  if (VAR_4 == VAR_0)
    VAR_8 = FUNC_6 (FUNC_0 (VAR_3), VAR_6);
  else
    VAR_8 = FUNC_7 (FUNC_0 (VAR_3), VAR_6);

  FUNC_10 ();
  FUNC_2 (FUNC_5 (VAR_1, VAR_3, VAR_8));
  VAR_7 = FUNC_8 ();
  FUNC_3 ();

  if (FUNC_9 (VAR_7))


    return ((void*)0);
  return VAR_7;
}
