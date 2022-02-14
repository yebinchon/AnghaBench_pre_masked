
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int keys; struct mtree_entry* mtree_entry; scalar_t__ dironly; int entry_bytes_remaining; scalar_t__ output_global_set; int buf; scalar_t__ first; } ;
struct mtree_entry {scalar_t__ reg_info; } ;
struct archive_write {struct mtree_writer* format_data; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct mtree_entry*) ;
 int FUNC_4 (struct archive_write*,struct archive_entry*,struct mtree_entry**) ;
 int FUNC_5 (struct archive_write*,struct mtree_entry**) ;
 int FUNC_6 (struct mtree_writer*) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_4,
    struct archive_entry *VAR_5)
{
 struct mtree_writer *VAR_6= VAR_4->format_data;
 struct mtree_entry *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6->first) {
  VAR_6->first = 0;
  FUNC_2(&VAR_6->buf, "#mtree\n");
  if ((VAR_6->keys & VAR_3) == 0)
   VAR_6->output_global_set = 0;
 }

 VAR_6->entry_bytes_remaining = FUNC_1(VAR_5);


 if (VAR_6->dironly && FUNC_0(VAR_5) != VAR_0)
  return (VAR_1);

 VAR_9 = FUNC_4(VAR_4, VAR_5, &VAR_7);
 if (VAR_9 < VAR_2)
  return (VAR_9);
 VAR_8 = FUNC_5(VAR_4, &VAR_7);
 if (VAR_8 < VAR_2) {
  FUNC_3(VAR_7);
  return (VAR_8);
 }
 VAR_6->mtree_entry = VAR_7;




 if (VAR_7->reg_info)
  FUNC_6(VAR_6);

 return (VAR_9);
}
