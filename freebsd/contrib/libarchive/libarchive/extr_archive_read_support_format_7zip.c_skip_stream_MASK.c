
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct archive_read {int archive; TYPE_5__* format; } ;
struct TYPE_7__ {TYPE_1__* folders; } ;
struct TYPE_8__ {TYPE_2__ ci; } ;
struct _7zip {scalar_t__ folder_index; scalar_t__ pack_stream_bytes_unconsumed; TYPE_4__* entry; TYPE_3__ si; } ;
typedef size_t int64_t ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {size_t folderIndex; } ;
struct TYPE_6__ {size_t skipped_bytes; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*) ;
 size_t FUNC_2 (struct archive_read*,void const**,size_t,int ) ;

__attribute__((used)) static int64_t
FUNC_3(struct archive_read *VAR_2, size_t VAR_3)
{
 struct _7zip *VAR_4 = (struct _7zip *)VAR_2->format->data;
 const void *VAR_5;
 int64_t VAR_6;
 size_t VAR_7 = VAR_3;

 if (VAR_4->folder_index == 0) {




  VAR_4->si.ci.folders[VAR_4->entry->folderIndex].skipped_bytes
      += VAR_3;
  return (VAR_3);
 }

 while (VAR_7) {
  VAR_6 = FUNC_2(VAR_2, &VAR_5, VAR_7, 0);
  if (VAR_6 < 0)
   return (VAR_6);
  if (VAR_6 == 0) {
   FUNC_0(&VAR_2->archive,
       VAR_0,
       "Truncated 7-Zip file body");
   return (VAR_1);
  }
  VAR_7 -= (size_t)VAR_6;
  if (VAR_4->pack_stream_bytes_unconsumed)
   FUNC_1(VAR_2);
 }
 return (VAR_3);
}
