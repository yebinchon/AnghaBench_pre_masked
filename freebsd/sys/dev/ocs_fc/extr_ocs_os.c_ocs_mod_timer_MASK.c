
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_4__ {int lock; int callout; } ;
typedef TYPE_1__ ocs_timer_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct timeval*) ;

int32_t
FUNC_5(ocs_timer_t *VAR_2, uint32_t VAR_3)
{
 struct timeval VAR_4;
 int VAR_5;

 if (VAR_2 == ((void*)0)) {
  FUNC_3(((void*)0), "bad parameter\n");
  return -1;
 }

 VAR_4.tv_sec = VAR_3 / 1000;
 VAR_4.tv_usec = (VAR_3 % 1000) * 1000;

 VAR_5 = FUNC_4(&VAR_4);
 if (VAR_5 < 0)
  VAR_5 = VAR_0;
 if (VAR_5 == 0)
  VAR_5 = 1;

 FUNC_1(&VAR_2->lock);
  FUNC_0(&VAR_2->callout, VAR_5, VAR_1, VAR_2);
 FUNC_2(&VAR_2->lock);

 return 0;
}
