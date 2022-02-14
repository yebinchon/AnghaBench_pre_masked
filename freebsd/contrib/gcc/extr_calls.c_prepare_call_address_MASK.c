
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__*,int ) ;

rtx
FUNC_8 (rtx VAR_7, rtx VAR_8,
        rtx *VAR_9, int VAR_10, int VAR_11)
{


  if (FUNC_0 (VAR_7) != VAR_3)


    VAR_7 = ((VAR_2 && VAR_10)
       ? FUNC_4 (FUNC_6 (VAR_0, VAR_7))
       : FUNC_6 (VAR_0, VAR_7));
  else if (! VAR_11)
    {

      if (VAR_5 && ! VAR_4)
 VAR_7 = FUNC_5 (VAR_1, VAR_7);

    }

  if (VAR_8 != 0)
    {
      VAR_8 = FUNC_2 (VAR_1, VAR_8);
      FUNC_3 (VAR_6, VAR_8);

      if (FUNC_1 (VAR_6))
 FUNC_7 (VAR_9, VAR_6);
    }

  return VAR_7;
}
