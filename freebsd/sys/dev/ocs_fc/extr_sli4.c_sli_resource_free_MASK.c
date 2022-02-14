
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {TYPE_1__* extent; } ;
struct TYPE_7__ {TYPE_2__ config; } ;
typedef TYPE_3__ sli4_t ;
typedef int sli4_resource_e ;
typedef int int32_t ;
struct TYPE_5__ {size_t* base; size_t size; size_t number; int use_map; } ;






 int FUNC_0 (int ,size_t) ;

int32_t
FUNC_1(sli4_t *VAR_0, sli4_resource_e VAR_1, uint32_t VAR_2)
{
 int32_t VAR_3 = -1;
 uint32_t VAR_4;
 uint32_t VAR_5, *VAR_6;

 switch (VAR_1) {
 case 130:
 case 129:
 case 131:
 case 128:





  VAR_6 = VAR_0->config.extent[VAR_1].base;
  VAR_5 = VAR_0->config.extent[VAR_1].size;





  if (VAR_6 != ((void*)0)) {
   for (VAR_4 = 0; VAR_4 < VAR_0->config.extent[VAR_1].number; VAR_4++) {
    if ((VAR_2 >= VAR_6[VAR_4]) && (VAR_2 < (VAR_6[VAR_4] + VAR_5))) {
     VAR_2 -= VAR_6[VAR_4];
     FUNC_0(VAR_0->config.extent[VAR_1].use_map,
        (VAR_4 * VAR_5) + VAR_2);
     VAR_3 = 0;
     break;
    }
   }
  }
  break;
 default:
  ;
 }

 return VAR_3;
}
