
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {struct ae_sparse* sparse_head; struct ae_xattr* xattr_head; int acl; int encryption; int ae_symlink_type; int ae_uname; int ae_set; int ae_symlink; int ae_sourcepath; int ae_pathname; int ae_hardlink; int ae_gname; int ae_fflags_text; int ae_fflags_clear; int ae_fflags_set; int ae_stat; int archive; } ;
struct ae_xattr {struct ae_xattr* next; int size; int value; int name; } ;
struct ae_sparse {struct ae_sparse* next; int length; int offset; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct archive_entry*,void const*,size_t) ;
 void* FUNC_2 (struct archive_entry*,size_t*) ;
 struct archive_entry* FUNC_3 (int ) ;
 int FUNC_4 (struct archive_entry*,int ,int ) ;
 int FUNC_5 (struct archive_entry*,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;

struct archive_entry *
FUNC_7(struct archive_entry *VAR_0)
{
 struct archive_entry *VAR_1;
 struct ae_xattr *VAR_2;
 struct ae_sparse *VAR_3;
 size_t VAR_4;
 const void *VAR_5;




 VAR_1 = FUNC_3(VAR_0->archive);
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->ae_stat = VAR_0->ae_stat;
 VAR_1->ae_fflags_set = VAR_0->ae_fflags_set;
 VAR_1->ae_fflags_clear = VAR_0->ae_fflags_clear;



 FUNC_6(&VAR_1->ae_fflags_text, &VAR_0->ae_fflags_text);
 FUNC_6(&VAR_1->ae_gname, &VAR_0->ae_gname);
 FUNC_6(&VAR_1->ae_hardlink, &VAR_0->ae_hardlink);
 FUNC_6(&VAR_1->ae_pathname, &VAR_0->ae_pathname);
 FUNC_6(&VAR_1->ae_sourcepath, &VAR_0->ae_sourcepath);
 FUNC_6(&VAR_1->ae_symlink, &VAR_0->ae_symlink);
 VAR_1->ae_set = VAR_0->ae_set;
 FUNC_6(&VAR_1->ae_uname, &VAR_0->ae_uname);


 VAR_1->ae_symlink_type = VAR_0->ae_symlink_type;


 VAR_1->encryption = VAR_0->encryption;


 FUNC_0(&VAR_1->acl, &VAR_0->acl);


 VAR_5 = FUNC_2(VAR_0, &VAR_4);
 FUNC_1(VAR_1, VAR_5, VAR_4);


 VAR_2 = VAR_0->xattr_head;
 while (VAR_2 != ((void*)0)) {
  FUNC_5(VAR_1,
      VAR_2->name, VAR_2->value, VAR_2->size);
  VAR_2 = VAR_2->next;
 }


 VAR_3 = VAR_0->sparse_head;
 while (VAR_3 != ((void*)0)) {
  FUNC_4(VAR_1,
      VAR_3->offset, VAR_3->length);
  VAR_3 = VAR_3->next;
 }

 return (VAR_1);
}
