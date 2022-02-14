
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_0(struct timespec *VAR_2)
{
 u64 VAR_3;
 u64 VAR_4 = VAR_2->tv_sec;
 u32 VAR_5 = VAR_2->tv_nsec;

 VAR_3 = (VAR_4 << VAR_1) | (VAR_5 & VAR_0);

 return VAR_3;
}
