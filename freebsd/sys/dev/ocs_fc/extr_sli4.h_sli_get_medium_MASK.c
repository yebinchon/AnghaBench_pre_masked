
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int topology; } ;
struct TYPE_5__ {TYPE_1__ config; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_link_medium_e ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline sli4_link_medium_e
FUNC_0(sli4_t *VAR_3)
{
 switch (VAR_3->config.topology) {
 case 130:
  return VAR_0;
 case 131:
 case 128:
 case 129:
  return VAR_1;
 default:
  return VAR_2;
 }
}
