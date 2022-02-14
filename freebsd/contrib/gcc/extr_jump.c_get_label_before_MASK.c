
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int LABEL_NUSES ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

rtx
FUNC_5 (rtx VAR_0)
{
  rtx VAR_1;



  VAR_1 = FUNC_4 (VAR_0);

  if (VAR_1 == 0 || !FUNC_0 (VAR_1))
    {
      rtx VAR_2 = FUNC_1 (VAR_0);

      VAR_1 = FUNC_3 ();
      FUNC_2 (VAR_1, VAR_2);
      LABEL_NUSES (VAR_3) = 0;
    }
  return VAR_1;
}
