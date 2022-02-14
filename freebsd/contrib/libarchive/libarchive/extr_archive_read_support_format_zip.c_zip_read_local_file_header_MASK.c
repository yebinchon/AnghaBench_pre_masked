
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct zip_entry {char system; int zip_flags; char compression; scalar_t__ crc32; char decdat; int compressed_size; scalar_t__ uncompressed_size; int mode; int flags; int atime; int ctime; int mtime; int gid; int uid; } ;
struct TYPE_6__ {int s; } ;
struct zip {int end_of_entry; int init_default_conversion; int has_encrypted_entries; int init_decryption; int entry_bytes_remaining; TYPE_1__ format_name; struct zip_entry* entry; struct archive_string_conv* sconv_utf8; struct archive_string_conv* sconv_default; struct archive_string_conv* sconv; int ignore_crc32; int (* crc32func ) (int ,int *,int ) ;int entry_crc32; scalar_t__ entry_compressed_bytes_read; scalar_t__ entry_uncompressed_bytes_read; scalar_t__ decompress_init; } ;
struct archive_wstring {char* s; } ;
struct archive_string_conv {int dummy; } ;
struct archive_string {char* s; } ;
struct TYPE_7__ {int archive_format_name; } ;
struct archive_read {TYPE_3__ archive; } ;
struct archive_entry {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 scalar_t__ FUNC_1 (struct archive_read*,size_t) ;
 scalar_t__ FUNC_2 (struct archive_entry*,void const*,size_t,struct archive_string_conv*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_4 (struct archive_entry*,char const*,size_t,struct archive_string_conv*) ;
 char* FUNC_5 (struct archive_entry*) ;
 int* FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*,int ,int ) ;
 int FUNC_8 (struct archive_entry*,int ,int ) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*,int) ;
 int FUNC_13 (struct archive_entry*,int ,int ) ;
 int FUNC_14 (struct archive_entry*,char*) ;
 int FUNC_15 (struct archive_entry*,scalar_t__) ;
 int FUNC_16 (struct archive_entry*,int ) ;
 void* FUNC_17 (char const*) ;
 void* FUNC_18 (char const*) ;
 int FUNC_19 (TYPE_3__*,int,char*,...) ;
 int FUNC_20 (struct archive_wstring*,char) ;
 int FUNC_21 (struct archive_wstring*,char const*) ;
 int FUNC_22 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_23 (TYPE_3__*,char*,int) ;
 struct archive_string_conv* FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (struct archive_wstring*) ;
 int FUNC_27 (struct archive_wstring*) ;
 int FUNC_28 (TYPE_1__*,char*,char,char,int ) ;
 size_t FUNC_29 (struct archive_wstring*) ;
 int FUNC_30 (struct archive_wstring*,int) ;
 int FUNC_31 (struct archive_wstring*,int const*) ;
 int FUNC_32 (struct archive_wstring*,int const*) ;
 int FUNC_33 (struct archive_wstring*) ;
 int FUNC_34 (char) ;
 int VAR_17 ;
 scalar_t__ FUNC_35 (char const*,char*,int) ;
 int FUNC_36 (struct archive_read*,struct archive_entry*,void const*,size_t,struct zip_entry*) ;
 size_t FUNC_37 (char const*) ;
 int FUNC_38 (int ,int *,int ) ;
 int * FUNC_39 (int const*,int) ;
 size_t FUNC_40 (int const*) ;
 int FUNC_41 (char const*) ;

__attribute__((used)) static int
FUNC_42(struct archive_read *VAR_18, struct archive_entry *VAR_19,
    struct zip *VAR_20)
{
 const char *VAR_21;
 const void *VAR_22;
 const wchar_t *VAR_23;
 const char *VAR_24;
 size_t VAR_25, VAR_26, VAR_27;
 struct archive_string_conv *VAR_28;
 struct zip_entry *VAR_29 = VAR_20->entry;
 struct zip_entry VAR_30;
 int VAR_31 = VAR_8;
 char VAR_32;


 VAR_30 = *VAR_29;

