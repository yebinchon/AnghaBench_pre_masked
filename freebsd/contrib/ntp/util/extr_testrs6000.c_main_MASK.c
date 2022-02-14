
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;
struct TYPE_6__ {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,struct itimerval*,struct itimerval*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

int
FUNC_6 (
 int VAR_4,
 char *VAR_5[]
 )
{
 struct itimerval VAR_6, VAR_7;
 int VAR_8;
 time_t VAR_9;

 VAR_9 = FUNC_5(0);
 FUNC_2("Starting: %s", FUNC_0(&VAR_9));
 VAR_6.it_interval.tv_sec = VAR_6.it_value.tv_sec = 1;
 VAR_6.it_interval.tv_usec = VAR_6.it_value.tv_usec = 0;
 VAR_2.tv_sec = 0;
 VAR_2.tv_usec = -2000;
 FUNC_4(VAR_1, VAR_3);
 FUNC_3(VAR_0, &VAR_6, &VAR_7);
 for (VAR_8=0; VAR_8<10; VAR_8++) {
  FUNC_1();
 }
}
