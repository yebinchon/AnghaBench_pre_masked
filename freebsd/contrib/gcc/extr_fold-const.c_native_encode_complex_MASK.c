
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_3 (tree VAR_0, unsigned char *VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;
  tree VAR_5;

  VAR_5 = FUNC_1 (VAR_0);
  VAR_3 = FUNC_2 (VAR_5, VAR_1, VAR_2);
  if (VAR_3 == 0)
    return 0;
  VAR_5 = FUNC_0 (VAR_0);
  VAR_4 = FUNC_2 (VAR_5, VAR_1+VAR_3, VAR_2-VAR_3);
  if (VAR_4 != VAR_3)
    return 0;
  return VAR_3 + VAR_4;
}
