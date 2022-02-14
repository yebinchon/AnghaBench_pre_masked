
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_6__ {TYPE_1__* extent; } ;
struct TYPE_7__ {TYPE_2__ config; int os; } ;
typedef TYPE_3__ sli4_t ;
typedef int sli4_resource_e ;
typedef int int32_t ;
struct TYPE_5__ {size_t size; size_t* base; int n_alloc; int map_size; int use_map; } ;






 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int,int ) ;

int32_t
FUNC_2(sli4_t *VAR_1, sli4_resource_e VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 int32_t VAR_5 = 0;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 *VAR_3 = VAR_0;
 *VAR_4 = VAR_0;

 switch (VAR_2) {
 case 130:
 case 129:
 case 131:
 case 128:
  VAR_9 = FUNC_0(VAR_1->config.extent[VAR_2].use_map,
    VAR_1->config.extent[VAR_2].map_size);
  if (VAR_9 < 0) {
   FUNC_1(VAR_1->os, "out of resource %d (alloc=%d)\n",
     VAR_2, VAR_1->config.extent[VAR_2].n_alloc);
   VAR_5 = -1;
   break;
  } else {
   *VAR_4 = VAR_9;
  }

  VAR_6 = VAR_1->config.extent[VAR_2].size;

  VAR_7 = *VAR_4 / VAR_6;
  VAR_8 = *VAR_4 % VAR_6;

  *VAR_3 = VAR_1->config.extent[VAR_2].base[VAR_7] + VAR_8;

  VAR_1->config.extent[VAR_2].n_alloc++;
  break;
 default:
  VAR_5 = -1;
 }

 return VAR_5;
}
