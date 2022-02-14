
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree_writer {size_t entry_bytes_remaining; TYPE_1__* mtree_entry; } ;
struct archive_write {struct mtree_writer* format_data; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ filetype; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mtree_writer*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_write *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct mtree_writer *VAR_4= VAR_1->format_data;

 if (VAR_3 > VAR_4->entry_bytes_remaining)
  VAR_3 = (size_t)VAR_4->entry_bytes_remaining;
 VAR_4->entry_bytes_remaining -= VAR_3;


 if (VAR_4->mtree_entry == ((void*)0))
  return (VAR_3);

 if (VAR_4->mtree_entry->filetype == VAR_0)
  FUNC_0(VAR_4, VAR_2, VAR_3);

 return (VAR_3);
}
