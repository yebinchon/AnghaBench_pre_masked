
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct _7zip {scalar_t__ pack_stream_bytes_unconsumed; int stream_offset; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct archive_read *VAR_0)
{
 struct _7zip *VAR_1 = (struct _7zip *)VAR_0->format->data;

 if (VAR_1->pack_stream_bytes_unconsumed) {
  FUNC_0(VAR_0, VAR_1->pack_stream_bytes_unconsumed);
  VAR_1->stream_offset += VAR_1->pack_stream_bytes_unconsumed;
  VAR_1->pack_stream_bytes_unconsumed = 0;
 }
}
