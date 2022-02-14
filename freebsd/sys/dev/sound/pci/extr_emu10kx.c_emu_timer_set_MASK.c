
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {int* timer; scalar_t__ timerinterval; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct emu_sc_info*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct emu_sc_info *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_3 < 0)
  return (-1);

 FUNC_0(VAR_4, 16, 1024);
 FUNC_0(VAR_3, 0, VAR_0-1);

 FUNC_2(&VAR_2->lock);
 VAR_2->timer[VAR_3] = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_2->timerinterval > VAR_2->timer[VAR_5])
   VAR_2->timerinterval = VAR_2->timer[VAR_5];


 FUNC_1(VAR_2, VAR_1, VAR_2->timerinterval & 0x03ff, 2);
 FUNC_3(&VAR_2->lock);

 return (VAR_3);
}
