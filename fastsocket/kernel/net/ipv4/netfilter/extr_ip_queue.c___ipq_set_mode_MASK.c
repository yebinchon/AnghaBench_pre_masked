
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;



 unsigned char VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int
FUNC_0(unsigned char VAR_3, unsigned int VAR_4)
{
 int VAR_5 = 0;

 switch(VAR_3) {
 case 129:
 case 130:
  VAR_1 = VAR_3;
  VAR_2 = 0;
  break;

 case 128:
  VAR_1 = VAR_3;
  VAR_2 = VAR_4;
  if (VAR_2 > 0xFFFF)
   VAR_2 = 0xFFFF;
  break;

 default:
  VAR_5 = -VAR_0;

 }
 return VAR_5;
}
