
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ model; int timer_running; int lock; } ;
typedef TYPE_1__ ad1848_info ;
struct TYPE_6__ {scalar_t__ devc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 TYPE_2__** VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 ad1848_info *VAR_7 = (ad1848_info *) VAR_2[VAR_4]->devc;
 unsigned long VAR_8;
 unsigned long VAR_9;

 FUNC_2(&VAR_7->lock,VAR_6);
 if (VAR_7->model == VAR_0 || VAR_7->model == VAR_1)
  VAR_8 = 10050;
 else if (FUNC_0(VAR_7, 8) & 0x01)
  VAR_8 = 9920;
 else
  VAR_8 = 9969;

 VAR_9 = (VAR_5 * 1000 + VAR_8 / 2) / VAR_8;

 if (VAR_9 < 100)
  VAR_9 = 100;

 if (VAR_9 > 65535)
  VAR_9 = 65535;

 FUNC_1(VAR_7, 21, (VAR_9 >> 8) & 0xff);
 FUNC_1(VAR_7, 20, VAR_9 & 0xff);
 FUNC_1(VAR_7, 16, FUNC_0(VAR_7, 16) | 0x40);
 VAR_7->timer_running = 1;
 FUNC_3(&VAR_7->lock,VAR_6);

 return VAR_3 = (VAR_9 * VAR_8 + 500) / 1000;
}
