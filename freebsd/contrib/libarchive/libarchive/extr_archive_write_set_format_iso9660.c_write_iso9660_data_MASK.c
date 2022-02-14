
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ making; scalar_t__ detect_magic; scalar_t__ block_offset; } ;
struct iso9660 {scalar_t__ temp_fd; TYPE_2__* cur_file; TYPE_1__ zisofs; scalar_t__ need_multi_extent; } ;
struct content {size_t size; int blocks; struct content* next; int offset_of_temp; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {struct content* cur_content; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,int ,char*) ;
 struct content* FUNC_1 (int,int) ;
 int FUNC_2 (struct archive_write*) ;
 scalar_t__ FUNC_3 (struct archive_write*,size_t) ;
 scalar_t__ FUNC_4 (struct archive_write*,void const*,size_t) ;
 int FUNC_5 (struct archive_write*,void const*,size_t) ;
 scalar_t__ FUNC_6 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_7(struct archive_write *VAR_7, const void *VAR_8, size_t VAR_9)
{
 struct iso9660 *VAR_10 = VAR_7->format_data;
 size_t VAR_11;

 if (VAR_10->temp_fd < 0) {
  FUNC_0(&VAR_7->archive, VAR_0,
      "Couldn't create temporary file");
  return (VAR_1);
 }

 VAR_11 = VAR_9;
 if (VAR_10->need_multi_extent &&
     (VAR_10->cur_file->cur_content->size + VAR_11) >=
       (VAR_6 - VAR_5)) {
  struct content *VAR_12;
  size_t VAR_13;

  VAR_13 = (size_t)(VAR_6 - VAR_5 -
      VAR_10->cur_file->cur_content->size);

  if (VAR_10->zisofs.detect_magic)
   FUNC_5(VAR_7, VAR_8, VAR_13);

  if (VAR_10->zisofs.making) {
   if (FUNC_6(VAR_7, VAR_8, VAR_13) != VAR_2)
    return (VAR_1);
  } else {
   if (FUNC_4(VAR_7, VAR_8, VAR_13) != VAR_2)
    return (VAR_1);
   VAR_10->cur_file->cur_content->size += VAR_13;
  }


  if (FUNC_3(VAR_7,
      VAR_10->cur_file->cur_content->size) != VAR_2)
   return (VAR_1);


  VAR_10->cur_file->cur_content->blocks = (int)
      ((VAR_10->cur_file->cur_content->size
       + VAR_5 -1) >> VAR_4);




  VAR_11 -= VAR_13;
  VAR_8 = (const void *)(((const unsigned char *)VAR_8) + VAR_13);

  VAR_12 = FUNC_1(1, sizeof(*VAR_12));
  if (VAR_12 == ((void*)0)) {
   FUNC_0(&VAR_7->archive, VAR_3,
       "Can't allocate content data");
   return (VAR_1);
  }
  VAR_12->offset_of_temp = FUNC_2(VAR_7);
  VAR_10->cur_file->cur_content->next = VAR_12;
  VAR_10->cur_file->cur_content = VAR_12;



 }

 if (VAR_10->zisofs.detect_magic)
  FUNC_5(VAR_7, VAR_8, VAR_11);

 if (VAR_10->zisofs.making) {
  if (FUNC_6(VAR_7, VAR_8, VAR_11) != VAR_2)
   return (VAR_1);
 } else {
  if (FUNC_4(VAR_7, VAR_8, VAR_11) != VAR_2)
   return (VAR_1);
  VAR_10->cur_file->cur_content->size += VAR_11;
 }

 return (VAR_9);
}
