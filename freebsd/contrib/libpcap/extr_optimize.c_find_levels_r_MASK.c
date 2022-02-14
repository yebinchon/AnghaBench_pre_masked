
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct icode {int dummy; } ;
struct block {int level; struct block* link; } ;
struct TYPE_3__ {struct block** levels; } ;
typedef TYPE_1__ opt_state_t ;


 struct block* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct icode*,struct block*) ;
 scalar_t__ FUNC_4 (struct icode*,struct block*) ;

__attribute__((used)) static void
FUNC_5(opt_state_t *VAR_0, struct icode *VAR_1, struct block *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_1, VAR_2))
  return;

 FUNC_3(VAR_1, VAR_2);
 VAR_2->link = 0;

 if (FUNC_1(VAR_2)) {
  FUNC_5(VAR_0, VAR_1, FUNC_1(VAR_2));
  FUNC_5(VAR_0, VAR_1, FUNC_0(VAR_2));
  VAR_3 = FUNC_2(FUNC_1(VAR_2)->level, FUNC_0(VAR_2)->level) + 1;
 } else
  VAR_3 = 0;
 VAR_2->level = VAR_3;
 VAR_2->link = VAR_0->levels[VAR_3];
 VAR_0->levels[VAR_3] = VAR_2;
}
