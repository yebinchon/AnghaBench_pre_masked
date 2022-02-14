
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(int VAR_4)
{
 int VAR_5;

 switch(VAR_4 & VAR_3) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  return (0);
 }

 VAR_5 = VAR_4 & VAR_2;
 if ((VAR_5 & ~(VAR_0 | VAR_1)) != 0)
  return (0);

 return (1);
}
