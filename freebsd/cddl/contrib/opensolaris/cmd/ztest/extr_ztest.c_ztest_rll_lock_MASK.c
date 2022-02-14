
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rll_lock; int * rll_writer; int rll_cv; scalar_t__ rll_readers; } ;
typedef TYPE_1__ rll_t ;
typedef scalar_t__ rl_type_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(rll_t *VAR_2, rl_type_t VAR_3)
{
 FUNC_1(&VAR_2->rll_lock);

 if (VAR_3 == VAR_0) {
  while (VAR_2->rll_writer != ((void*)0))
   FUNC_0(&VAR_2->rll_cv, &VAR_2->rll_lock);
  VAR_2->rll_readers++;
 } else {
  while (VAR_2->rll_writer != ((void*)0) || VAR_2->rll_readers)
   FUNC_0(&VAR_2->rll_cv, &VAR_2->rll_lock);
  VAR_2->rll_writer = VAR_1;
 }

 FUNC_2(&VAR_2->rll_lock);
}
