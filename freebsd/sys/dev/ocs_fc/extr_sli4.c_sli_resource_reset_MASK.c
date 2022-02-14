
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* extent; } ;
struct TYPE_7__ {TYPE_2__ config; } ;
typedef TYPE_3__ sli4_t ;
typedef int sli4_resource_e ;
typedef int int32_t ;
struct TYPE_5__ {int use_map; int map_size; } ;






 int FUNC_0 (int ,int ) ;

int32_t
FUNC_1(sli4_t *VAR_0, sli4_resource_e VAR_1)
{
 int32_t VAR_2 = -1;
 uint32_t VAR_3;

 switch (VAR_1) {
 case 130:
 case 129:
 case 131:
 case 128:
  for (VAR_3 = 0; VAR_3 < VAR_0->config.extent[VAR_1].map_size; VAR_3++) {
   FUNC_0(VAR_0->config.extent[VAR_1].use_map, VAR_3);
  }
  VAR_2 = 0;
  break;
 default:
  ;
 }

 return VAR_2;
}
