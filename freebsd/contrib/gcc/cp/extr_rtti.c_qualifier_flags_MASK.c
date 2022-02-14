
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (tree VAR_3)
{
  int VAR_4 = 0;
  int VAR_5 = FUNC_0 (VAR_3);

  if (VAR_5 & VAR_0)
    VAR_4 |= 1;
  if (VAR_5 & VAR_2)
    VAR_4 |= 2;
  if (VAR_5 & VAR_1)
    VAR_4 |= 4;
  return VAR_4;
}
