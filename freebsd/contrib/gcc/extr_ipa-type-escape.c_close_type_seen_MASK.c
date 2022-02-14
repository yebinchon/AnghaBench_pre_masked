
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int bitmap ;


 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static void
FUNC_14 (tree VAR_2)
{
  tree VAR_3;
  int VAR_4, VAR_5;
  tree VAR_6, VAR_7;


  VAR_2 = FUNC_11 (VAR_2, 1, 1);
  if (!VAR_2)
    return;

  VAR_5 = FUNC_8 (VAR_2);

  if (FUNC_9 (VAR_1, VAR_5))
    return;
  FUNC_10 (VAR_1, VAR_5);



  if (FUNC_5 (VAR_2))
    for (VAR_6 = FUNC_5 (VAR_2), VAR_4 = 0;
  FUNC_0 (VAR_6, VAR_4, VAR_7); VAR_4++)
      {
 tree VAR_8 = FUNC_1 (VAR_7);
 bitmap VAR_9 = FUNC_13
   (FUNC_8 (FUNC_7 (VAR_8)), 1);
 FUNC_10 (VAR_9, VAR_5);
 FUNC_14 (FUNC_11 (VAR_8, 1, 1));
      }



  for (VAR_3 = FUNC_6 (VAR_2);
       VAR_3;
       VAR_3 = FUNC_2 (VAR_3))
    {
      tree VAR_10;
      if (FUNC_3 (VAR_3) != VAR_0)
 continue;

      VAR_10 = FUNC_4 (VAR_3);
      if (FUNC_12 (VAR_10) >= 0)
 FUNC_14 (FUNC_11 (VAR_10, 1, 1));
    }
}
