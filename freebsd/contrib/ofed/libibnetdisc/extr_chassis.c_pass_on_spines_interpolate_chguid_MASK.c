
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ guid; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_5__ {scalar_t__ chassisguid; TYPE_1__** spinenode; } ;
typedef TYPE_2__ ibnd_chassis_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(ibnd_chassis_t * VAR_1)
{
 ibnd_node_t *VAR_2;
 int VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  VAR_2 = VAR_1->spinenode[VAR_3];
  if (!VAR_2)
   continue;


  VAR_1->chassisguid = VAR_2->guid - 1;
  break;
 }
}
