
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tp_current; int tp_flags; int tp_mutex; int tp_busycv; } ;
typedef TYPE_1__ tpool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 tpool_t *VAR_3 = VAR_2;

 if (--VAR_3->tp_current == 0 &&
     (VAR_3->tp_flags & (VAR_1 | VAR_0))) {
  if (VAR_3->tp_flags & VAR_0) {
   FUNC_2(&VAR_3->tp_mutex);
   FUNC_0(VAR_3);
   return;
  }
  if (VAR_3->tp_flags & VAR_1)
   (void) FUNC_1(&VAR_3->tp_busycv);
 }
 FUNC_2(&VAR_3->tp_mutex);
}
