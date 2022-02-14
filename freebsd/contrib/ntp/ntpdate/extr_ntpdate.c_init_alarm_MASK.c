
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_12__ {int tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_4__ it_value; TYPE_3__ it_interval; } ;
struct TYPE_11__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct itimerspec {TYPE_2__ it_value; TYPE_1__ it_interval; } ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int wPeriodMax; int wPeriodMin; } ;
struct TYPE_15__ {int PrivilegeCount; TYPE_5__* Privileges; } ;
struct TYPE_14__ {int Attributes; int Luid; } ;
typedef TYPE_6__ TOKEN_PRIVILEGES ;
typedef TYPE_7__ TIMECAPS ;
typedef int PTOKEN_PRIVILEGES ;
typedef int LPTIMECALLBACK ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,TYPE_6__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*) ;
 int VAR_19 ;
 int FUNC_12 (int ,struct itimerval*,int *) ;
 int FUNC_13 (int ,scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (TYPE_7__*,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int ,int ,scalar_t__,int ) ;
 int FUNC_17 (int ,int *,int *) ;
 int FUNC_18 (int ,int ,struct itimerspec*,int *) ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_19(void)
{




 struct itimerval VAR_23;
 VAR_15 = 0;
 FUNC_13(VAR_8, VAR_16);
 VAR_23.it_interval.tv_sec = 0;
 VAR_23.it_value.tv_sec = 0;
 VAR_23.it_interval.tv_usec = 1000000/VAR_11;
 VAR_23.it_value.tv_usec = 1000000/(VAR_11<<1);

 FUNC_12(VAR_4, &VAR_23, ((void*)0));
}
