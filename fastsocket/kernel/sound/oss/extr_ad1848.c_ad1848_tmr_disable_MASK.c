
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; scalar_t__ timer_running; } ;
typedef TYPE_1__ ad1848_info ;
struct TYPE_6__ {scalar_t__ devc; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 TYPE_2__** VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 unsigned long VAR_2;
 ad1848_info *VAR_3 = (ad1848_info *) VAR_0[VAR_1]->devc;

 FUNC_2(&VAR_3->lock,VAR_2);
 FUNC_1(VAR_3, 16, FUNC_0(VAR_3, 16) & ~0x40);
 VAR_3->timer_running = 0;
 FUNC_3(&VAR_3->lock,VAR_2);
}
