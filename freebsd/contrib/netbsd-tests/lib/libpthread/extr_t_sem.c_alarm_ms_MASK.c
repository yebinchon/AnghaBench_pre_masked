
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct itimerval*,int *) ;

__attribute__((used)) static void
FUNC_2(const int VAR_1)
{
 struct itimerval VAR_2;
 VAR_2.it_interval.tv_sec = 0;
 VAR_2.it_interval.tv_usec = 0;
 VAR_2.it_value.tv_sec = 0;
 VAR_2.it_value.tv_usec = VAR_1 * 1000;
 FUNC_0(FUNC_1(VAR_0, &VAR_2, ((void*)0)) == 0);
}
