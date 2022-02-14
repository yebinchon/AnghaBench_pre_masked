
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0 (int VAR_4)
{

  int VAR_5 = 1 << VAR_0;
  switch (VAR_3)
    {
    case 130:
    case 129:
      VAR_5 |= (1 << VAR_2);
      break;
    case 128:
      VAR_5 |= (1 << VAR_1);
      break;
    default:
      break;
    }
  return VAR_4 & VAR_5;
}
