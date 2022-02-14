
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct ntptimeval {int time_state; int tai; int esterror; int maxerror; TYPE_1__ time; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct timespec*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct ntptimeval *VAR_6)
{
 struct timespec VAR_7;

 FUNC_0();

 FUNC_1(&VAR_7);
 VAR_6->time.tv_sec = VAR_7.tv_sec;
 VAR_6->time.tv_nsec = VAR_7.tv_nsec;
 VAR_6->maxerror = VAR_2;
 VAR_6->esterror = VAR_1;
 VAR_6->tai = VAR_5;
 VAR_6->time_state = VAR_3;

 if (FUNC_2(VAR_4))
  VAR_6->time_state = VAR_0;
}
