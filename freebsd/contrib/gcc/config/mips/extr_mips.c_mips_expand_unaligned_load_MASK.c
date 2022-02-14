
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,unsigned int,int,int *,int *) ;

bool
FUNC_13 (rtx VAR_3, rtx VAR_4, unsigned int VAR_5, int VAR_6)
{
  rtx VAR_7, VAR_8, VAR_9;




  if (FUNC_0 (VAR_3) == VAR_2
      && FUNC_1 (VAR_3) == VAR_0
      && FUNC_3 (VAR_3) == 0
      && FUNC_1 (FUNC_4 (VAR_3)) == VAR_1)
    VAR_3 = FUNC_4 (VAR_3);



  if (FUNC_2 (FUNC_1 (VAR_3)) != VAR_5)
    return 0;

  if (!FUNC_12 (&VAR_4, VAR_5, VAR_6, &VAR_7, &VAR_8))
    return 0;

  VAR_9 = FUNC_11 (FUNC_1 (VAR_3));
  if (FUNC_1 (VAR_3) == VAR_0)
    {
      FUNC_6 (FUNC_7 (VAR_9, VAR_4, VAR_7));
      FUNC_6 (FUNC_8 (VAR_3, FUNC_5 (VAR_4), VAR_8, VAR_9));
    }
  else
    {
      FUNC_6 (FUNC_9 (VAR_9, VAR_4, VAR_7));
      FUNC_6 (FUNC_10 (VAR_3, FUNC_5 (VAR_4), VAR_8, VAR_9));
    }
  return 1;
}
