
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tms {void* tms_utime; void* tms_stime; } ;
struct timevar_time_def {int user; void* sys; void* wall; int ggc_mem; } ;
struct TYPE_4__ {int tv_usec; void* tv_sec; } ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,struct rusage*) ;
 void* VAR_2 ;
 void* FUNC_2 (struct tms*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (struct timevar_time_def *VAR_5)
{
  VAR_5->user = 0;
  VAR_5->sys = 0;
  VAR_5->wall = 0;
  VAR_5->ggc_mem = VAR_4;

  if (!VAR_3)
    return;

  {
  }
}
