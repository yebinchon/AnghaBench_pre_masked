
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int*) ;

int
FUNC_2 (tree VAR_1)
{
  int VAR_2;
  bool VAR_3;

  VAR_3 = 0;
  VAR_2 = FUNC_1 (VAR_1, &VAR_3);
  if (VAR_3)
    FUNC_0 (("assuming signed overflow does not occur when "
       "determining that expression is always "
       "non-negative"),
      VAR_0);
  return VAR_2;
}
