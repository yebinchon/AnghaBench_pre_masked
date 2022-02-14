
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tv_usec; int tv_sec; } ;
struct TYPE_6__ {int tv_usec; int tv_sec; } ;
struct rusage {int ru_nivcsw; int ru_nvcsw; int ru_nsignals; int ru_msgrcv; int ru_msgsnd; int ru_oublock; int ru_inblock; int ru_nswap; int ru_majflt; int ru_minflt; int ru_isrss; int ru_idrss; int ru_ixrss; int ru_maxrss; TYPE_4__ ru_stime; TYPE_2__ ru_utime; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;
struct l_rusage {int ru_nivcsw; int ru_nvcsw; int ru_nsignals; int ru_msgrcv; int ru_msgsnd; int ru_oublock; int ru_inblock; int ru_nswap; int ru_majflt; int ru_minflt; int ru_isrss; int ru_idrss; int ru_ixrss; int ru_maxrss; TYPE_3__ ru_stime; TYPE_1__ ru_utime; } ;



__attribute__((used)) static void
FUNC_0(struct rusage *VAR_0, struct l_rusage *VAR_1)
{

 VAR_1->ru_utime.tv_sec = VAR_0->ru_utime.tv_sec;
 VAR_1->ru_utime.tv_usec = VAR_0->ru_utime.tv_usec;
 VAR_1->ru_stime.tv_sec = VAR_0->ru_stime.tv_sec;
 VAR_1->ru_stime.tv_usec = VAR_0->ru_stime.tv_usec;
 VAR_1->ru_maxrss = VAR_0->ru_maxrss;
 VAR_1->ru_ixrss = VAR_0->ru_ixrss;
 VAR_1->ru_idrss = VAR_0->ru_idrss;
 VAR_1->ru_isrss = VAR_0->ru_isrss;
 VAR_1->ru_minflt = VAR_0->ru_minflt;
 VAR_1->ru_majflt = VAR_0->ru_majflt;
 VAR_1->ru_nswap = VAR_0->ru_nswap;
 VAR_1->ru_inblock = VAR_0->ru_inblock;
 VAR_1->ru_oublock = VAR_0->ru_oublock;
 VAR_1->ru_msgsnd = VAR_0->ru_msgsnd;
 VAR_1->ru_msgrcv = VAR_0->ru_msgrcv;
 VAR_1->ru_nsignals = VAR_0->ru_nsignals;
 VAR_1->ru_nvcsw = VAR_0->ru_nvcsw;
 VAR_1->ru_nivcsw = VAR_0->ru_nivcsw;
}
