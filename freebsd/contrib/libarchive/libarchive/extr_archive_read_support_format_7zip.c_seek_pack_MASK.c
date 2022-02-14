
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_5__ {scalar_t__* positions; int * sizes; } ;
struct TYPE_6__ {TYPE_2__ pi; } ;
struct _7zip {scalar_t__ pack_stream_remaining; size_t pack_stream_index; scalar_t__ stream_offset; scalar_t__ seek_base; TYPE_3__ si; int pack_stream_inbytes_remaining; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_4)
{
 struct _7zip *VAR_5 = (struct _7zip *)VAR_4->format->data;
 int64_t VAR_6;

 if (VAR_5->pack_stream_remaining <= 0) {
  FUNC_1(&(VAR_4->archive),
      VAR_0, "Damaged 7-Zip archive");
  return (VAR_1);
 }
 VAR_5->pack_stream_inbytes_remaining =
     VAR_5->si.pi.sizes[VAR_5->pack_stream_index];
 VAR_6 = VAR_5->si.pi.positions[VAR_5->pack_stream_index];
 if (VAR_5->stream_offset != VAR_6) {
  if (0 > FUNC_0(VAR_4, VAR_6 + VAR_5->seek_base,
      VAR_3))
   return (VAR_1);
  VAR_5->stream_offset = VAR_6;
 }
 VAR_5->pack_stream_index++;
 VAR_5->pack_stream_remaining--;
 return (VAR_2);
}
