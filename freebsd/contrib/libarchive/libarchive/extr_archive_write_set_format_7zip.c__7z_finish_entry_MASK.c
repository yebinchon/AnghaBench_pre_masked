
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_write {size_t null_length; int nulls; scalar_t__ format_data; } ;
struct TYPE_3__ {scalar_t__ total_out; scalar_t__ total_in; } ;
struct _7zip {scalar_t__ entry_bytes_remaining; TYPE_2__* cur_file; int entry_crc32; TYPE_1__ stream; int total_bytes_uncompressed; int total_bytes_compressed; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int crc32; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_write*,int ,size_t) ;

__attribute__((used)) static int
FUNC_1(struct archive_write *VAR_1)
{
 struct _7zip *VAR_2;
 size_t VAR_3;
 ssize_t VAR_4;

 VAR_2 = (struct _7zip *)VAR_1->format_data;
 if (VAR_2->cur_file == ((void*)0))
  return (VAR_0);

 while (VAR_2->entry_bytes_remaining > 0) {
  VAR_3 = (size_t)VAR_2->entry_bytes_remaining;
  if (VAR_3 > VAR_1->null_length)
   VAR_3 = VAR_1->null_length;
  VAR_4 = FUNC_0(VAR_1, VAR_1->nulls, VAR_3);
  if (VAR_4 < 0)
   return ((int)VAR_4);
 }
 VAR_2->total_bytes_compressed += VAR_2->stream.total_in;
 VAR_2->total_bytes_uncompressed += VAR_2->stream.total_out;
 VAR_2->cur_file->crc32 = VAR_2->entry_crc32;
 VAR_2->cur_file = ((void*)0);

 return (VAR_0);
}
