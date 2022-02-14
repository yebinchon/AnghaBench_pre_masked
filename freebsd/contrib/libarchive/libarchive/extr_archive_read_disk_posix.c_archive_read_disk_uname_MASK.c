
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {char const* (* lookup_uname ) (int ,int ) ;int lookup_uname_data; } ;
struct archive {int dummy; } ;
typedef int la_int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive*,int ,int ,char*) ;
 char const* FUNC_1 (int ,int ) ;

const char *
FUNC_2(struct archive *VAR_3, la_int64_t VAR_4)
{
 struct archive_read_disk *VAR_5 = (struct archive_read_disk *)VAR_3;
 if (VAR_0 != FUNC_0(VAR_3, VAR_1,
  VAR_2, "archive_read_disk_uname"))
  return (((void*)0));
 if (VAR_5->lookup_uname == ((void*)0))
  return (((void*)0));
 return ((*VAR_5->lookup_uname)(VAR_5->lookup_uname_data, VAR_4));
}
