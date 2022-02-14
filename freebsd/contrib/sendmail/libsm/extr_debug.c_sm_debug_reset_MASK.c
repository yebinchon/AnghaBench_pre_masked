
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debug_level; struct TYPE_3__* debug_next; } ;
typedef TYPE_1__ SM_DEBUG_T ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0()
{
 SM_DEBUG_T *VAR_2;

 for (VAR_2 = VAR_1;
      VAR_2 != ((void*)0);
      VAR_2 = VAR_2->debug_next)
 {
  VAR_2->debug_level = VAR_0;
 }
 VAR_1 = ((void*)0);
}
