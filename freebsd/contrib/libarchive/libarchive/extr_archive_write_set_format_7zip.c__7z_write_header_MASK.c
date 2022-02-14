
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ size; int flg; scalar_t__ dir; scalar_t__ name_len; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_rb_node {int dummy; } ;
struct archive_entry {int dummy; } ;
struct _7zip {scalar_t__ entry_bytes_remaining; int total_number_entry; int total_number_empty_entry; scalar_t__ entry_crc32; struct file* cur_file; int opt_compression_level; int opt_compression; int total_number_dir_entry; int total_bytes_entry_name; int * total_number_time_defined; int rbtree; int * sconv; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct archive_write*,int ,int ) ;
 int FUNC_1 (int *,struct archive_rb_node*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int * FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (struct archive_write*,void const*,size_t,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,void const*,unsigned int) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct archive_write*,struct archive_entry*,struct file**) ;
 int FUNC_9 (struct _7zip*,struct file*) ;
 int FUNC_10 (struct _7zip*,struct file*) ;

__attribute__((used)) static int
FUNC_11(struct archive_write *VAR_11, struct archive_entry *VAR_12)
{
 struct _7zip *VAR_13;
 struct file *VAR_14;
 int VAR_15;

 VAR_13 = (struct _7zip *)VAR_11->format_data;
 VAR_13->cur_file = ((void*)0);
 VAR_13->entry_bytes_remaining = 0;

 if (VAR_13->sconv == ((void*)0)) {
  VAR_13->sconv = FUNC_4(
      &VAR_11->archive, "UTF-16LE", 1);
  if (VAR_13->sconv == ((void*)0))
   return (VAR_1);
 }

 VAR_15 = FUNC_8(VAR_11, VAR_12, &VAR_14);
 if (VAR_15 < VAR_3) {
  if (VAR_14 != ((void*)0))
   FUNC_7(VAR_14);
  return (VAR_15);
 }
 if (VAR_14->size == 0 && VAR_14->dir) {
  if (!FUNC_1(&(VAR_13->rbtree),
      (struct archive_rb_node *)VAR_14)) {

   FUNC_7(VAR_14);
   return (VAR_2);
  }
 }

 if (VAR_14->flg & VAR_10)
  VAR_13->total_number_time_defined[VAR_9]++;
 if (VAR_14->flg & VAR_8)
  VAR_13->total_number_time_defined[VAR_7]++;
 if (VAR_14->flg & VAR_6)
  VAR_13->total_number_time_defined[VAR_5]++;

 VAR_13->total_number_entry++;
 VAR_13->total_bytes_entry_name += VAR_14->name_len + 2;
 if (VAR_14->size == 0) {

  VAR_13->total_number_empty_entry++;
  if (VAR_14->dir)
   VAR_13->total_number_dir_entry++;
  else
   FUNC_10(VAR_13, VAR_14);
  return (VAR_15);
 }




 if ((VAR_13->total_number_entry - VAR_13->total_number_empty_entry) == 1) {
  VAR_15 = FUNC_0(VAR_11, VAR_13->opt_compression,
   VAR_13->opt_compression_level);
  if (VAR_15 < 0) {
   FUNC_7(VAR_14);
   return (VAR_1);
  }
 }


 FUNC_9(VAR_13, VAR_14);




 VAR_13->cur_file = VAR_14;



 VAR_13->entry_bytes_remaining = VAR_14->size;
 VAR_13->entry_crc32 = 0;




 if (FUNC_2(VAR_12) == VAR_0) {
  ssize_t VAR_16;
  const void *VAR_17 = (const void *)FUNC_3(VAR_12);
  VAR_16 = FUNC_5(VAR_11, VAR_17, (size_t)VAR_14->size, VAR_4);
  if (VAR_16 < 0)
   return ((int)VAR_16);
  VAR_13->entry_crc32 = FUNC_6(VAR_13->entry_crc32, VAR_17, (unsigned)VAR_16);
  VAR_13->entry_bytes_remaining -= VAR_16;
 }

 return (VAR_15);
}
