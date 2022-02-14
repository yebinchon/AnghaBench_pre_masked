
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int dummy; } ;
struct archive_acl_entry {int name; } ;
struct archive_acl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct archive_acl_entry* FUNC_0 (struct archive_acl*,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct archive_acl*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,size_t,struct archive_string_conv*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_4(struct archive_acl *VAR_6,
    int VAR_7, int VAR_8, int VAR_9, int VAR_10, const char *VAR_11, size_t VAR_12,
    struct archive_string_conv *VAR_13)
{
 struct archive_acl_entry *VAR_14;
 int VAR_15;

 if (FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9) == 0)
  return VAR_2;
 VAR_14 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_14 == ((void*)0)) {

  return VAR_0;
 }
 if (VAR_11 != ((void*)0) && *VAR_11 != '\0' && VAR_12 > 0) {
  VAR_15 = FUNC_3(&VAR_14->name, VAR_11, VAR_12, VAR_13);
 } else {
  VAR_15 = 0;
  FUNC_2(&VAR_14->name);
 }
 if (VAR_15 == 0)
  return (VAR_2);
 else if (VAR_5 == VAR_4)
  return (VAR_1);
 else
  return (VAR_3);
}
