
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int LABEL_NUSES ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;

rtx
FUNC_4 (rtx VAR_0)
{
  rtx VAR_1;



  VAR_1 = FUNC_3 (VAR_0);

  if (VAR_1 == 0 || !FUNC_0 (VAR_1))
    {
      VAR_1 = FUNC_2 ();
      FUNC_1 (VAR_1, VAR_0);
      LABEL_NUSES (VAR_2) = 0;
    }
  return VAR_1;
}
