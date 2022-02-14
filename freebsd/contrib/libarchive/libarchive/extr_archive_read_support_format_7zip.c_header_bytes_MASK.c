
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct _7zip {size_t header_bytes_remaining; size_t pack_stream_bytes_unconsumed; scalar_t__ header_is_encoded; int header_crc32; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 unsigned char* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (int ,unsigned char const*,unsigned int) ;
 int FUNC_2 (struct archive_read*) ;
 scalar_t__ FUNC_3 (struct archive_read*,void const**,size_t,size_t) ;

__attribute__((used)) static const unsigned char *
FUNC_4(struct archive_read *VAR_0, size_t VAR_1)
{
 struct _7zip *VAR_2 = (struct _7zip *)VAR_0->format->data;
 const unsigned char *VAR_3;

 if (VAR_2->header_bytes_remaining < VAR_1)
  return (((void*)0));
 if (VAR_2->pack_stream_bytes_unconsumed)
  FUNC_2(VAR_0);

 if (VAR_2->header_is_encoded == 0) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));
  if (VAR_3 == ((void*)0))
   return (((void*)0));
  VAR_2->header_bytes_remaining -= VAR_1;
  VAR_2->pack_stream_bytes_unconsumed = VAR_1;
 } else {
  const void *VAR_4;
  ssize_t VAR_5;

  VAR_5 = FUNC_3(VAR_0, &VAR_4, VAR_1, VAR_1);
  if (VAR_5 <= 0)
   return (((void*)0));
  VAR_2->header_bytes_remaining -= VAR_5;
  VAR_3 = VAR_4;
 }


 VAR_2->header_crc32 = FUNC_1(VAR_2->header_crc32, VAR_3, (unsigned)VAR_1);
 return (VAR_3);
}
