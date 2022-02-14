
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rnd_state {int s1; int s2; int s3; } ;


 void* FUNC_0 (int,int,int,unsigned long,int) ;

u32 FUNC_1(struct rnd_state *VAR_0)
{


 VAR_0->s1 = ((VAR_0->s1&4294967294UL)<<12) ^ (((VAR_0->s1 <<13) ^ VAR_0->s1)>>19);
 VAR_0->s2 = ((VAR_0->s2&4294967288UL)<<4) ^ (((VAR_0->s2 <<2) ^ VAR_0->s2)>>25);
 VAR_0->s3 = ((VAR_0->s3&4294967280UL)<<17) ^ (((VAR_0->s3 <<3) ^ VAR_0->s3)>>11);

 return (VAR_0->s1 ^ VAR_0->s2 ^ VAR_0->s3);
}
