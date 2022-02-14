
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chassis; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_7__ {TYPE_1__** spinenode; } ;
typedef TYPE_2__ ibnd_chassis_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(ibnd_node_t * VAR_0, ibnd_chassis_t * VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_1->spinenode[VAR_2])
  return 0;

 VAR_1->spinenode[VAR_2] = VAR_0;
 VAR_0->chassis = VAR_1;
 return 0;
}
