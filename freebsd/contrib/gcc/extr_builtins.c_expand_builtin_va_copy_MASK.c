
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef int TREE_SIDE_EFFECTS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int,int) ;
 int VAR_8 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int,int) ;
 int VAR_9 ;

__attribute__((used)) static rtx
FUNC_15 (tree VAR_10)
{
  tree VAR_11, VAR_12, VAR_13;

  VAR_11 = FUNC_3 (VAR_10);
  VAR_12 = FUNC_3 (FUNC_0 (VAR_10));

  VAR_11 = FUNC_14 (VAR_11, 1);
  VAR_12 = FUNC_14 (VAR_12, 0);

  if (FUNC_1 (VAR_9) != VAR_0)
    {
      VAR_13 = FUNC_6 (VAR_4, VAR_9, VAR_11, VAR_12);
      TREE_SIDE_EFFECTS (VAR_14) = 1;
      FUNC_9 (VAR_14, VAR_8, VAR_7, VAR_3);
    }
  else
    {
      rtx VAR_15, VAR_16, VAR_17;


      VAR_15 = FUNC_9 (VAR_11, VAR_5, VAR_6, VAR_3);
      VAR_16 = FUNC_9 (VAR_12, VAR_5, VAR_6, VAR_3);
      VAR_17 = FUNC_9 (FUNC_5 (VAR_9), VAR_5,
     VAR_7, VAR_3);

      VAR_15 = FUNC_7 (VAR_6, VAR_15);
      VAR_16 = FUNC_7 (VAR_6, VAR_16);


      VAR_15 = FUNC_10 (VAR_1, VAR_15);
      FUNC_12 (VAR_15, FUNC_11 (FUNC_2 (FUNC_2 (VAR_11))));
      FUNC_13 (VAR_15, FUNC_4 (VAR_9));
      VAR_16 = FUNC_10 (VAR_1, VAR_16);
      FUNC_12 (VAR_16, FUNC_11 (FUNC_2 (FUNC_2 (VAR_12))));
      FUNC_13 (VAR_16, FUNC_4 (VAR_9));


      FUNC_8 (VAR_15, VAR_16, VAR_17, VAR_2);
    }

  return VAR_8;
}
