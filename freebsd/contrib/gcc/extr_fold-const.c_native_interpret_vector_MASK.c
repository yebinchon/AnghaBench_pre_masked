
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_1, unsigned char *VAR_2, int VAR_3)
{
  tree VAR_4, VAR_5, VAR_6;
  int VAR_7, VAR_8, VAR_9;

  VAR_4 = FUNC_1 (VAR_1);
  VAR_8 = FUNC_0 (FUNC_2 (VAR_4));
  VAR_9 = FUNC_3 (VAR_1);
  if (VAR_8 * VAR_9 > VAR_3)
    return VAR_0;

  VAR_6 = VAR_0;
  for (VAR_7 = VAR_9 - 1; VAR_7 >= 0; VAR_7--)
    {
      VAR_5 = FUNC_5 (VAR_4, VAR_2+(VAR_7*VAR_8), VAR_8);
      if (!VAR_5)
 return VAR_0;
      VAR_6 = FUNC_6 (VAR_0, VAR_5, VAR_6);
    }
  return FUNC_4 (VAR_1, VAR_6);
}
