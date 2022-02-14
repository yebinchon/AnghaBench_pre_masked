
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_disk {int flags; int archive; TYPE_1__* tree; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_6 ;

int
FUNC_2(struct archive *VAR_7)
{
 struct archive_read_disk *VAR_8 = (struct archive_read_disk *)VAR_7;
 FUNC_0(VAR_7, VAR_3,
     VAR_4, "archive_read_disk_restore_atime");







 FUNC_1(&VAR_8->archive, VAR_0,
     "Cannot restore access time on this system");
 VAR_8->flags &= ~VAR_2;
 return (VAR_5);

}
