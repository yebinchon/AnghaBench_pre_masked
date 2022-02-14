
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {int vtable; int state; int magic; } ;
struct archive_read_disk {struct archive archive; int tree_enter_working_dir; int tree_current_dir_fd; int open_on_current_dir; int flags; int lookup_gname; int lookup_uname; int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct archive *
FUNC_3(void)
{
 struct archive_read_disk *VAR_8;

 VAR_8 = (struct archive_read_disk *)FUNC_2(1, sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_8->archive.magic = VAR_1;
 VAR_8->archive.state = VAR_2;
 VAR_8->archive.vtable = FUNC_1();
 VAR_8->entry = FUNC_0(&VAR_8->archive);
 VAR_8->lookup_uname = VAR_7;
 VAR_8->lookup_gname = VAR_6;
 VAR_8->flags = VAR_0;
 VAR_8->open_on_current_dir = VAR_3;
 VAR_8->tree_current_dir_fd = VAR_4;
 VAR_8->tree_enter_working_dir = VAR_5;
 return (&VAR_8->archive);
}
