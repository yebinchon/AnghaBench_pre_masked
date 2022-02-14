
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_zone_info {scalar_t__ size; } ;
struct sge_fl {int dummy; } ;
struct cluster_metadata {int dummy; } ;
struct cluster_layout {size_t zidx; } ;
struct TYPE_2__ {struct sw_zone_info* sw_zone_info; } ;
struct adapter {TYPE_1__ sge; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ FUNC_0 (struct sge_fl*,struct cluster_layout*) ;

__attribute__((used)) static inline struct cluster_metadata *
FUNC_1(struct adapter *VAR_0, struct sge_fl *VAR_1, struct cluster_layout *VAR_2,
    caddr_t VAR_3)
{

 if (FUNC_0(VAR_1, VAR_2)) {
  struct sw_zone_info *VAR_4 = &VAR_0->sge.sw_zone_info[VAR_2->zidx];

  return ((struct cluster_metadata *)(VAR_3 + VAR_4->size) - 1);
 }
 return (((void*)0));
}
