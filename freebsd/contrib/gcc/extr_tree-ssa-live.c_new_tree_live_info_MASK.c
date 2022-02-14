
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int var_map ;
typedef TYPE_1__* tree_live_info_p ;
struct tree_live_info_d {int dummy; } ;
typedef void* bitmap ;
struct TYPE_3__ {int * liveout; void** livein; void* global; int num_blocks; int map; } ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static tree_live_info_p
FUNC_3 (var_map VAR_1)
{
  tree_live_info_p VAR_2;
  unsigned VAR_3;

  VAR_2 = (tree_live_info_p) FUNC_2 (sizeof (struct tree_live_info_d));
  VAR_2->map = VAR_1;
  VAR_2->num_blocks = VAR_0;

  VAR_2->global = FUNC_0 (((void*)0));

  VAR_2->livein = (bitmap *)FUNC_2 (FUNC_1 (VAR_1) * sizeof (bitmap));
  for (VAR_3 = 0; VAR_3 < FUNC_1 (VAR_1); VAR_3++)
    VAR_2->livein[VAR_3] = FUNC_0 (((void*)0));


  VAR_2->liveout = ((void*)0);
  return VAR_2;
}
