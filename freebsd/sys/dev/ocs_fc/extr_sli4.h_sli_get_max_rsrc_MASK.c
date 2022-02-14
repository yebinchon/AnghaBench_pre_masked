
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
typedef size_t sli4_resource_e ;
struct TYPE_5__ {int size; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(sli4_t *VAR_1, sli4_resource_e VAR_2)
{
 if (VAR_2 >= VAR_0) {
  return 0;
 }

 return VAR_1->config.extent[VAR_2].size;
}
