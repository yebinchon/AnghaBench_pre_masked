
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isofile {int content; int * cur_content; int symlink; int basename_utf16; int basename; int parentdir; int * entry; } ;
struct archive_write {int archive; } ;
struct archive_entry {int dummy; } ;


 int * FUNC_0 (struct archive_entry*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct isofile* FUNC_3 (int,int) ;
 int FUNC_4 (struct isofile*) ;

__attribute__((used)) static struct isofile *
FUNC_5(struct archive_write *VAR_0, struct archive_entry *VAR_1)
{
 struct isofile *VAR_2;

 VAR_2 = FUNC_3(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 if (VAR_1 != ((void*)0))
  VAR_2->entry = FUNC_0(VAR_1);
 else
  VAR_2->entry = FUNC_1(&VAR_0->archive);
 if (VAR_2->entry == ((void*)0)) {
  FUNC_4(VAR_2);
  return (((void*)0));
 }
 FUNC_2(&(VAR_2->parentdir));
 FUNC_2(&(VAR_2->basename));
 FUNC_2(&(VAR_2->basename_utf16));
 FUNC_2(&(VAR_2->symlink));
 VAR_2->cur_content = &(VAR_2->content);

 return (VAR_2);
}
