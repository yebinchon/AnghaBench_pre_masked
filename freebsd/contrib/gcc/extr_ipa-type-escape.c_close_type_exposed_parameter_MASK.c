
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__,int,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_12 (tree VAR_3)
{
  tree VAR_4;
  int VAR_5;

  VAR_3 = FUNC_9 (VAR_3, 0, 0);
  if (!VAR_3)
    return;
  VAR_5 = FUNC_5 (VAR_3);
  FUNC_8 (!FUNC_0 (VAR_3));

  if (FUNC_6 (VAR_2, VAR_5))
    return;
  FUNC_7 (VAR_2, VAR_5);



  for (VAR_4 = FUNC_4 (VAR_3);
       VAR_4;
       VAR_4 = FUNC_1 (VAR_4))
    {
      tree VAR_6;

      if (FUNC_2 (VAR_4) != VAR_1)
 continue;

      VAR_6 = FUNC_9 (FUNC_3 (VAR_4), 0, 0);
      FUNC_11 (VAR_6, VAR_0);


      if (FUNC_10 (VAR_6) == 0)
 FUNC_12 (VAR_6);
    }
}
