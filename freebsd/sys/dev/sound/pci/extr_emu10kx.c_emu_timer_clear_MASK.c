
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_sc_info {scalar_t__* timer; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (struct emu_sc_info*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct emu_sc_info *VAR_1, int VAR_2)
{
 if (VAR_2 < 0)
  return (-1);

 FUNC_0(VAR_2, 0, VAR_0-1);

 FUNC_1(VAR_1, VAR_2, 0);

 FUNC_2(&VAR_1->lock);
 if (VAR_1->timer[VAR_2] != 0)
  VAR_1->timer[VAR_2] = 0;
 FUNC_3(&VAR_1->lock);

 return (VAR_2);
}
