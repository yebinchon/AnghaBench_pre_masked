
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* tree_live_info_p ;
typedef int bitmap ;
struct TYPE_3__ {int * livein; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bitmap
FUNC_1 (tree_live_info_p VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0->livein);
  return VAR_0->livein[VAR_1];
}
