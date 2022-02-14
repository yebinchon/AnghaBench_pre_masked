
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int callout; int mtx; } ;
struct delayed_work {TYPE_1__ timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline bool
FUNC_4(struct delayed_work *VAR_0, bool VAR_1)
{
 bool VAR_2;

 FUNC_2(&VAR_0->timer.mtx);
 VAR_2 = (FUNC_1(&VAR_0->timer.callout) == 1);
 FUNC_3(&VAR_0->timer.mtx);


 if (VAR_1)
  FUNC_0(&VAR_0->timer.callout);
 return (VAR_2);
}
