
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso9660 {struct file_info* use_files; } ;
struct TYPE_2__ {struct file_info* first; } ;
struct file_info {struct file_info* next; TYPE_1__ contents; struct file_info* utf16be_name; int symlink; int name; struct file_info* use_next; } ;
struct content {struct content* next; TYPE_1__ contents; struct content* utf16be_name; int symlink; int name; struct content* use_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file_info*) ;

__attribute__((used)) static void
FUNC_2(struct iso9660 *VAR_0)
{
 struct content *VAR_1, *VAR_2;
 struct file_info *VAR_3;

 VAR_3 = VAR_0->use_files;
 while (VAR_3 != ((void*)0)) {
  struct file_info *VAR_4 = VAR_3->use_next;

  FUNC_0(&VAR_3->name);
  FUNC_0(&VAR_3->symlink);
  FUNC_1(VAR_3->utf16be_name);
  VAR_1 = VAR_3->contents.first;
  while (VAR_1 != ((void*)0)) {
   VAR_2 = VAR_1->next;
   FUNC_1(VAR_1);
   VAR_1 = VAR_2;
  }
  FUNC_1(VAR_3);
  VAR_3 = VAR_4;
 }
}
