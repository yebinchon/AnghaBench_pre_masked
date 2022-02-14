
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static rtx
FUNC_9 (void)
{
  rtx VAR_9;
  VAR_9 = FUNC_8 (VAR_8, 10000);
  VAR_9 = FUNC_7 (VAR_9, VAR_9, VAR_6);



  if (FUNC_0 (VAR_9) == VAR_4)
    return VAR_2;
  else if (FUNC_0 (VAR_9) == VAR_3)
    {
      int VAR_10;

      if (FUNC_6 (VAR_9, 0) != 2)
 return VAR_7;
      VAR_9 = FUNC_5 (VAR_9, 0, 1);
      if (FUNC_0 (VAR_9) != VAR_0)
 return VAR_7;
      VAR_9 = FUNC_4 (VAR_9, 0);




      if (FUNC_0 (VAR_9) == VAR_5
   && FUNC_2 (FUNC_3 (VAR_9))
   && FUNC_1 (FUNC_3 (VAR_9)) < VAR_1)
 return VAR_7;
      VAR_10 = (FUNC_2 (VAR_9) && FUNC_1 (VAR_9) < VAR_1);

      return (VAR_10 ? VAR_9 : VAR_2);
    }

  return VAR_7;
}
