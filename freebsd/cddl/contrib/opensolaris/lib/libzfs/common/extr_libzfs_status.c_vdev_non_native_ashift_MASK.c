
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vs_configured_ashift; scalar_t__ vs_physical_ashift; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(vdev_stat_t *VAR_1, uint_t VAR_2)
{
 return (FUNC_0(VAR_0, VAR_2) &&
     VAR_1->vs_configured_ashift < VAR_1->vs_physical_ashift);
}
