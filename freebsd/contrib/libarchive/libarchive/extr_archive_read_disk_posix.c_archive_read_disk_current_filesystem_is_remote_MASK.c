
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_disk {TYPE_2__* tree; } ;
struct archive {int dummy; } ;
struct TYPE_4__ {TYPE_1__* current_filesystem; } ;
struct TYPE_3__ {int remote; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_2)
{
 struct archive_read_disk *VAR_3 = (struct archive_read_disk *)VAR_2;

 FUNC_0(VAR_2, VAR_0, VAR_1,
     "archive_read_disk_current_filesystem");

 return (VAR_3->tree->current_filesystem->remote);
}
