
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {int ae_tag; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int mode_t ;
 int FUNC_0 (struct acl_entry*,struct acl_entry*,struct acl_entry*) ;
 int FUNC_1 (char*) ;

mode_t
FUNC_2(struct acl *VAR_0)
{
 struct acl_entry *VAR_1, *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;




 VAR_2 = VAR_3 = VAR_4 = VAR_1 = ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_0->acl_cnt; VAR_5++) {
  switch (VAR_0->acl_entry[VAR_5].ae_tag) {
  case 128:
   VAR_2 = &VAR_0->acl_entry[VAR_5];
   break;

  case 132:
   VAR_3 = &VAR_0->acl_entry[VAR_5];
   break;

  case 130:
   VAR_4 = &VAR_0->acl_entry[VAR_5];
   break;

  case 131:
   VAR_1 = &VAR_0->acl_entry[VAR_5];
   break;

  case 129:
  case 133:
   break;

  default:
   FUNC_1("acl_posix1e_acl_to_mode: bad ae_tag");
  }
 }

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  FUNC_1("acl_posix1e_acl_to_mode: missing base ae_tags");






 if (VAR_1 != ((void*)0))
  return (FUNC_0(VAR_2, VAR_1,
      VAR_4));
 else
  return (FUNC_0(VAR_2, VAR_3,
      VAR_4));
}
