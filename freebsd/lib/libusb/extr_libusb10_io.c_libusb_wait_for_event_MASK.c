
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ ctx_handler; int ctx_lock; int ctx_cond; } ;
typedef TYPE_1__ libusb_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int *,int *,struct timespec*) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 () ;

int
FUNC_6(libusb_context *VAR_5, struct timeval *VAR_6)
{
 struct timespec VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_5);
 FUNC_0(VAR_5, VAR_2, "libusb_wait_for_event enter");

 if (VAR_6 == ((void*)0)) {
  FUNC_4(&VAR_5->ctx_cond,
      &VAR_5->ctx_lock);

  if (VAR_5->ctx_handler == VAR_4)
   VAR_5->ctx_handler = FUNC_5();
  return (0);
 }
 VAR_8 = FUNC_2(VAR_0, &VAR_7);
 if (VAR_8 < 0)
  return (VAR_3);





 VAR_7.tv_sec += VAR_6->tv_sec;
 VAR_7.tv_nsec += VAR_6->tv_usec * 1000;
 if (VAR_7.tv_nsec >= 1000000000) {
  VAR_7.tv_nsec -= 1000000000;
  VAR_7.tv_sec++;
 }
 VAR_8 = FUNC_3(&VAR_5->ctx_cond,
     &VAR_5->ctx_lock, &VAR_7);

 if (VAR_5->ctx_handler == VAR_4)
  VAR_5->ctx_handler = FUNC_5();

 if (VAR_8 == VAR_1)
  return (1);

 return (0);
}
