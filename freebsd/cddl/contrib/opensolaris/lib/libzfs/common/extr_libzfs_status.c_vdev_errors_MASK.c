
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vs_state; scalar_t__ vs_read_errors; scalar_t__ vs_write_errors; scalar_t__ vs_checksum_errors; } ;
typedef TYPE_1__ vdev_stat_t ;
typedef int uint_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(vdev_stat_t *VAR_1, uint_t VAR_2)
{
 return (VAR_1->vs_state == VAR_0 ||
     VAR_1->vs_read_errors != 0 || VAR_1->vs_write_errors != 0 ||
     VAR_1->vs_checksum_errors != 0);
}
