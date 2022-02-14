
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * max_qcount; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef size_t sli4_qtype_e ;


 size_t VAR_0 ;

__attribute__((used)) static inline uint32_t
FUNC_0(sli4_t *VAR_1, sli4_qtype_e VAR_2)
{
 if (VAR_2 >= VAR_0) {
  return 0;
 }
 return VAR_1->config.max_qcount[VAR_2];
}
