
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_13__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_6__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct _7zip_entry {size_t folderIndex; int mode; int flg; size_t ssIndex; int atime_ns; int atime; int ctime_ns; int ctime; int mtime_ns; int mtime; int name_len; scalar_t__ utf16name; } ;
struct TYPE_11__ {int* unpackSizes; } ;
struct TYPE_9__ {size_t numFolders; struct _7z_folder* folders; } ;
struct TYPE_12__ {TYPE_4__ ss; TYPE_2__ ci; } ;
struct _7zip {scalar_t__ has_encrypted_entries; size_t entries_remaining; int end_of_entry; int entry_bytes_remaining; char* format_name; TYPE_5__ si; int * sconv; int entry_crc32; scalar_t__ entry_offset; struct _7zip_entry* entry; struct _7zip_entry* entries; scalar_t__ numFiles; } ;
struct _7z_header_info {int dummy; } ;
struct _7z_folder {size_t numCoders; TYPE_3__* coders; } ;
typedef int int64_t ;
typedef int header ;
struct TYPE_10__ {int codec; } ;
struct TYPE_8__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;



 scalar_t__ FUNC_0 (struct archive_entry*,char const*,int ,int *) ;
 int FUNC_1 (struct archive_entry*,char const*) ;
 int FUNC_2 (struct archive_entry*,int ,int ) ;
 int FUNC_3 (struct archive_entry*,int ,int ) ;
 int FUNC_4 (struct archive_entry*,int) ;
 int FUNC_5 (struct archive_entry*,int) ;
 int FUNC_6 (struct archive_entry*,int ,int ) ;
 int FUNC_7 (struct archive_entry*,int) ;
 int FUNC_8 (struct archive_read*,void const**,size_t*,int *) ;
 int FUNC_9 (TYPE_6__*,scalar_t__,char*,...) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_6__*,char*,int) ;
 int FUNC_12 (int ,int *,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_13 (unsigned char*) ;
 int FUNC_14 (struct _7z_header_info*) ;
 int FUNC_15 (unsigned char*,void const*,size_t) ;
 int FUNC_16 (struct _7z_header_info*,int ,int) ;
 unsigned char* FUNC_17 (unsigned char*,size_t) ;
 int FUNC_18 (struct archive_read*,struct _7zip*,struct _7z_header_info*) ;
 int FUNC_19 (char*,char*) ;

__attribute__((used)) static int
FUNC_20(struct archive_read *VAR_15,
 struct archive_entry *VAR_16)
{
 struct _7zip *VAR_17 = (struct _7zip *)VAR_15->format->data;
 struct _7zip_entry *VAR_18;
 int VAR_19, VAR_20 = VAR_7;
 struct _7z_folder *VAR_21 = 0;
 uint64_t VAR_22 = 0;
 if (VAR_17->has_encrypted_entries == VAR_8) {
  VAR_17->has_encrypted_entries = 0;
 }

 VAR_15->archive.archive_format = VAR_6;
 if (VAR_15->archive.archive_format_name == ((void*)0))
  VAR_15->archive.archive_format_name = "7-Zip";

 if (VAR_17->entries == ((void*)0)) {
  struct _7z_header_info VAR_23;

  FUNC_16(&VAR_23, 0, sizeof(VAR_23));
  VAR_19 = FUNC_18(VAR_15, VAR_17, &VAR_23);
  FUNC_14(&VAR_23);
  if (VAR_19 != VAR_7)
   return (VAR_19);
  VAR_17->entries_remaining = (size_t)VAR_17->numFiles;
  VAR_17->entry = VAR_17->entries;
 } else {
  ++VAR_17->entry;
 }
 VAR_18 = VAR_17->entry;

 if (VAR_17->entries_remaining <= 0 || VAR_18 == ((void*)0))
  return VAR_3;
 --VAR_17->entries_remaining;

 VAR_17->entry_offset = 0;
 VAR_17->end_of_entry = 0;
 VAR_17->entry_crc32 = FUNC_12(0, ((void*)0), 0);


 if (VAR_17->sconv == ((void*)0)) {
  VAR_17->sconv = FUNC_11(
      &VAR_15->archive, "UTF-16LE", 1);
  if (VAR_17->sconv == ((void*)0))
   return (VAR_5);
 }





 if (VAR_18 && VAR_18->folderIndex < VAR_17->si.ci.numFolders) {
  VAR_21 = &(VAR_17->si.ci.folders[VAR_18->folderIndex]);
  for (VAR_22=0; VAR_21 && VAR_22<VAR_21->numCoders; VAR_22++) {
   switch(VAR_21->coders[VAR_22].codec) {
    case 129:
    case 128:
    case 130: {
     FUNC_4(VAR_16, 1);
     VAR_17->has_encrypted_entries = 1;
     break;
    }
   }
  }
 }




 if (VAR_17->has_encrypted_entries == VAR_8) {
  VAR_17->has_encrypted_entries = 0;
 }

 if (FUNC_0(VAR_16,
     (const char *)VAR_18->utf16name,
     VAR_18->name_len, VAR_17->sconv) != 0) {
  if (VAR_14 == VAR_12) {
   FUNC_9(&VAR_15->archive, VAR_12,
       "Can't allocate memory for Pathname");
   return (VAR_5);
  }
  FUNC_9(&VAR_15->archive,
      VAR_4,
      "Pathname cannot be converted "
      "from %s to current locale.",
      FUNC_10(VAR_17->sconv));
  VAR_20 = VAR_9;
 }


 FUNC_5(VAR_16, VAR_18->mode);
 if (VAR_18->flg & VAR_13)
  FUNC_6(VAR_16, VAR_18->mtime,
   VAR_18->mtime_ns);
 if (VAR_18->flg & VAR_11)
  FUNC_3(VAR_16, VAR_18->ctime,
      VAR_18->ctime_ns);
 if (VAR_18->flg & VAR_10)
  FUNC_2(VAR_16, VAR_18->atime,
      VAR_18->atime_ns);
 if (VAR_18->ssIndex != (uint32_t)-1) {
  VAR_17->entry_bytes_remaining =
      VAR_17->si.ss.unpackSizes[VAR_18->ssIndex];
  FUNC_7(VAR_16, VAR_17->entry_bytes_remaining);
 } else {
  VAR_17->entry_bytes_remaining = 0;
  FUNC_7(VAR_16, 0);
 }


 if (VAR_17->entry_bytes_remaining < 1)
  VAR_17->end_of_entry = 1;

 if ((VAR_18->mode & VAR_1) == VAR_0) {
  unsigned char *VAR_24 = ((void*)0);
  size_t VAR_25 = 0;





  while (VAR_17->entry_bytes_remaining > 0) {
   const void *VAR_26;
   unsigned char *VAR_27;
   size_t VAR_28;
   int64_t VAR_29;

   VAR_19 = FUNC_8(VAR_15, &VAR_26,
    &VAR_28, &VAR_29);
   if (VAR_19 < VAR_9) {
    FUNC_13(VAR_24);
    return (VAR_19);
   }
   VAR_27 = FUNC_17(VAR_24, VAR_25 + VAR_28 + 1);
   if (VAR_27 == ((void*)0)) {
    FUNC_13(VAR_24);
    FUNC_9(&VAR_15->archive, VAR_12,
        "Can't allocate memory for Symname");
    return (VAR_5);
   }
   VAR_24 = VAR_27;
   FUNC_15(VAR_24+VAR_25, VAR_26, VAR_28);
   VAR_25 += VAR_28;
  }
  if (VAR_25 == 0) {


   VAR_18->mode &= ~VAR_1;
   VAR_18->mode |= VAR_2;
   FUNC_5(VAR_16, VAR_18->mode);
  } else {
   VAR_24[VAR_25] = '\0';
   FUNC_1(VAR_16,
       (const char *)VAR_24);
  }
  FUNC_13(VAR_24);
  FUNC_7(VAR_16, 0);
 }


 FUNC_19(VAR_17->format_name, "7-Zip");
 VAR_15->archive.archive_format_name = VAR_17->format_name;

 return (VAR_20);
}
