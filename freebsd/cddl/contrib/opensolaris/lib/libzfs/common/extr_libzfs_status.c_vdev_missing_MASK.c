
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vs_state; scalar_t__ vs_aux; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(vdev_stat_t *VAR_2, uint_t VAR_3)
{
 return (VAR_2->vs_state == VAR_1 &&
     VAR_2->vs_aux == VAR_0);
}
