
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int aest_nlink; } ;
struct archive_entry {TYPE_1__ ae_stat; scalar_t__ stat_valid; } ;



void
FUNC_0(struct archive_entry *VAR_0, unsigned int VAR_1)
{
 VAR_0->stat_valid = 0;
 VAR_0->ae_stat.aest_nlink = VAR_1;
}
