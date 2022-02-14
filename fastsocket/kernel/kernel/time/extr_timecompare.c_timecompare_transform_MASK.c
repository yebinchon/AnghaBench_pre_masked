
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timecompare {int skew; scalar_t__ last_update; scalar_t__ offset; } ;
typedef int s64 ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

ktime_t FUNC_1(struct timecompare *VAR_1,
         u64 VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_2 + VAR_1->offset;
 VAR_3 += (s64)(VAR_2 - VAR_1->last_update) * VAR_1->skew /
  VAR_0;

 return FUNC_0(VAR_3);
}
