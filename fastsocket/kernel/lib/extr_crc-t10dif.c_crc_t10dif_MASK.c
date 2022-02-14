
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u16 ;


 int* VAR_0 ;

__u16 FUNC_0(const unsigned char *VAR_1, size_t VAR_2)
{
 __u16 VAR_3 = 0;
 unsigned int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++)
  VAR_3 = (VAR_3 << 8) ^ VAR_0[((VAR_3 >> 8) ^ VAR_1[VAR_4]) & 0xff];

 return VAR_3;
}
