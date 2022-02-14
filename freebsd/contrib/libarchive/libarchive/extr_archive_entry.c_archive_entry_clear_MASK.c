
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int ae_symlink_type; int stat; int acl; int ae_uname; int ae_symlink; int ae_sourcepath; int ae_pathname; int ae_hardlink; int ae_gname; int ae_fflags_text; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_entry*,int *,int ) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct archive_entry*,int ,int) ;

struct archive_entry *
FUNC_7(struct archive_entry *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 FUNC_4(&VAR_1->ae_fflags_text);
 FUNC_4(&VAR_1->ae_gname);
 FUNC_4(&VAR_1->ae_hardlink);
 FUNC_4(&VAR_1->ae_pathname);
 FUNC_4(&VAR_1->ae_sourcepath);
 FUNC_4(&VAR_1->ae_symlink);
 FUNC_4(&VAR_1->ae_uname);
 FUNC_1(VAR_1, ((void*)0), 0);
 FUNC_0(&VAR_1->acl);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1->stat);
 VAR_1->ae_symlink_type = VAR_0;
 FUNC_6(VAR_1, 0, sizeof(*VAR_1));
 return VAR_1;
}
