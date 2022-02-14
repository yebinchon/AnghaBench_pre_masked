
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isofile {int entry; struct isofile* hlnext; } ;
struct iso9660 {int hardlink_rbtree; } ;
struct TYPE_2__ {struct isofile** last; struct isofile* first; } ;
struct hardlink {int nlink; TYPE_1__ file_list; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct archive_rb_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,struct archive_rb_node*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*) ;
 struct hardlink* FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_3, struct isofile *VAR_4)
{
 struct iso9660 *VAR_5 = VAR_3->format_data;
 struct hardlink *VAR_6;
 const char *VAR_7;

 FUNC_3(VAR_4->entry, 1);
 VAR_7 = FUNC_2(VAR_4->entry);
 if (VAR_7 == ((void*)0)) {

  VAR_6 = FUNC_6(sizeof(*VAR_6));
  if (VAR_6 == ((void*)0)) {
   FUNC_5(&VAR_3->archive, VAR_2,
       "Can't allocate memory");
   return (VAR_0);
  }
  VAR_6->nlink = 1;

  VAR_4->hlnext = ((void*)0);
  VAR_6->file_list.first = VAR_4;
  VAR_6->file_list.last = &(VAR_4->hlnext);
  FUNC_1(&(VAR_5->hardlink_rbtree),
      (struct archive_rb_node *)VAR_6);
 } else {
  VAR_6 = (struct hardlink *)FUNC_0(
      &(VAR_5->hardlink_rbtree), VAR_7);
  if (VAR_6 != ((void*)0)) {

   VAR_4->hlnext = ((void*)0);
   *VAR_6->file_list.last = VAR_4;
   VAR_6->file_list.last = &(VAR_4->hlnext);
   VAR_6->nlink++;
  }
  FUNC_4(VAR_4->entry);
 }

 return (VAR_1);
}
