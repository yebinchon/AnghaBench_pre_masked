
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (struct archive_read_disk*,char,int) ;

int
FUNC_2(struct archive *VAR_3)
{
 struct archive_read_disk *VAR_4 = (struct archive_read_disk *)VAR_3;
 FUNC_0(VAR_3, VAR_1,
     VAR_2, "archive_read_disk_set_symlink_logical");
 FUNC_1(VAR_4, 'L', 1);
 return (VAR_0);
}
