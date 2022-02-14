
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_8__ {size_t numFolders; TYPE_5__* folders; } ;
struct TYPE_9__ {TYPE_3__ ci; } ;
struct _7zip {scalar_t__ uncompressed_buffer_bytes_remaining; scalar_t__ pack_stream_inbytes_remaining; scalar_t__ folder_outbytes_remaining; scalar_t__ pack_stream_remaining; size_t folder_index; scalar_t__ pack_stream_bytes_unconsumed; TYPE_4__ si; TYPE_2__* entry; scalar_t__ header_is_being_read; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_10__ {scalar_t__ skipped_bytes; } ;
struct TYPE_7__ {size_t folderIndex; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (struct archive_read*,int ) ;
 scalar_t__ FUNC_2 (struct archive_read*,void const**,size_t,size_t) ;
 int FUNC_3 (struct archive_read*) ;
 scalar_t__ FUNC_4 (struct archive_read*) ;
 scalar_t__ FUNC_5 (struct archive_read*,TYPE_5__*,int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct archive_read *VAR_4, const void **VAR_5, size_t VAR_6,
    size_t VAR_7)
{
 struct _7zip *VAR_8 = (struct _7zip *)VAR_4->format->data;
 uint64_t VAR_9 = 0;
 ssize_t VAR_10;

 if (VAR_8->uncompressed_buffer_bytes_remaining == 0) {
  if (VAR_8->pack_stream_inbytes_remaining > 0) {
   VAR_10 = FUNC_1(VAR_4, 0);
   if (VAR_10 < 0)
    return (VAR_10);
   return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7));
  } else if (VAR_8->folder_outbytes_remaining > 0) {

   VAR_10 = FUNC_1(VAR_4, 0);
   if (VAR_10 < 0)
    return (VAR_10);
   return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7));
  }
 } else
  return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7));




 if (VAR_8->pack_stream_remaining == 0) {
  if (VAR_8->header_is_being_read) {


   FUNC_0(&(VAR_4->archive),
       VAR_1, "Malformed 7-Zip archive");
   return (VAR_2);
  }





  if (VAR_8->folder_index == 0 &&
      (VAR_8->si.ci.folders[VAR_8->entry->folderIndex].skipped_bytes
       || VAR_8->folder_index != VAR_8->entry->folderIndex)) {
   VAR_8->folder_index = VAR_8->entry->folderIndex;
   VAR_9 =
       VAR_8->si.ci.folders[VAR_8->folder_index].skipped_bytes;
  }

  if (VAR_8->folder_index >= VAR_8->si.ci.numFolders) {



   *VAR_5 = ((void*)0);
   return (0);
  }
  VAR_10 = FUNC_5(VAR_4,
   &(VAR_8->si.ci.folders[VAR_8->folder_index]), 0);
  if (VAR_10 != VAR_3)
   return (VAR_2);

  VAR_8->folder_index++;
 }




 VAR_10 = FUNC_4(VAR_4);
 if (VAR_10 < 0)
  return (VAR_10);


 VAR_10 = FUNC_1(VAR_4, 0);
 if (VAR_10 < 0)
  return (VAR_10);




 while (VAR_9) {
  ssize_t VAR_11;

  if (VAR_8->uncompressed_buffer_bytes_remaining == 0) {
   if (VAR_8->pack_stream_inbytes_remaining > 0) {
    VAR_10 = FUNC_1(VAR_4, 0);
    if (VAR_10 < 0)
     return (VAR_10);
   } else if (VAR_8->folder_outbytes_remaining > 0) {

    VAR_10 = FUNC_1(VAR_4, 0);
    if (VAR_10 < 0)
     return (VAR_10);
   } else {
    FUNC_0(&VAR_4->archive,
        VAR_0,
        "Truncated 7-Zip file body");
    return (VAR_2);
   }
  }
  VAR_11 = FUNC_2(
   VAR_4, VAR_5, (size_t)VAR_9, 0);
  if (VAR_11 < 0)
   return (VAR_11);
  VAR_9 -= VAR_11;
  if (VAR_8->pack_stream_bytes_unconsumed)
   FUNC_3(VAR_4);
 }

 return (FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7));
}
