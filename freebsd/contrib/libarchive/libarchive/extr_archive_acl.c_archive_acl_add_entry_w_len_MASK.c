
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_acl_entry {int name; } ;
struct archive_acl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct archive_acl_entry* FUNC_0 (struct archive_acl*,int,int,int,int) ;
 scalar_t__ FUNC_1 (struct archive_acl*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,size_t) ;

int
FUNC_4(struct archive_acl *VAR_2,
    int VAR_3, int VAR_4, int VAR_5, int VAR_6, const wchar_t *VAR_7, size_t VAR_8)
{
 struct archive_acl_entry *VAR_9;

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5) == 0)
  return VAR_1;
 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_9 == ((void*)0)) {

  return VAR_0;
 }
 if (VAR_7 != ((void*)0) && *VAR_7 != L'\0' && VAR_8 > 0)
  FUNC_3(&VAR_9->name, VAR_7, VAR_8);
 else
  FUNC_2(&VAR_9->name);
 return VAR_1;
}
