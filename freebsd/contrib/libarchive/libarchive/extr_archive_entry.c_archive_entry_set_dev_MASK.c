
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aest_dev; scalar_t__ aest_dev_is_broken_down; } ;
struct archive_entry {TYPE_1__ ae_stat; int ae_set; scalar_t__ stat_valid; } ;
typedef int dev_t ;


 int VAR_0 ;

void
FUNC_0(struct archive_entry *VAR_1, dev_t VAR_2)
{
 VAR_1->stat_valid = 0;
 VAR_1->ae_set |= VAR_0;
 VAR_1->ae_stat.aest_dev_is_broken_down = 0;
 VAR_1->ae_stat.aest_dev = VAR_2;
}
