
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aest_size; } ;
struct archive_entry {int ae_set; TYPE_1__ ae_stat; scalar_t__ stat_valid; } ;
typedef int la_int64_t ;


 int VAR_0 ;

void
FUNC_0(struct archive_entry *VAR_1, la_int64_t VAR_2)
{
 VAR_1->stat_valid = 0;
 VAR_1->ae_stat.aest_size = VAR_2;
 VAR_1->ae_set |= VAR_0;
}
