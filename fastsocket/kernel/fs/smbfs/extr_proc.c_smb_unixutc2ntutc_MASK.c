
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;

__attribute__((used)) static u64
FUNC_0(struct timespec VAR_1)
{


 return ((u64)VAR_1.tv_sec) * 10000000 + VAR_1.tv_nsec/100 + VAR_0;
}
