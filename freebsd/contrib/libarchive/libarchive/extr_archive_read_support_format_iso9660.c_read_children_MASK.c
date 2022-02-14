
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iso9660 {size_t entry_bytes_unconsumed; scalar_t__ current_position; scalar_t__ volume_size; int logical_block_size; } ;
struct TYPE_6__ {struct content** last; struct content* first; } ;
struct TYPE_5__ {int s; } ;
struct file_info {scalar_t__ offset; int size; scalar_t__ cl_offset; scalar_t__ multi_extent; TYPE_3__ contents; TYPE_2__ name; } ;
struct content {scalar_t__ offset; int size; struct content* next; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char* FUNC_0 (struct archive_read*,size_t,int *) ;
 scalar_t__ FUNC_1 (struct archive_read*,size_t) ;
 scalar_t__ FUNC_2 (struct archive_read*,struct iso9660*,struct file_info*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 struct content* FUNC_4 (int) ;
 struct file_info* FUNC_5 (struct archive_read*,struct file_info*,unsigned char const*,int) ;
 scalar_t__ FUNC_6 (struct archive_read*,struct iso9660*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_7, struct file_info *VAR_8)
{
 struct iso9660 *VAR_9;
 const unsigned char *VAR_10, *VAR_11;
 struct file_info *VAR_12;
 size_t VAR_13, VAR_14;

 VAR_9 = (struct iso9660 *)(VAR_7->format->data);


 if (VAR_9->entry_bytes_unconsumed) {
  FUNC_1(VAR_7, VAR_9->entry_bytes_unconsumed);
  VAR_9->entry_bytes_unconsumed = 0;
 }
 if (VAR_9->current_position > VAR_8->offset) {
  FUNC_3(&VAR_7->archive, VAR_0,
      "Ignoring out-of-order directory (%s) %jd > %jd",
      VAR_8->name.s,
      (intmax_t)VAR_9->current_position,
      (intmax_t)VAR_8->offset);
  return (VAR_3);
 }
 if (VAR_8->offset + VAR_8->size > VAR_9->volume_size) {
  FUNC_3(&VAR_7->archive, VAR_0,
      "Directory is beyond end-of-media: %s",
      VAR_8->name.s);
  return (VAR_3);
 }
 if (VAR_9->current_position < VAR_8->offset) {
  int64_t VAR_15;

  VAR_15 = VAR_8->offset - VAR_9->current_position;
  VAR_15 = FUNC_1(VAR_7, VAR_15);
  if (VAR_15 < 0)
   return ((int)VAR_15);
  VAR_9->current_position = VAR_8->offset;
 }

 VAR_13 = (size_t)(((VAR_8->size + VAR_9->logical_block_size -1) /
     VAR_9->logical_block_size) * VAR_9->logical_block_size);
 VAR_10 = FUNC_0(VAR_7, VAR_13, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_3(&VAR_7->archive, VAR_0,
      "Failed to read full block when scanning "
      "ISO9660 directory list");
  return (VAR_1);
 }
 VAR_9->current_position += VAR_13;
 VAR_12 = ((void*)0);
 VAR_14 = VAR_13;
 while (VAR_13) {
  VAR_11 = VAR_10;
  VAR_10 += VAR_9->logical_block_size;
  VAR_13 -= VAR_9->logical_block_size;
  for (; *VAR_11 != 0 && VAR_11 < VAR_10 && VAR_11 + *VAR_11 <= VAR_10; VAR_11 += *VAR_11) {
   struct file_info *VAR_16;







   if (*(VAR_11 + VAR_4) == 1
       && *(VAR_11 + VAR_5) == '\0')
    continue;

   if (*(VAR_11 + VAR_4) == 1
       && *(VAR_11 + VAR_5) == '\001')
    continue;
   VAR_16 = FUNC_5(VAR_7, VAR_8, VAR_11, VAR_10 - VAR_11);
   if (VAR_16 == ((void*)0)) {
    FUNC_1(VAR_7, VAR_14);
    return (VAR_1);
   }
   if (VAR_16->cl_offset == 0 &&
       (VAR_16->multi_extent || VAR_12 != ((void*)0))) {
    struct content *VAR_17;

    if (VAR_12 == ((void*)0)) {
     VAR_12 = VAR_16;
     VAR_12->contents.first = ((void*)0);
     VAR_12->contents.last =
         &(VAR_12->contents.first);
    }
    VAR_17 = FUNC_4(sizeof(struct content));
    if (VAR_17 == ((void*)0)) {
     FUNC_3(
         &VAR_7->archive, VAR_6,
         "No memory for multi extent");
     FUNC_1(VAR_7, VAR_14);
     return (VAR_1);
    }
    VAR_17->offset = VAR_16->offset;
    VAR_17->size = VAR_16->size;
    VAR_17->next = ((void*)0);
    *VAR_12->contents.last = VAR_17;
    VAR_12->contents.last = &(VAR_17->next);
    if (VAR_12 == VAR_16) {
     if (FUNC_2(VAR_7, VAR_9, VAR_16)
         != VAR_2)
      return (VAR_1);
    } else {
     VAR_12->size += VAR_16->size;
     if (!VAR_16->multi_extent)
      VAR_12 = ((void*)0);
    }
   } else
    if (FUNC_2(VAR_7, VAR_9, VAR_16) != VAR_2)
     return (VAR_1);
  }
 }

 FUNC_1(VAR_7, VAR_14);


 if (FUNC_6(VAR_7, VAR_9) != VAR_2)
  return (VAR_1);

 return (VAR_2);
}
