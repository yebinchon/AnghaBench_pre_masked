
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timer_running; int lock; } ;
typedef TYPE_1__ ad1848_info ;
struct TYPE_6__ {scalar_t__ devc; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 TYPE_2__** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_2)
{
 unsigned long VAR_3;
 ad1848_info *VAR_4 = (ad1848_info *) VAR_0[VAR_2]->devc;

 if (VAR_1 == 0)
  return;

 FUNC_2(&VAR_4->lock,VAR_3);
 FUNC_1(VAR_4, 16, FUNC_0(VAR_4, 16) | 0x40);
 VAR_4->timer_running = 1;
 FUNC_3(&VAR_4->lock,VAR_3);
}
