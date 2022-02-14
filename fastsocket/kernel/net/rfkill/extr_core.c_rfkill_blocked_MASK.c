
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rfkill {int state; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

bool FUNC_2(struct rfkill *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_3 = VAR_1->state;
 FUNC_1(&VAR_1->lock, VAR_2);

 return !!(VAR_3 & VAR_0);
}