 VAR_20->decompress_init = 0;
 VAR_20->end_of_entry = 0;
 VAR_20->entry_uncompressed_bytes_read = 0;
 VAR_20->entry_compressed_bytes_read = 0;
 VAR_20->entry_crc32 = VAR_20->crc32func(0, ((void*)0), 0);


 if (VAR_20->sconv == ((void*)0) && !VAR_20->init_default_conversion) {
  VAR_20->sconv_default =
      FUNC_24(&(VAR_18->archive));
  VAR_20->init_default_conversion = 1;
 }

 if ((VAR_21 = FUNC_0(VAR_18, 30, ((void*)0))) == ((void*)0)) {
  FUNC_19(&VAR_18->archive, VAR_5,
      "Truncated ZIP file header");
  return (VAR_7);
 }

 if (FUNC_35(VAR_21, "PK\003\004", 4) != 0) {
  FUNC_19(&VAR_18->archive, -1, "Damaged Zip archive");
  return VAR_7;
 }
 VAR_32 = VAR_21[4];
 VAR_29->system = VAR_21[5];
 VAR_29->zip_flags = FUNC_17(VAR_21 + 6);
 if (VAR_29->zip_flags & (VAR_13 | VAR_15)) {
  VAR_20->has_encrypted_entries = 1;
  FUNC_10(VAR_19, 1);
  if (VAR_29->zip_flags & VAR_12 &&
   VAR_29->zip_flags & VAR_13 &&
   VAR_29->zip_flags & VAR_15) {
   FUNC_11(VAR_19, 1);
   return VAR_7;
  }
 }
 VAR_20->init_decryption = (VAR_29->zip_flags & VAR_13);
 VAR_29->compression = (char)FUNC_17(VAR_21 + 8);
 VAR_29->mtime = FUNC_41(VAR_21 + 10);
 VAR_29->crc32 = FUNC_18(VAR_21 + 14);
 if (VAR_29->zip_flags & VAR_14)
  VAR_29->decdat = VAR_21[11];
 else
  VAR_29->decdat = VAR_21[17];
 VAR_29->compressed_size = FUNC_18(VAR_21 + 18);
 VAR_29->uncompressed_size = FUNC_18(VAR_21 + 22);
 VAR_26 = FUNC_17(VAR_21 + 26);
 VAR_27 = FUNC_17(VAR_21 + 28);

 FUNC_1(VAR_18, 30);


 if ((VAR_22 = FUNC_0(VAR_18, VAR_26, ((void*)0))) == ((void*)0)) {
  FUNC_19(&VAR_18->archive, VAR_5,
      "Truncated ZIP file header");
  return (VAR_7);
 }
 if (VAR_29->zip_flags & VAR_16) {

  if (VAR_20->sconv_utf8 == ((void*)0)) {
   VAR_20->sconv_utf8 =
       FUNC_23(
    &VAR_18->archive, "UTF-8", 1);
   if (VAR_20->sconv_utf8 == ((void*)0))
    return (VAR_7);
  }
  VAR_28 = VAR_20->sconv_utf8;
 } else if (VAR_20->sconv != ((void*)0))
  VAR_28 = VAR_20->sconv;
 else
  VAR_28 = VAR_20->sconv_default;

 if (FUNC_2(VAR_19,
     VAR_22, VAR_26, VAR_28) != 0) {
  if (VAR_17 == VAR_10) {
   FUNC_19(&VAR_18->archive, VAR_10,
       "Can't allocate memory for Pathname");
   return (VAR_7);
  }
  FUNC_19(&VAR_18->archive,
      VAR_5,
      "Pathname cannot be converted "
      "from %s to current locale.",
      FUNC_22(VAR_28));
  VAR_31 = VAR_9;
 }
 FUNC_1(VAR_18, VAR_26);


 if ((VAR_22 = FUNC_0(VAR_18, VAR_27, ((void*)0))) == ((void*)0)) {
  FUNC_19(&VAR_18->archive, VAR_5,
      "Truncated ZIP file header");
  return (VAR_7);
 }

