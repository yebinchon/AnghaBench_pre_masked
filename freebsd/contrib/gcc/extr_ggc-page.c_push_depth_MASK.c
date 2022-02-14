
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth_in_use; int depth_max; unsigned int* depth; } ;


 TYPE_1__ VAR_0 ;
 unsigned int* FUNC_0 (unsigned int*,int) ;

__attribute__((used)) inline static void
FUNC_1 (unsigned int VAR_1)
{
  if (VAR_0.depth_in_use >= VAR_0.depth_max)
    {
      VAR_0.depth_max *= 2;
      VAR_0.depth = FUNC_0 (VAR_0.depth, VAR_0.depth_max * sizeof (unsigned int));
    }
  VAR_0.depth[VAR_0.depth_in_use++] = VAR_1;
}
