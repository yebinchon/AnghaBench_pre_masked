
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int state; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rfkill*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct rfkill *VAR_2,
      bool VAR_3, bool *VAR_4)
{
 unsigned long VAR_5;
 bool VAR_6, VAR_7;

 FUNC_0(!VAR_2);

 FUNC_2(&VAR_2->lock, VAR_5);
 VAR_6 = !!(VAR_2->state & VAR_1);
 if (VAR_3)
  VAR_2->state |= VAR_1;
 else
  VAR_2->state &= ~VAR_1;
 *VAR_4 = VAR_6 != VAR_3;
 VAR_7 = VAR_2->state & VAR_0;
 FUNC_3(&VAR_2->lock, VAR_5);

 FUNC_1(VAR_2);

 return VAR_7;
}