 if (VAR_8 != FUNC_36(VAR_18, VAR_19, VAR_22, VAR_27,
     VAR_29)) {
  return VAR_7;
 }
 FUNC_1(VAR_18, VAR_27);



 if ((VAR_29->mode & VAR_3) == VAR_1) {
  VAR_29->mode &= ~ VAR_3;
  VAR_29->mode |= VAR_4;
 }


 if (VAR_29->mode == 0) {
  VAR_29->mode |= 0664;
 }



 if (VAR_29->system == 0 &&
     (VAR_23 = FUNC_6(VAR_19)) != ((void*)0)) {
  if (FUNC_39(VAR_23, L'/') == ((void*)0) && FUNC_39(VAR_23, L'\\') != ((void*)0)) {
   size_t VAR_33;
   struct archive_wstring VAR_34;
   FUNC_27(&VAR_34);
   FUNC_32(&VAR_34, VAR_23);
   for (VAR_33 = 0; VAR_33 < FUNC_29(&VAR_34); VAR_33++) {
    if (VAR_34.s[VAR_33] == '\\')
     VAR_34.s[VAR_33] = '/';
   }
   FUNC_3(VAR_19, VAR_34.s);
   FUNC_33(&VAR_34);
  }
 }




 if ((VAR_29->mode & VAR_3) != VAR_0) {
  int VAR_35;

  VAR_23 = FUNC_6(VAR_19);
  if (VAR_23 != ((void*)0)) {
   VAR_25 = FUNC_40(VAR_23);
   VAR_35 = VAR_25 > 0 && VAR_23[VAR_25 - 1] == L'/';
  } else {
   VAR_24 = FUNC_5(VAR_19);
   VAR_25 = (VAR_24 != ((void*)0))?FUNC_37(VAR_24):0;
   VAR_35 = VAR_25 > 0 && VAR_24[VAR_25 - 1] == '/';
  }

  if (VAR_35) {
   VAR_29->mode &= ~VAR_3;
   VAR_29->mode |= VAR_0;
   VAR_29->mode |= 0111;
  } else if ((VAR_29->mode & VAR_3) == 0) {
   VAR_29->mode |= VAR_4;
  }
 }


 if ((VAR_29->mode & VAR_3) == VAR_0) {
  VAR_23 = FUNC_6(VAR_19);
  if (VAR_23 != ((void*)0)) {
   VAR_25 = FUNC_40(VAR_23);
   if (VAR_25 > 0 && VAR_23[VAR_25 - 1] != L'/') {
    struct archive_wstring VAR_36;
    FUNC_27(&VAR_36);
    FUNC_31(&VAR_36, VAR_23);
    FUNC_30(&VAR_36, L'/');
    FUNC_3(VAR_19, VAR_36.s);
    FUNC_33(&VAR_36);
   }
  } else {
   VAR_24 = FUNC_5(VAR_19);
   VAR_25 = (VAR_24 != ((void*)0))?FUNC_37(VAR_24):0;
   if (VAR_25 > 0 && VAR_24[VAR_25 - 1] != '/') {
    struct archive_string VAR_37;
    FUNC_27(&VAR_37);
    FUNC_21(&VAR_37, VAR_24);
    FUNC_20(&VAR_37, '/');
    FUNC_14(VAR_19, VAR_37.s);
    FUNC_26(&VAR_37);
   }
  }
 }

 if (VAR_29->flags & VAR_11) {


  VAR_29->zip_flags &= ~VAR_14;



  if (VAR_29->crc32 == 0) {
   VAR_29->crc32 = VAR_30.crc32;
  } else if (!VAR_20->ignore_crc32
      && VAR_29->crc32 != VAR_30.crc32) {
   FUNC_19(&VAR_18->archive,
       VAR_5,
       "Inconsistent CRC32 values");
   VAR_31 = VAR_9;
  }
  if (VAR_29->compressed_size == 0) {
   VAR_29->compressed_size
       = VAR_30.compressed_size;
  } else if (VAR_29->compressed_size
      != VAR_30.compressed_size) {
   FUNC_19(&VAR_18->archive,
       VAR_5,
       "Inconsistent compressed size: "
       "%jd in central directory, %jd in local header",
       (intmax_t)VAR_30.compressed_size,
       (intmax_t)VAR_29->compressed_size);
   VAR_31 = VAR_9;
  }
  if (VAR_29->uncompressed_size == 0) {
   VAR_29->uncompressed_size
       = VAR_30.uncompressed_size;
  } else if (VAR_29->uncompressed_size
      != VAR_30.uncompressed_size) {
   FUNC_19(&VAR_18->archive,
       VAR_5,
       "Inconsistent uncompressed size: "
       "%jd in central directory, %jd in local header",
       (intmax_t)VAR_30.uncompressed_size,
       (intmax_t)VAR_29->uncompressed_size);
   VAR_31 = VAR_9;
  }
 }


