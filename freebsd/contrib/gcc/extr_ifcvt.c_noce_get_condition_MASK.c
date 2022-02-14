
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int,scalar_t__*,scalar_t__,int,int) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_12 (rtx VAR_3, rtx *VAR_4)
{
  rtx VAR_5, VAR_6, VAR_7;
  bool VAR_8;

  if (! FUNC_7 (VAR_3))
    return VAR_2;

  VAR_6 = FUNC_10 (VAR_3);



  VAR_8 = (FUNC_0 (FUNC_6 (FUNC_5 (VAR_6), 2)) == VAR_0
      && FUNC_6 (FUNC_6 (FUNC_5 (VAR_6), 2), 0) == FUNC_3 (VAR_3));



  VAR_5 = FUNC_6 (FUNC_5 (VAR_6), 0);
  VAR_7 = FUNC_6 (VAR_5, 0);
  if (FUNC_4 (VAR_7) && FUNC_2 (FUNC_1 (VAR_7)) == VAR_1)
    {
      *VAR_4 = VAR_3;

      if (VAR_8)
 VAR_5 = FUNC_9 (FUNC_11 (FUNC_0 (VAR_5)),
          FUNC_1 (VAR_5), VAR_7, FUNC_6 (VAR_5, 1));
      return VAR_5;
    }



  return FUNC_8 (VAR_3, VAR_5, VAR_8, VAR_4,
     VAR_2, 0, 1);
}
