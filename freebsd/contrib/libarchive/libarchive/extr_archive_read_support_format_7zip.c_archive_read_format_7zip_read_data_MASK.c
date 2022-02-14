
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_6__ {scalar_t__* digests; } ;
struct TYPE_7__ {TYPE_2__ ss; } ;
struct _7zip {scalar_t__ has_encrypted_entries; size_t entry_offset; int end_of_entry; scalar_t__ entry_bytes_remaining; scalar_t__ entry_crc32; TYPE_4__* entry; TYPE_3__ si; scalar_t__ pack_stream_bytes_unconsumed; } ;
typedef size_t ssize_t ;
typedef size_t int64_t ;
struct TYPE_8__ {int flg; size_t ssIndex; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__,void const*,unsigned int) ;
 int FUNC_2 (struct archive_read*) ;
 size_t FUNC_3 (struct archive_read*,void const**,size_t,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_8,
    const void **VAR_9, size_t *VAR_10, int64_t *VAR_11)
{
 struct _7zip *VAR_12;
 ssize_t VAR_13;
 int VAR_14 = VAR_4;

 VAR_12 = (struct _7zip *)(VAR_8->format->data);

 if (VAR_12->has_encrypted_entries == VAR_5) {
  VAR_12->has_encrypted_entries = 0;
 }

 if (VAR_12->pack_stream_bytes_unconsumed)
  FUNC_2(VAR_8);

 *VAR_11 = VAR_12->entry_offset;
 *VAR_10 = 0;
 *VAR_9 = ((void*)0);




 if (VAR_12->end_of_entry)
  return (VAR_0);

 VAR_13 = FUNC_3(VAR_8, VAR_9,
  (size_t)VAR_12->entry_bytes_remaining, 0);
 if (VAR_13 < 0)
  return ((int)VAR_13);
 if (VAR_13 == 0) {
  FUNC_0(&VAR_8->archive,
      VAR_1,
      "Truncated 7-Zip file body");
  return (VAR_3);
 }
 VAR_12->entry_bytes_remaining -= VAR_13;
 if (VAR_12->entry_bytes_remaining == 0)
  VAR_12->end_of_entry = 1;


 if ((VAR_12->entry->flg & VAR_7) && VAR_13)
  VAR_12->entry_crc32 = FUNC_1(VAR_12->entry_crc32, *VAR_9,
      (unsigned)VAR_13);


 if (VAR_12->end_of_entry) {

  if ((VAR_12->entry->flg & VAR_7) &&
   VAR_12->si.ss.digests[VAR_12->entry->ssIndex] !=
      VAR_12->entry_crc32) {
   FUNC_0(&VAR_8->archive, VAR_2,
       "7-Zip bad CRC: 0x%lx should be 0x%lx",
       (unsigned long)VAR_12->entry_crc32,
       (unsigned long)VAR_12->si.ss.digests[
         VAR_12->entry->ssIndex]);
   VAR_14 = VAR_6;
  }
 }

 *VAR_10 = VAR_13;
 *VAR_11 = VAR_12->entry_offset;
 VAR_12->entry_offset += VAR_13;

 return (VAR_14);
}