 FUNC_12(VAR_19, VAR_29->mode);
 FUNC_16(VAR_19, VAR_29->uid);
 FUNC_9(VAR_19, VAR_29->gid);
 FUNC_13(VAR_19, VAR_29->mtime, 0);
 FUNC_8(VAR_19, VAR_29->ctime, 0);
 FUNC_7(VAR_19, VAR_29->atime, 0);

 if ((VAR_20->entry->mode & VAR_3) == VAR_2) {
  size_t VAR_38;

  if (VAR_29->compressed_size > 64 * 1024) {
   FUNC_19(&VAR_18->archive, VAR_6,
       "Zip file with oversized link entry");
   return VAR_7;
  }

  VAR_38 = (size_t)VAR_29->compressed_size;

  FUNC_15(VAR_19, 0);
  VAR_21 = FUNC_0(VAR_18, VAR_38, ((void*)0));
  if (VAR_21 == ((void*)0)) {
   FUNC_19(&VAR_18->archive, VAR_6,
       "Truncated Zip file");
   return VAR_7;
  }

  VAR_28 = VAR_20->sconv;
  if (VAR_28 == ((void*)0) && (VAR_20->entry->zip_flags & VAR_16))
   VAR_28 = VAR_20->sconv_utf8;
  if (VAR_28 == ((void*)0))
   VAR_28 = VAR_20->sconv_default;
  if (FUNC_4(VAR_19, VAR_21, VAR_38,
      VAR_28) != 0) {
   if (VAR_17 != VAR_10 && VAR_28 == VAR_20->sconv_utf8 &&
       (VAR_20->entry->zip_flags & VAR_16))
       FUNC_4(VAR_19, VAR_21,
    VAR_38, ((void*)0));
   if (VAR_17 == VAR_10) {
    FUNC_19(&VAR_18->archive, VAR_10,
        "Can't allocate memory for Symlink");
    return (VAR_7);
   }





   if (VAR_28 != VAR_20->sconv_utf8 ||
       (VAR_20->entry->zip_flags & VAR_16) == 0) {
    FUNC_19(&VAR_18->archive,
        VAR_5,
        "Symlink cannot be converted "
        "from %s to current locale.",
        FUNC_22(
     VAR_28));
    VAR_31 = VAR_9;
   }
  }
  VAR_29->uncompressed_size = VAR_29->compressed_size = 0;

  if (FUNC_1(VAR_18, VAR_38) < 0) {
   FUNC_19(&VAR_18->archive, VAR_6,
       "Read error skipping symlink target name");
   return VAR_7;
  }
 } else if (0 == (VAR_29->zip_flags & VAR_14)
     || VAR_29->uncompressed_size > 0) {

  FUNC_15(VAR_19, VAR_29->uncompressed_size);
 }
 VAR_20->entry_bytes_remaining = VAR_29->compressed_size;


 if (0 == (VAR_29->zip_flags & VAR_14)
     && VAR_20->entry_bytes_remaining < 1)
  VAR_20->end_of_entry = 1;


        FUNC_25(&VAR_20->format_name);
 FUNC_28(&VAR_20->format_name, "ZIP %d.%d (%s)",
     VAR_32 / 10, VAR_32 % 10,
     FUNC_34(VAR_20->entry->compression));
 VAR_18->archive.archive_format_name = VAR_20->format_name.s;

 return (VAR_31);
}
