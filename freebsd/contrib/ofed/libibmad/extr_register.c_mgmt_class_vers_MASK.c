
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4)
{
 if ((VAR_4 >= VAR_1 &&
      VAR_4 <= VAR_0) ||
     (VAR_4 >= VAR_3 &&
      VAR_4 <= VAR_2))
  return 1;

 switch (VAR_4) {
 case 129:
 case 128:
  return 1;
 case 130:
  return 2;
 case 131:
  return 1;
 case 132:
  return 1;
 case 133:
  return 2;
 case 134:
  return 1;
 }

 return 0;
}
