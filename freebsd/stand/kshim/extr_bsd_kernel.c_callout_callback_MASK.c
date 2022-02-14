
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * le_prev; } ;
struct callout {int flags; int * mtx; int c_arg; int (* c_func ) (int ) ;TYPE_1__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct callout*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct callout *VAR_3)
{
 FUNC_1(VAR_3->mtx);

 FUNC_1(&VAR_2);
 if (VAR_3->entry.le_prev != ((void*)0)) {
  FUNC_0(VAR_3, VAR_1);
  VAR_3->entry.le_prev = ((void*)0);
 }
 FUNC_2(&VAR_2);

 if (VAR_3->c_func != ((void*)0))
  (VAR_3->c_func) (VAR_3->c_arg);

 if (!(VAR_3->flags & VAR_0))
  FUNC_2(VAR_3->mtx);
}
