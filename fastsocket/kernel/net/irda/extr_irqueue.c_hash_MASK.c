
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static __u32 FUNC_0( const char* VAR_0)
{
 __u32 VAR_1 = 0;
 __u32 VAR_2;

 while(*VAR_0) {
  VAR_1 = (VAR_1<<4) + *VAR_0++;
  if ((VAR_2 = (VAR_1 & 0xf0000000)))
   VAR_1 ^=VAR_2>>24;
  VAR_1 &=~VAR_2;
 }
 return VAR_1;
}
