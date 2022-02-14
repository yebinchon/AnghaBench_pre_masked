
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; } ;
struct archive_string_conv {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_1 (int *,scalar_t__,char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_5, struct archive_entry *VAR_6,
    const char **VAR_7, size_t *VAR_8, struct archive_string_conv *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10 != 0) {
  if (VAR_4 == VAR_3) {
   FUNC_1(&VAR_5->archive, VAR_3,
       "Can't allocate memory for Pathname");
   return (VAR_0);
  }
  return (VAR_2);
 }
 return (VAR_1);
}
