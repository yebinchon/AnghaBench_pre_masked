
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_9 (char const*,char const*) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_10)
{
  tree VAR_11, VAR_12;
  const char *VAR_13, *VAR_14;

  if (!FUNC_10 (VAR_10, VAR_2, VAR_2, VAR_3))
    return 0;

  VAR_11 = FUNC_1 (VAR_10);
  VAR_12 = FUNC_1 (FUNC_0 (VAR_10));


  if (FUNC_8 (VAR_11, VAR_12, 0))
    return VAR_7;

  VAR_13 = FUNC_5 (VAR_11);
  VAR_14 = FUNC_5 (VAR_12);

  if (VAR_13 && VAR_14)
    {
      const int VAR_15 = FUNC_9 (VAR_13, VAR_14);
      if (VAR_15 < 0)
 return VAR_4;
      else if (VAR_15 > 0)
 return VAR_5;
      else
 return VAR_7;
    }


  if (VAR_14 && *VAR_14 == '\0')
    {
      tree VAR_16 = FUNC_4 (VAR_9, 1, 0);
      tree VAR_17
 = FUNC_3 (VAR_16, VAR_8, 1);

      return FUNC_7 (VAR_6,
      FUNC_2 (VAR_0, VAR_16,
       FUNC_7 (VAR_17,
       VAR_11)));
    }


  if (VAR_13 && *VAR_13 == '\0')
    {
      tree VAR_18 = FUNC_4 (VAR_9, 1, 0);
      tree VAR_19
 = FUNC_3 (VAR_18, VAR_8, 1);

      tree VAR_20 = FUNC_7 (VAR_6,
    FUNC_2 (VAR_0, VAR_18,
     FUNC_7 (VAR_19,
            VAR_12)));
      return FUNC_6 (VAR_1, VAR_6, VAR_20);
    }

  return 0;
}
