
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_1__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct itimerval*,int *) ;

void
FUNC_1(int VAR_1)
{
 struct itimerval VAR_2;

 VAR_2.it_value.tv_sec = VAR_1;
 VAR_2.it_value.tv_usec = 0;
 VAR_2.it_interval = VAR_2.it_value;
 FUNC_0(VAR_0, &VAR_2, ((void*)0));
}
