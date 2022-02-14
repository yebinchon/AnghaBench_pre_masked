
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 switch (FUNC_1(VAR_0)) {
 case 132:
 case 133:
  return 0;
 case 131:
  VAR_4 = VAR_2 - 10;
  break;
 case 130:
  VAR_4 = VAR_2 - 30;
  break;
 case 134:
  VAR_4 = VAR_2 - 70;
  break;
 case 128:
 case 129:

  return 0;
 }

 return (FUNC_0(VAR_1 - VAR_4) / 20) % 2 == 0 ? 1 : -1;
}
