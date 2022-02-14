
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t avail_out; int avail_in; scalar_t__ total_in; void* ref_ptr; int next_in; scalar_t__ total_out; } ;
struct lha {int decompress_init; scalar_t__ entry_bytes_remaining; int end_of_entry; scalar_t__ entry_unconsumed; size_t entry_offset; int entry_crc_calculated; TYPE_2__ strm; int * method; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef scalar_t__ ssize_t ;
typedef size_t int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_read*,int,scalar_t__*) ;
 int FUNC_1 (struct archive_read*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_5, const void **VAR_6,
    size_t *VAR_7, int64_t *VAR_8)
{
 struct lha *VAR_9 = (struct lha *)(VAR_5->format->data);
 ssize_t VAR_10;
 int VAR_11;


 if (!VAR_9->decompress_init) {
  VAR_11 = FUNC_6(&(VAR_9->strm), VAR_9->method);
  switch (VAR_11) {
  case 128:
   break;
  case 129:

   *VAR_6 = ((void*)0);
   *VAR_7 = 0;
   *VAR_8 = 0;
   FUNC_2(&VAR_5->archive,
       VAR_0,
       "Unsupported lzh compression method -%c%c%c-",
       VAR_9->method[0], VAR_9->method[1], VAR_9->method[2]);

   FUNC_1(VAR_5);
   return (VAR_3);
  default:
   FUNC_2(&VAR_5->archive, VAR_4,
       "Couldn't allocate memory "
       "for lzh decompression");
   return (VAR_2);
  }

  VAR_9->decompress_init = 1;
  VAR_9->strm.avail_out = 0;
  VAR_9->strm.total_out = 0;
 }







 VAR_9->strm.next_in = FUNC_0(VAR_5, 1, &VAR_10);
 if (VAR_10 <= 0) {
  FUNC_2(&VAR_5->archive, VAR_0,
      "Truncated LHa file body");
  return (VAR_2);
 }
 if (VAR_10 > VAR_9->entry_bytes_remaining)
  VAR_10 = (ssize_t)VAR_9->entry_bytes_remaining;

 VAR_9->strm.avail_in = (int)VAR_10;
 VAR_9->strm.total_in = 0;
 VAR_9->strm.avail_out = 0;

 VAR_11 = FUNC_5(&(VAR_9->strm), VAR_10 == VAR_9->entry_bytes_remaining);
 switch (VAR_11) {
 case 128:
  break;
 case 130:
  VAR_9->end_of_entry = 1;
  break;
 default:
  FUNC_2(&VAR_5->archive, VAR_1,
      "Bad lzh data");
  return (129);
 }
 VAR_9->entry_unconsumed = VAR_9->strm.total_in;
 VAR_9->entry_bytes_remaining -= VAR_9->strm.total_in;

 if (VAR_9->strm.avail_out) {
  *VAR_8 = VAR_9->entry_offset;
  *VAR_7 = VAR_9->strm.avail_out;
  *VAR_6 = VAR_9->strm.ref_ptr;
  VAR_9->entry_crc_calculated =
      FUNC_3(VAR_9->entry_crc_calculated, *VAR_6, *VAR_7);
  VAR_9->entry_offset += *VAR_7;
 } else {
  *VAR_8 = VAR_9->entry_offset;
  *VAR_7 = 0;
  *VAR_6 = ((void*)0);
  if (VAR_9->end_of_entry)
   return (FUNC_4(VAR_5));
 }
 return (128);
}
