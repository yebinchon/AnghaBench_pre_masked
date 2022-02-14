
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ making; } ;
struct iso9660 {scalar_t__ bytes_remaining; TYPE_4__* cur_file; TYPE_2__ zisofs; } ;
struct archive_write {size_t null_length; int nulls; struct iso9660* format_data; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_8__ {TYPE_3__* cur_content; TYPE_1__ content; int entry; } ;
struct TYPE_7__ {int size; int blocks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iso9660*,TYPE_4__*) ;
 int FUNC_2 (struct archive_write*,int) ;
 scalar_t__ FUNC_3 (struct archive_write*,int ,size_t) ;
 int FUNC_4 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write *VAR_5)
{
 struct iso9660 *VAR_6 = VAR_5->format_data;

 if (VAR_6->cur_file == ((void*)0))
  return (VAR_2);
 if (FUNC_0(VAR_6->cur_file->entry) != VAR_0)
  return (VAR_2);
 if (VAR_6->cur_file->content.size == 0)
  return (VAR_2);


 while (VAR_6->bytes_remaining > 0) {
  size_t VAR_7;

  VAR_7 = (VAR_6->bytes_remaining > VAR_5->null_length)?
      VAR_5->null_length: (size_t)VAR_6->bytes_remaining;
  if (FUNC_3(VAR_5, VAR_5->nulls, VAR_7) < 0)
   return (VAR_1);
  VAR_6->bytes_remaining -= VAR_7;
 }

 if (VAR_6->zisofs.making && FUNC_4(VAR_5) != VAR_2)
  return (VAR_1);


 if (FUNC_2(VAR_5, VAR_6->cur_file->cur_content->size)
     != VAR_2)
  return (VAR_1);


 VAR_6->cur_file->cur_content->blocks = (int)
     ((VAR_6->cur_file->cur_content->size
      + VAR_4 -1) >> VAR_3);


 FUNC_1(VAR_6, VAR_6->cur_file);

 return (VAR_2);
}
