
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char const*,char const*,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_15 (char const*) ;
 int FUNC_16 (int ,int) ;
 int VAR_10 ;
 int FUNC_17 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_18 (tree VAR_11)
{
  tree VAR_12, VAR_13, VAR_14;
  const char *VAR_15, *VAR_16;

  if (!FUNC_17 (VAR_11,
    VAR_3, VAR_3, VAR_1, VAR_4))
    return 0;

  VAR_12 = FUNC_1 (VAR_11);
  VAR_13 = FUNC_1 (FUNC_0 (VAR_11));
  VAR_14 = FUNC_1 (FUNC_0 (FUNC_0 (VAR_11)));


  if (FUNC_10 (VAR_14))
    return FUNC_13 (VAR_7, VAR_8,
         VAR_12, VAR_13);


  if (FUNC_14 (VAR_12, VAR_13, 0))
    return FUNC_12 (VAR_7, VAR_8, VAR_14);

  VAR_15 = FUNC_5 (VAR_12);
  VAR_16 = FUNC_5 (VAR_13);



  if (FUNC_9 (VAR_14, 1) && VAR_15 && VAR_16
      && FUNC_6 (VAR_14, FUNC_15 (VAR_15) + 1) <= 0
      && FUNC_6 (VAR_14, FUNC_15 (VAR_16) + 1) <= 0)
    {
      const int VAR_17 = FUNC_11 (VAR_15, VAR_16, FUNC_16 (VAR_14, 1));

      if (VAR_17 > 0)
 return VAR_6;
      else if (VAR_17 < 0)
 return VAR_5;
      else
 return VAR_8;
    }



  if (FUNC_9 (VAR_14, 1) && FUNC_16 (VAR_14, 1) == 1)
    {
      tree VAR_18 = FUNC_4 (VAR_10, 1, 0);
      tree VAR_19
 = FUNC_3 (VAR_18, VAR_9, 1);

      tree VAR_20 = FUNC_8 (VAR_7,
    FUNC_2 (VAR_0, VAR_18,
     FUNC_8 (VAR_19,
            VAR_12)));
      tree VAR_21 = FUNC_8 (VAR_7,
    FUNC_2 (VAR_0, VAR_18,
     FUNC_8 (VAR_19,
            VAR_13)));
      return FUNC_7 (VAR_2, VAR_7, VAR_20, VAR_21);
    }

  return 0;
}
