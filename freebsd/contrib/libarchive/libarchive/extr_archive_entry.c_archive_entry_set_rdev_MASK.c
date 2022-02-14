
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aest_rdev_is_broken_down; int aest_rdev; } ;
struct archive_entry {TYPE_1__ ae_stat; scalar_t__ stat_valid; } ;
typedef int dev_t ;



void
FUNC_0(struct archive_entry *VAR_0, dev_t VAR_1)
{
 VAR_0->stat_valid = 0;
 VAR_0->ae_stat.aest_rdev = VAR_1;
 VAR_0->ae_stat.aest_rdev_is_broken_down = 0;
}
