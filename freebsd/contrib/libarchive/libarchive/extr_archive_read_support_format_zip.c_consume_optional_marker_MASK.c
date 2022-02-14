
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct zip {int unconsumed; TYPE_1__* entry; scalar_t__ end_of_entry; } ;
struct archive_read {int archive; } ;
struct TYPE_2__ {int zip_flags; int flags; void* uncompressed_size; void* compressed_size; void* crc32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (struct archive_read*,int,int *) ;
 void* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_7, struct zip *VAR_8)
{
 if (VAR_8->end_of_entry && (VAR_8->entry->zip_flags & VAR_6)) {
  const char *VAR_9;

  if (((void*)0) == (VAR_9 = FUNC_0(VAR_7, 24, ((void*)0)))) {
   FUNC_3(&VAR_7->archive,
       VAR_0,
       "Truncated ZIP end-of-file record");
   return (VAR_2);
  }

  if (VAR_9[0] == 'P' && VAR_9[1] == 'K' &&
      VAR_9[2] == '\007' && VAR_9[3] == '\010') {
   VAR_9 += 4;
   VAR_8->unconsumed = 4;
  }
  if (VAR_8->entry->flags & VAR_5) {
   uint64_t VAR_10, VAR_11;
   VAR_8->entry->crc32 = FUNC_1(VAR_9);
   VAR_10 = FUNC_2(VAR_9 + 4);
   VAR_11 = FUNC_2(VAR_9 + 12);
   if (VAR_10 > VAR_4 ||
       VAR_11 > VAR_4) {
    FUNC_3(&VAR_7->archive,
        VAR_0,
        "Overflow of 64-bit file sizes");
    return VAR_1;
   }
   VAR_8->entry->compressed_size = VAR_10;
   VAR_8->entry->uncompressed_size = VAR_11;
   VAR_8->unconsumed += 20;
  } else {
   VAR_8->entry->crc32 = FUNC_1(VAR_9);
   VAR_8->entry->compressed_size = FUNC_1(VAR_9 + 4);
   VAR_8->entry->uncompressed_size = FUNC_1(VAR_9 + 8);
   VAR_8->unconsumed += 12;
  }
 }

    return (VAR_3);
}
