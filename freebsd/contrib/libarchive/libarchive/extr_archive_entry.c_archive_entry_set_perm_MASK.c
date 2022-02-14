
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct archive_entry {TYPE_1__ acl; scalar_t__ stat_valid; } ;
typedef int mode_t ;


 int VAR_0 ;

void
FUNC_0(struct archive_entry *VAR_1, mode_t VAR_2)
{
 VAR_1->stat_valid = 0;
 VAR_1->acl.mode &= VAR_0;
 VAR_1->acl.mode |= ~VAR_0 & VAR_2;
}
