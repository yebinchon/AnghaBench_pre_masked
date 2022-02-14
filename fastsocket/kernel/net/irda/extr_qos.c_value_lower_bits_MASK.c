
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;
typedef int __u16 ;



__attribute__((used)) static inline int FUNC_0(__u32 VAR_0, __u32 *VAR_1, int VAR_2, __u16 *VAR_3)
{
 int VAR_4;
 __u16 VAR_5 = 0x1;
 __u16 VAR_6 = 0x0;

 for (VAR_4=0; VAR_4 < VAR_2; VAR_4++) {

  VAR_6 |= VAR_5;
  VAR_5 <<= 1;

  if (VAR_1[VAR_4] >= VAR_0)
   break;
 }

 if(VAR_4 >= VAR_2)
   VAR_4 = VAR_2 - 1;
 *VAR_3 = VAR_6;
 return VAR_4;
}
