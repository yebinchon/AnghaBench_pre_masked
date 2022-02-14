
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block {int level; int out_use; int in_use; int kill; struct block* link; } ;
struct TYPE_5__ {struct block** levels; } ;
typedef TYPE_1__ opt_state_t ;
struct TYPE_7__ {int in_use; } ;
struct TYPE_6__ {int in_use; } ;


 TYPE_4__* FUNC_0 (struct block*) ;
 TYPE_3__* FUNC_1 (struct block*) ;
 int FUNC_2 (struct block*) ;

__attribute__((used)) static void
FUNC_3(opt_state_t *VAR_0, struct block *VAR_1)
{
 int VAR_2, VAR_3;
 struct block *VAR_4;





 VAR_3 = VAR_1->level;
 for (VAR_2 = VAR_3; VAR_2 >= 0; --VAR_2)
  for (VAR_4 = VAR_0->levels[VAR_2]; VAR_4; VAR_4 = VAR_4->link) {
   FUNC_2(VAR_4);
   VAR_4->out_use = 0;
  }

 for (VAR_2 = 1; VAR_2 <= VAR_3; ++VAR_2) {
  for (VAR_4 = VAR_0->levels[VAR_2]; VAR_4; VAR_4 = VAR_4->link) {
   VAR_4->out_use |= FUNC_1(VAR_4)->in_use | FUNC_0(VAR_4)->in_use;
   VAR_4->in_use |= VAR_4->out_use &~ VAR_4->kill;
  }
 }
}
