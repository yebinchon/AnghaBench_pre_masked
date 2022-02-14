
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *) ;

void
FUNC_1(const unsigned long VAR_2, struct timespec *VAR_3)
{




 u32 VAR_4;
 VAR_3->tv_sec = FUNC_0((u64)VAR_2 * VAR_1,
        VAR_0, &VAR_4);
 VAR_3->tv_nsec = VAR_4;
}
