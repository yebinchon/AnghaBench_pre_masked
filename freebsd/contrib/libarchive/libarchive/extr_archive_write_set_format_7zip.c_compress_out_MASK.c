
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct TYPE_2__ {scalar_t__ total_in; unsigned char const* next_in; size_t avail_in; int avail_out; void const* next_out; } ;
struct _7zip {int crc32flg; void const* wbuff; void* encoded_crc32; TYPE_1__ stream; void* precode_crc32; } ;
typedef size_t ssize_t ;
typedef enum la_zaction { ____Placeholder_la_zaction } la_zaction ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 void* FUNC_1 (void*,void const*,unsigned int) ;
 int FUNC_2 (struct archive_write*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive_write *VAR_6, const void *VAR_7, size_t VAR_8,
    enum la_zaction VAR_9)
{
 struct _7zip *VAR_10 = (struct _7zip *)VAR_6->format_data;
 int VAR_11;

 if (VAR_9 == VAR_3 && VAR_10->stream.total_in == 0 && VAR_8 == 0)
  return (0);

 if ((VAR_10->crc32flg & VAR_5) && VAR_8)
  VAR_10->precode_crc32 = FUNC_1(VAR_10->precode_crc32, VAR_7,
      (unsigned)VAR_8);
 VAR_10->stream.next_in = (const unsigned char *)VAR_7;
 VAR_10->stream.avail_in = VAR_8;
 for (;;) {

  VAR_11 = FUNC_0(&(VAR_6->archive), &(VAR_10->stream), VAR_9);
  if (VAR_11 != VAR_2 && VAR_11 != VAR_0)
   return (VAR_1);
  if (VAR_10->stream.avail_out == 0) {
   if (FUNC_2(VAR_6, VAR_10->wbuff, sizeof(VAR_10->wbuff))
       != VAR_2)
    return (VAR_1);
   VAR_10->stream.next_out = VAR_10->wbuff;
   VAR_10->stream.avail_out = sizeof(VAR_10->wbuff);
   if (VAR_10->crc32flg & VAR_4)
    VAR_10->encoded_crc32 = FUNC_1(VAR_10->encoded_crc32,
        VAR_10->wbuff, sizeof(VAR_10->wbuff));
   if (VAR_9 == VAR_3 && VAR_11 != VAR_0)
    continue;
  }
  if (VAR_10->stream.avail_in == 0)
   break;
 }
 if (VAR_9 == VAR_3) {
  uint64_t VAR_12 = sizeof(VAR_10->wbuff) - VAR_10->stream.avail_out;
  if (FUNC_2(VAR_6, VAR_10->wbuff, (size_t)VAR_12) != VAR_2)
   return (VAR_1);
  if ((VAR_10->crc32flg & VAR_4) && VAR_12)
   VAR_10->encoded_crc32 = FUNC_1(VAR_10->encoded_crc32,
       VAR_10->wbuff, (unsigned)VAR_12);
 }

 return (VAR_8);
}
