
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct timespec {int tv_nsec; void* tv_sec; } ;
struct os_reltime {int usec; void* sec; } ;
struct TYPE_3__ {void* denom; void* numer; int member_1; int member_0; } ;
typedef TYPE_1__ mach_timebase_info_data_t ;
typedef int clockid_t ;





 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,struct timespec*) ;
 void* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

int FUNC_4(struct os_reltime *VAR_3)
{


 static clockid_t VAR_4 = 130;





 struct timespec VAR_5;
 int VAR_6;

 if (FUNC_0())
  return -1;

 while (1) {
  VAR_6 = FUNC_1(VAR_4, &VAR_5);
  if (VAR_6 == 0) {
   VAR_3->sec = VAR_5.tv_sec;
   VAR_3->usec = VAR_5.tv_nsec / 1000;
   return 0;
  }
  switch (VAR_4) {

  case 130:
   VAR_4 = 129;
   break;


  case 129:
   VAR_4 = 128;
   break;

  case 128:
   return -1;
  }
 }
}
