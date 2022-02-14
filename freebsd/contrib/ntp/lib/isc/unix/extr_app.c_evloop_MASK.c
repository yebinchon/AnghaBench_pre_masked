
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef int isc_uint64_t ;
typedef int isc_time_t ;
typedef int isc_socketwait_t ;
typedef int isc_result_t ;
typedef void* isc_boolean_t ;
struct TYPE_3__ {int taskmgr; int socketmgr; int timermgr; void* want_reload; int want_shutdown; } ;
typedef TYPE_1__ isc__appctx_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct timeval*,int **) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static isc_result_t
FUNC_8(isc__appctx_t *VAR_4) {
 isc_result_t VAR_5;

 while (!VAR_4->want_shutdown) {
  int VAR_6;
  isc_time_t VAR_7, VAR_8;
  struct timeval VAR_9, *VAR_10;
  isc_socketwait_t *VAR_11;
  isc_boolean_t VAR_12;
  isc_boolean_t VAR_13 = VAR_0;
  if (VAR_4->want_reload) {
   VAR_4->want_reload = VAR_0;
   return (VAR_1);
  }

  VAR_12 = FUNC_4(VAR_4->taskmgr);
  if (VAR_12) {
   VAR_9.tv_sec = 0;
   VAR_9.tv_usec = 0;
   VAR_10 = &VAR_9;
   VAR_13 = VAR_3;
  } else {
   VAR_5 = FUNC_6(VAR_4->timermgr, &VAR_7);
   if (VAR_5 != VAR_2)
    VAR_10 = ((void*)0);
   else {
    isc_uint64_t VAR_14;

    FUNC_0(&VAR_8);
    VAR_14 = FUNC_7(&VAR_7, &VAR_8);
    if (VAR_14 == 0)
     VAR_13 = VAR_3;
    VAR_9.tv_sec = VAR_14 / 1000000;
    VAR_9.tv_usec = VAR_14 % 1000000;
    VAR_10 = &VAR_9;
   }
  }

  VAR_11 = ((void*)0);
  VAR_6 = FUNC_2(VAR_4->socketmgr, VAR_10, &VAR_11);

  if (VAR_6 == 0 || VAR_13) {
   FUNC_5(VAR_4->timermgr);
  }
  if (VAR_6 > 0)
   (void)FUNC_1(VAR_4->socketmgr, VAR_11);
  (void)FUNC_3(VAR_4->taskmgr);
 }
 return (VAR_2);
}
