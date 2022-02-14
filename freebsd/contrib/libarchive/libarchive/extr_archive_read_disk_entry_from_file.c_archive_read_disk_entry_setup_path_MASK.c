
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_disk {scalar_t__ (* tree_enter_working_dir ) (int *) ;int (* open_on_current_dir ) (int *,char const*,int) ;int * tree; scalar_t__ follow_symlinks; int archive; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int) ;

const char *
FUNC_6(struct archive_read_disk *VAR_4,
    struct archive_entry *VAR_5, int *VAR_6)
{
 const char *VAR_7;

 VAR_7 = FUNC_2(VAR_5);

 if (VAR_7 == ((void*)0) || (VAR_4->tree != ((void*)0) &&
     VAR_4->tree_enter_working_dir(VAR_4->tree) != 0))
  VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_4->archive, VAR_1,
     "Couldn't determine path");
 } else if (VAR_6 != ((void*)0) && *VAR_6 < 0 && VAR_4->tree != ((void*)0) &&
     (VAR_4->follow_symlinks || FUNC_0(VAR_5) != VAR_0)) {
  *VAR_6 = VAR_4->open_on_current_dir(VAR_4->tree, VAR_7,
      VAR_3 | VAR_2);
 }
 return (VAR_7);
}
