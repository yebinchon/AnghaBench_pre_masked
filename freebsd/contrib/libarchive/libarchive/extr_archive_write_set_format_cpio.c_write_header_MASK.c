
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int entry_bytes_remaining; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;
typedef int h ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct archive_write*,char const*,int) ;
 struct archive_entry* FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_11 (struct archive_entry*,int ) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_15 (struct archive_entry*) ;
 int FUNC_16 (int *,scalar_t__,char*,...) ;
 int FUNC_17 (struct archive_string_conv*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_18 (int,char*,int ) ;
 struct archive_string_conv* FUNC_19 (struct archive_write*) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (struct cpio*,struct archive_entry*) ;

__attribute__((used)) static int
FUNC_23(struct archive_write *VAR_33, struct archive_entry *VAR_34)
{
 struct cpio *VAR_35;
 const char *VAR_36, *VAR_37;
 int VAR_38, VAR_39, VAR_40;
 int64_t VAR_41;
 char VAR_42[76];
 struct archive_string_conv *VAR_43;
 struct archive_entry *VAR_44;
 size_t VAR_45;

 VAR_35 = (struct cpio *)VAR_33->format_data;
 VAR_40 = VAR_6;
 VAR_43 = FUNC_19(VAR_33);
 VAR_44 = ((void*)0);


 VAR_39 = FUNC_10(VAR_34, &VAR_37, &VAR_45, VAR_43);
 if (VAR_39 != 0) {
  if (VAR_32 == VAR_8) {
   FUNC_16(&VAR_33->archive, VAR_8,
       "Can't allocate memory for Pathname");
   VAR_40 = VAR_5;
   goto exit_write_header;
  }
  FUNC_16(&VAR_33->archive, VAR_3,
      "Can't translate pathname '%s' to %s",
      FUNC_9(VAR_34),
      FUNC_17(VAR_43));
  VAR_40 = VAR_7;
 }

 VAR_38 = (int)VAR_45 + 1;

 FUNC_20(VAR_42, 0, sizeof(VAR_42));
 FUNC_18(070707, VAR_42 + VAR_18, VAR_19);
 FUNC_18(FUNC_2(VAR_34), VAR_42 + VAR_10, VAR_11);

 VAR_41 = FUNC_22(VAR_35, VAR_34);
 if (VAR_41 < 0) {
  FUNC_16(&VAR_33->archive, VAR_8,
      "No memory for ino translation table");
  VAR_40 = VAR_5;
  goto exit_write_header;
 } else if (VAR_41 > 0777777) {
  FUNC_16(&VAR_33->archive, VAR_9,
      "Too many files for this cpio format");
  VAR_40 = VAR_5;
  goto exit_write_header;
 }
 FUNC_18(VAR_41 & 0777777, VAR_42 + VAR_16, VAR_17);


 FUNC_18(FUNC_6(VAR_34), VAR_42 + VAR_20, VAR_21);
 FUNC_18(FUNC_15(VAR_34), VAR_42 + VAR_30, VAR_31);
 FUNC_18(FUNC_5(VAR_34), VAR_42 + VAR_14, VAR_15);
 FUNC_18(FUNC_8(VAR_34), VAR_42 + VAR_26, VAR_27);
 if (FUNC_3(VAR_34) == VAR_0
     || FUNC_3(VAR_34) == VAR_1)
     FUNC_18(FUNC_2(VAR_34), VAR_42 + VAR_28, VAR_29);
 else
     FUNC_18(0, VAR_42 + VAR_28, VAR_29);
 FUNC_18(FUNC_7(VAR_34), VAR_42 + VAR_22, VAR_23);
 FUNC_18(VAR_38, VAR_42 + VAR_24, VAR_25);


 if (FUNC_3(VAR_34) != VAR_2)
  FUNC_11(VAR_34, 0);


 VAR_39 = FUNC_14(VAR_34, &VAR_36, &VAR_45, VAR_43);
 if (VAR_39 != 0) {
  if (VAR_32 == VAR_8) {
   FUNC_16(&VAR_33->archive, VAR_8,
       "Can't allocate memory for Linkname");
   VAR_40 = VAR_5;
   goto exit_write_header;
  }
  FUNC_16(&VAR_33->archive, VAR_3,
      "Can't translate linkname '%s' to %s",
      FUNC_13(VAR_34),
      FUNC_17(VAR_43));
  VAR_40 = VAR_7;
 }
 if (VAR_45 > 0 && VAR_36 != ((void*)0) && *VAR_36 != '\0')
  VAR_39 = FUNC_18(FUNC_21(VAR_36), VAR_42 + VAR_12,
      VAR_13);
 else
  VAR_39 = FUNC_18(FUNC_12(VAR_34),
      VAR_42 + VAR_12, VAR_13);
 if (VAR_39) {
  FUNC_16(&VAR_33->archive, VAR_9,
      "File is too large for cpio format.");
  VAR_40 = VAR_4;
  goto exit_write_header;
 }

 VAR_39 = FUNC_0(VAR_33, VAR_42, sizeof(VAR_42));
 if (VAR_39 != VAR_6) {
  VAR_40 = VAR_5;
  goto exit_write_header;
 }

 VAR_39 = FUNC_0(VAR_33, VAR_37, VAR_38);
 if (VAR_39 != VAR_6) {
  VAR_40 = VAR_5;
  goto exit_write_header;
 }

 VAR_35->entry_bytes_remaining = FUNC_12(VAR_34);


 if (VAR_36 != ((void*)0) && *VAR_36 != '\0') {
  VAR_39 = FUNC_0(VAR_33, VAR_36, FUNC_21(VAR_36));
  if (VAR_39 != VAR_6) {
   VAR_40 = VAR_5;
   goto exit_write_header;
  }
 }
exit_write_header:
 FUNC_4(VAR_44);
 return (VAR_40);
}
