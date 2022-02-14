
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct _7zip {scalar_t__ codec; unsigned long codec2; size_t uncompressed_buffer_bytes_remaining; void* uncompressed_buffer_pointer; scalar_t__ pack_stream_bytes_unconsumed; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct archive_read*,size_t,scalar_t__*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct archive_read*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct archive_read *VAR_4, const void **VAR_5, size_t VAR_6,
    size_t VAR_7)
{
 struct _7zip *VAR_8 = (struct _7zip *)VAR_4->format->data;
 ssize_t VAR_9;

 if (VAR_8->codec == VAR_3 && VAR_8->codec2 == (unsigned long)-1) {


  *VAR_5 = FUNC_0(VAR_4, VAR_7, &VAR_9);
  if (VAR_9 <= 0) {
   FUNC_1(&VAR_4->archive,
       VAR_0,
       "Truncated 7-Zip file data");
   return (VAR_2);
  }
  if ((size_t)VAR_9 >
      VAR_8->uncompressed_buffer_bytes_remaining)
   VAR_9 = (ssize_t)
       VAR_8->uncompressed_buffer_bytes_remaining;
  if ((size_t)VAR_9 > VAR_6)
   VAR_9 = (ssize_t)VAR_6;

  VAR_8->pack_stream_bytes_unconsumed = VAR_9;
 } else if (VAR_8->uncompressed_buffer_pointer == ((void*)0)) {

  FUNC_1(&(VAR_4->archive),
      VAR_1, "Damaged 7-Zip archive");
  return (VAR_2);
 } else {

  if (VAR_7 > VAR_8->uncompressed_buffer_bytes_remaining) {





   if (FUNC_2(VAR_4, VAR_7) < 0)
    return (VAR_2);
  }
  if (VAR_6 > VAR_8->uncompressed_buffer_bytes_remaining)
   VAR_9 = (ssize_t)
       VAR_8->uncompressed_buffer_bytes_remaining;
  else
   VAR_9 = (ssize_t)VAR_6;
  *VAR_5 = VAR_8->uncompressed_buffer_pointer;
  VAR_8->uncompressed_buffer_pointer += VAR_9;
 }
 VAR_8->uncompressed_buffer_bytes_remaining -= VAR_9;
 return (VAR_9);
}
