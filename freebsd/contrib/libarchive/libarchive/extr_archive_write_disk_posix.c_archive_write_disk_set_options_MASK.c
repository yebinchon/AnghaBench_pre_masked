
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int flags; } ;
struct archive {int dummy; } ;


 int VAR_0 ;

int
FUNC_0(struct archive *VAR_1, int VAR_2)
{
 struct archive_write_disk *VAR_3 = (struct archive_write_disk *)VAR_1;

 VAR_3->flags = VAR_2;
 return (VAR_0);
}
