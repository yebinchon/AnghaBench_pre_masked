
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int
FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;


 VAR_2 = (VAR_0 / VAR_1) << 24;
 VAR_0 %= VAR_1;
 VAR_0 /= 100;
 VAR_1 /= 100;
 for (VAR_3 = 31; ((VAR_3 >= 0) && !(VAR_0 >> VAR_3)); )
  VAR_3--;

 if (VAR_3 >= 0) {
  VAR_0 <<= (31 - VAR_3);
  VAR_0 /= VAR_1;
  VAR_3 = 24 - (31 - VAR_3);
  if (VAR_3 >= 0)
   VAR_0 <<= VAR_3;
  else
   VAR_0 >>= -VAR_3;

  VAR_2 |= VAR_0;
 }

 return VAR_2;
}
