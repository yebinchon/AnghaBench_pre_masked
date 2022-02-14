
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,unsigned char*,int) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_1, unsigned char *VAR_2, int VAR_3)
{
  tree VAR_4, VAR_5, VAR_6;
  int VAR_7;

  VAR_4 = FUNC_1 (VAR_1);
  VAR_7 = FUNC_0 (FUNC_2 (VAR_4));
  if (VAR_7 * 2 > VAR_3)
    return VAR_0;
  VAR_5 = FUNC_4 (VAR_4, VAR_2, VAR_7);
  if (!VAR_5)
    return VAR_0;
  VAR_6 = FUNC_4 (VAR_4, VAR_2+VAR_7, VAR_7);
  if (!VAR_6)
    return VAR_0;
  return FUNC_3 (VAR_1, VAR_5, VAR_6);
}
