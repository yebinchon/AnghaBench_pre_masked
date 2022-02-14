
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct cfdata {scalar_t__ compressed_size; scalar_t__ uncompressed_bytes_remaining; scalar_t__ uncompressed_avail; scalar_t__ uncompressed_size; int read_offset; scalar_t__ compressed_bytes_remaining; } ;
struct cab {TYPE_2__* entry_cffile; struct cfdata* entry_cfdata; int cab_offset; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int folder; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct archive_read*,scalar_t__) ;
 int FUNC_3 (struct archive_read*) ;
 int FUNC_4 (struct archive_read*,scalar_t__*) ;




__attribute__((used)) static int64_t
FUNC_5(struct archive_read *VAR_2, int64_t VAR_3)
{
 struct cab *VAR_4 = (struct cab *)(VAR_2->format->data);
 struct cfdata *VAR_5;
 int64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (VAR_7 < 0)
  return (VAR_1);

 VAR_5 = VAR_4->entry_cfdata;
 while (VAR_7 > 0) {
  ssize_t VAR_9;

  if (VAR_5->compressed_size == 0) {
   FUNC_1(&VAR_2->archive,
       VAR_0,
       "Invalid CFDATA");
   return (VAR_1);
  }
  VAR_6 = VAR_5->uncompressed_bytes_remaining;
  if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;
  VAR_7 -= VAR_6;

  if (VAR_5->uncompressed_avail == 0 &&
     (VAR_4->entry_cffile->folder == 129 ||
      VAR_4->entry_cffile->folder == 130)) {

   if (VAR_6 == VAR_5->uncompressed_bytes_remaining) {

    FUNC_0(VAR_2,
        VAR_5->compressed_size);
    VAR_4->cab_offset += VAR_5->compressed_size;
    VAR_5->compressed_bytes_remaining = 0;
    VAR_5->uncompressed_bytes_remaining = 0;
    VAR_8 = FUNC_3(VAR_2);
    if (VAR_8 < 0)
     return (VAR_8);
    VAR_5 = VAR_4->entry_cfdata;
    if (VAR_5->uncompressed_size == 0) {
     switch (VAR_4->entry_cffile->folder) {
     case 129:
     case 128:
     case 130:
      VAR_7 = 0;
      break;
     default:
      break;
     }
    }
    continue;
   }
   VAR_5->read_offset += (uint16_t)VAR_6;
   VAR_5->uncompressed_bytes_remaining -= (uint16_t)VAR_6;
   break;
  } else if (VAR_6 == 0) {
   VAR_8 = FUNC_3(VAR_2);
   if (VAR_8 < 0)
    return (VAR_8);
   VAR_5 = VAR_4->entry_cfdata;
   if (VAR_5->uncompressed_size == 0) {
    switch (VAR_4->entry_cffile->folder) {
    case 129:
    case 128:
    case 130:
     return (VAR_1);
    default:
     break;
    }
   }
   continue;
  }
  while (VAR_6 > 0) {
   (void)FUNC_4(VAR_2, &VAR_9);
   if (VAR_9 <= 0)
    return (VAR_1);
   if (VAR_9 > VAR_6)
    VAR_9 = (ssize_t)VAR_6;
   if (FUNC_2(VAR_2, VAR_9) < 0)
    return (VAR_1);
   VAR_6 -= VAR_9;
  }
 }
 return (VAR_3);
}
