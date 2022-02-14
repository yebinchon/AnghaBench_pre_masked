
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {scalar_t__ current_position; scalar_t__ entry_bytes_unconsumed; } ;
struct file_info {scalar_t__ size; scalar_t__ offset; } ;
struct archive_read {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*,struct iso9660*,struct file_info**) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1, struct iso9660 *VAR_2,
    struct file_info **VAR_3)
{
 struct file_info *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5 != VAR_0)
  return (VAR_5);
 VAR_4 = *VAR_3;


 if (VAR_4->size == 0)
  VAR_4->offset = VAR_2->current_position;



 if (VAR_2->entry_bytes_unconsumed) {
  FUNC_0(VAR_1, VAR_2->entry_bytes_unconsumed);
  VAR_2->entry_bytes_unconsumed = 0;
 }


 if (VAR_2->current_position < VAR_4->offset) {
  int64_t VAR_6;

  VAR_6 = VAR_4->offset - VAR_2->current_position;
  VAR_6 = FUNC_0(VAR_1, VAR_6);
  if (VAR_6 < 0)
   return ((int)VAR_6);
  VAR_2->current_position = VAR_4->offset;
 }


 return (VAR_0);
}
