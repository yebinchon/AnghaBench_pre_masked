
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esschan {scalar_t__ mode; int * apu; } ;
struct es1968 {int reg_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct es1968*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct es1968 *VAR_1, struct esschan *VAR_2)
{
 FUNC_1(&VAR_1->reg_lock);
 FUNC_0(VAR_1, VAR_2->apu[0], 0);
 FUNC_0(VAR_1, VAR_2->apu[1], 0);
 if (VAR_2->mode == VAR_0) {
  FUNC_0(VAR_1, VAR_2->apu[2], 0);
  FUNC_0(VAR_1, VAR_2->apu[3], 0);
 }
 FUNC_2(&VAR_1->reg_lock);
}
