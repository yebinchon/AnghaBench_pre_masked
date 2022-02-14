
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int lookup_uid_data; int (* lookup_uid ) (int ,char const*,int ) ;int archive; } ;
struct archive {int dummy; } ;
typedef int la_int64_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int ,char const*,int ) ;

int64_t
FUNC_2(struct archive *VAR_2, const char *VAR_3, la_int64_t VAR_4)
{
 struct archive_write_disk *VAR_5 = (struct archive_write_disk *)VAR_2;
 FUNC_0(&VAR_5->archive, VAR_1,
     VAR_0, "archive_write_disk_uid");
 if (VAR_5->lookup_uid)
  return (VAR_5->lookup_uid)(VAR_5->lookup_uid_data, VAR_3, VAR_4);
 return (VAR_4);
}
