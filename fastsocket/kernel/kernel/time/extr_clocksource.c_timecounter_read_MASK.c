
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timecounter {int nsec; } ;


 int FUNC_0 (struct timecounter*) ;

u64 FUNC_1(struct timecounter *VAR_0)
{
 u64 VAR_1;


 VAR_1 = FUNC_0(VAR_0);
 VAR_1 += VAR_0->nsec;
 VAR_0->nsec = VAR_1;

 return VAR_1;
}
