
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_disk {TYPE_1__* tree; } ;
struct archive {int dummy; } ;
struct TYPE_2__ {int current_filesystem_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_2)
{
 struct archive_read_disk *VAR_3 = (struct archive_read_disk *)VAR_2;

 FUNC_0(VAR_2, VAR_0, VAR_1,
     "archive_read_disk_current_filesystem");

 return (VAR_3->tree->current_filesystem_id);
}
