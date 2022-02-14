
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4 (tree VAR_1, tree VAR_2)
{
  tree VAR_3;
  tree VAR_4, VAR_5;
  int VAR_6 = 0;

  VAR_4 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_1 (VAR_2);





  ++VAR_0;
  VAR_3 = FUNC_3 (FUNC_2 (VAR_1),
         FUNC_0 (VAR_4),
         FUNC_0 (VAR_5));
  if (VAR_3)
    --VAR_6;

  VAR_3 = FUNC_3 (FUNC_2 (VAR_2),
         FUNC_0 (VAR_5),
         FUNC_0 (VAR_4));
  if (VAR_3)
    ++VAR_6;
  --VAR_0;

  return VAR_6;
}
