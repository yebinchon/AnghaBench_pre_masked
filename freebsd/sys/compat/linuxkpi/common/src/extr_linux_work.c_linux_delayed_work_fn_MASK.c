
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int callout; } ;
struct delayed_work {int work; TYPE_1__ timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct delayed_work *VAR_2 = VAR_0;
 FUNC_0(&VAR_2->timer.callout);

 FUNC_1(&VAR_2->work, VAR_1);
}
