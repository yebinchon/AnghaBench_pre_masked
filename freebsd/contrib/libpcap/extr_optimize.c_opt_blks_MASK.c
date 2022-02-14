
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct icode {TYPE_8__* root; } ;
struct block {struct block* link; int ef; int et; } ;
struct TYPE_10__ {struct block** levels; } ;
typedef TYPE_1__ opt_state_t ;
typedef int compiler_state_t ;
struct TYPE_11__ {int level; } ;


 int FUNC_0 (TYPE_1__*,struct block*) ;
 int FUNC_1 (TYPE_1__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,struct block*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,struct block*) ;

__attribute__((used)) static void
FUNC_6(compiler_state_t *VAR_0, opt_state_t *VAR_1, struct icode *VAR_2,
    int VAR_3)
{
 int VAR_4, VAR_5;
 struct block *VAR_6;

 FUNC_2(VAR_1);
 VAR_5 = VAR_2->root->level;

 FUNC_1(VAR_1, VAR_2->root);
 for (VAR_4 = VAR_5; VAR_4 >= 0; --VAR_4)
  for (VAR_6 = VAR_1->levels[VAR_4]; VAR_6; VAR_6 = VAR_6->link)
   FUNC_3(VAR_0, VAR_1, VAR_6, VAR_3);

 if (VAR_3)




  return;

 for (VAR_4 = 1; VAR_4 <= VAR_5; ++VAR_4) {
  for (VAR_6 = VAR_1->levels[VAR_4]; VAR_6; VAR_6 = VAR_6->link) {
   FUNC_4(VAR_1, &VAR_6->et);
   FUNC_4(VAR_1, &VAR_6->ef);
  }
 }

 FUNC_1(VAR_1, VAR_2->root);
 for (VAR_4 = 1; VAR_4 <= VAR_5; ++VAR_4) {
  for (VAR_6 = VAR_1->levels[VAR_4]; VAR_6; VAR_6 = VAR_6->link) {
   FUNC_5(VAR_1, VAR_6);
   FUNC_0(VAR_1, VAR_6);
  }
 }
}
