
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_stopper {int lock; int thread; int works; scalar_t__ enabled; } ;
struct cpu_stop_work {int done; int list; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct cpu_stopper *VAR_0,
    struct cpu_stop_work *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);

 if (VAR_0->enabled) {
  FUNC_1(&VAR_1->list, &VAR_0->works);
  FUNC_4(VAR_0->thread);
 } else
  FUNC_0(VAR_1->done, 0);

 FUNC_3(&VAR_0->lock, VAR_2);
}
