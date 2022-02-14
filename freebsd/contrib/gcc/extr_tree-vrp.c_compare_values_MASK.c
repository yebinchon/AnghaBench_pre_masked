
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (tree VAR_0, tree VAR_1)
{
  bool VAR_2;
  int VAR_3;

  VAR_2 = 0;
  VAR_3 = FUNC_0 (VAR_0, VAR_1, &VAR_2);
  if (VAR_2
      && (!FUNC_1 (VAR_0) || !FUNC_1 (VAR_1)))
    VAR_3 = -2;
  return VAR_3;
}
