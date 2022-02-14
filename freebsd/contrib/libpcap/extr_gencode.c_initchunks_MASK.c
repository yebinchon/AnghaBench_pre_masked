
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cur_chunk; TYPE_1__* chunks; } ;
typedef TYPE_2__ compiler_state_t ;
struct TYPE_4__ {int * m; scalar_t__ n_left; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(compiler_state_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->chunks[VAR_2].n_left = 0;
  VAR_1->chunks[VAR_2].m = ((void*)0);
 }
 VAR_1->cur_chunk = 0;
}
