
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;

int
FUNC_14 (tree VAR_9)
{
  int VAR_10 = 0;
  tree VAR_11 = VAR_9;

  if (FUNC_4 (VAR_9))
    {
      VAR_11 = FUNC_9 (VAR_9);


      if (FUNC_0 (VAR_9))
 VAR_10 |= VAR_1;


      if (FUNC_3 (VAR_9))
 VAR_10 |= VAR_6;


      if (FUNC_2 (VAR_9))
 VAR_10 |= VAR_5;

      if (FUNC_1 (VAR_9))
 VAR_10 |= VAR_4;

      if (FUNC_6 (VAR_9))
 VAR_10 |= VAR_3;

      if (FUNC_7 (VAR_9) && ! FUNC_8 (VAR_9))
 VAR_10 |= VAR_0;

      VAR_10 = FUNC_13 (VAR_9, VAR_10);
    }
  else if (FUNC_10 (VAR_9) && FUNC_11 (VAR_9) && ! FUNC_8 (VAR_9))
    VAR_10 |= VAR_0;

  if (FUNC_8 (VAR_9))
    VAR_10 |= VAR_2;



  if (FUNC_5 (VAR_11) == VAR_8 && FUNC_12 (VAR_11))
    {
      VAR_10 |= VAR_7;
      VAR_10 &= ~(VAR_5 | VAR_0);
    }

  return VAR_10;
}
