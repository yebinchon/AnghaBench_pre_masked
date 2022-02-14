
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso9660 {size_t bytes_remaining; TYPE_1__* cur_file; } ;
struct archive_write {struct iso9660* format_data; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive_write *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct iso9660 *VAR_4 = VAR_1->format_data;
 ssize_t VAR_5;

 if (VAR_4->cur_file == ((void*)0))
  return (0);
 if (FUNC_0(VAR_4->cur_file->entry) != VAR_0)
  return (0);
 if (VAR_3 > VAR_4->bytes_remaining)
  VAR_3 = (size_t)VAR_4->bytes_remaining;
 if (VAR_3 == 0)
  return (0);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5 > 0)
  VAR_4->bytes_remaining -= VAR_5;
 return (VAR_5);
}
