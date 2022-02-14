
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  rtx VAR_6, VAR_7;

  VAR_6 = FUNC_7 (VAR_2, VAR_3);
  VAR_6 = FUNC_4 (VAR_0, VAR_6);
  FUNC_8 (VAR_6, FUNC_6 ());


  if (VAR_4 == VAR_5)
    {
      if (VAR_1)
        VAR_7 = FUNC_2 (FUNC_5 (VAR_0, VAR_4), VAR_6);
      else
        VAR_7 = FUNC_3 (FUNC_5 (VAR_0, VAR_4), VAR_6);

      return VAR_7;
    }

  VAR_7 = FUNC_1 (FUNC_5 (VAR_0, VAR_4),
       VAR_6,
       FUNC_0 (VAR_5 - VAR_4 + 1));
  return VAR_7;
}
