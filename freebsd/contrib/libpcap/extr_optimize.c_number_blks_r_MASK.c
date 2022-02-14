
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct icode {int dummy; } ;
struct block {int id; } ;
struct TYPE_3__ {struct block** blocks; int n_blocks; } ;
typedef TYPE_1__ opt_state_t ;


 struct block* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;
 int FUNC_2 (struct icode*,struct block*) ;
 scalar_t__ FUNC_3 (struct icode*,struct block*) ;

__attribute__((used)) static void
FUNC_4(opt_state_t *VAR_0, struct icode *VAR_1, struct block *VAR_2)
{
 int VAR_3;

 if (VAR_2 == 0 || FUNC_3(VAR_1, VAR_2))
  return;

 FUNC_2(VAR_1, VAR_2);
 VAR_3 = VAR_0->n_blocks++;
 VAR_2->id = VAR_3;
 VAR_0->blocks[VAR_3] = VAR_2;

 FUNC_4(VAR_0, VAR_1, FUNC_1(VAR_2));
 FUNC_4(VAR_0, VAR_1, FUNC_0(VAR_2));
}
