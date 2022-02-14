
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_sc_info {scalar_t__* timer; scalar_t__ timerinterval; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct emu_sc_info*,int ,int) ;
 int FUNC_2 (struct emu_sc_info*,int ,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct emu_sc_info *VAR_4, int VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_5 < 0)
  return (-1);

 FUNC_0(VAR_5, 0, VAR_2-1);

 FUNC_3(&VAR_4->lock);

 if ((VAR_6 == 1) && (VAR_4->timer[VAR_5] < 0))
  VAR_4->timer[VAR_5] = -VAR_4->timer[VAR_5];
 if ((VAR_6 == 0) && (VAR_4->timer[VAR_5] > 0))
  VAR_4->timer[VAR_5] = -VAR_4->timer[VAR_5];

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (VAR_4->timerinterval > VAR_4->timer[VAR_9])
   VAR_4->timerinterval = VAR_4->timer[VAR_9];
  if (VAR_4->timer[VAR_9] > 0)
   VAR_8 = 1;
 }

 FUNC_2(VAR_4, VAR_3, VAR_4->timerinterval & 0x03ff, 2);

 if (VAR_8 == 1) {
  VAR_7 = FUNC_1(VAR_4, VAR_0, 4);
  VAR_7 |= VAR_1;
  FUNC_2(VAR_4, VAR_0, VAR_7, 4);
 } else {
  VAR_7 = FUNC_1(VAR_4, VAR_0, 4);
  VAR_7 &= ~VAR_1;
  FUNC_2(VAR_4, VAR_0, VAR_7, 4);
 }
 FUNC_4(&VAR_4->lock);
 return (0);
}
