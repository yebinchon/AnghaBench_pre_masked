
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,char const*) ;
 int FUNC_1 (struct archive*,int ,int,char*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct archive *VAR_3, const char *VAR_4)
{
 struct archive_read_disk *VAR_5 = (struct archive_read_disk *)VAR_3;

 FUNC_1(VAR_3, VAR_0,
     VAR_2 | VAR_1,
     "archive_read_disk_open");
 FUNC_2(&VAR_5->archive);

 return (FUNC_0(VAR_3, VAR_4));
}
