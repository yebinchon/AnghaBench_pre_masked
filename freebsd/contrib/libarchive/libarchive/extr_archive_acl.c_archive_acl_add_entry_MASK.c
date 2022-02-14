
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_acl_entry {int name; } ;
struct archive_acl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct archive_acl_entry* FUNC_0 (struct archive_acl*,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct archive_acl*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;

int
FUNC_4(struct archive_acl *VAR_2,
    int VAR_3, int VAR_4, int VAR_5, int VAR_6, const char *VAR_7)
{
 struct archive_acl_entry *VAR_8;

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5) == 0)
  return VAR_1;
 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == ((void*)0)) {

  return VAR_0;
 }
 if (VAR_7 != ((void*)0) && *VAR_7 != '\0')
  FUNC_3(&VAR_8->name, VAR_7);
 else
  FUNC_2(&VAR_8->name);
 return VAR_1;
}
