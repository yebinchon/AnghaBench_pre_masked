
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {long aest_atime_nsec; int aest_atime; } ;
struct archive_entry {TYPE_1__ ae_stat; int ae_set; scalar_t__ stat_valid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,long) ;

void
FUNC_1(struct archive_entry *VAR_1, time_t VAR_2, long VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 VAR_1->stat_valid = 0;
 VAR_1->ae_set |= VAR_0;
 VAR_1->ae_stat.aest_atime = VAR_2;
 VAR_1->ae_stat.aest_atime_nsec = VAR_3;
}
