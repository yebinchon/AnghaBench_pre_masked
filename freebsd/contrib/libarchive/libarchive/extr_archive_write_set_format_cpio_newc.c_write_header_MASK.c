
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int entry_bytes_remaining; int padding; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct archive_write*,char const*,int) ;
 struct archive_entry* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive_entry*) ;
 int FUNC_16 (struct archive_entry*,int ) ;
 int FUNC_17 (struct archive_entry*) ;
 int FUNC_18 (struct archive_entry*) ;
 int FUNC_19 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_20 (struct archive_entry*) ;
 int FUNC_21 (int *,scalar_t__,char*,...) ;
 int FUNC_22 (struct archive_string_conv*) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_23 (int,char*,int ) ;
 struct archive_string_conv* FUNC_24 (struct archive_write*) ;
 int FUNC_25 (char*,int ,int) ;
 int FUNC_26 (char const*) ;

__attribute__((used)) static int
FUNC_27(struct archive_write *VAR_40, struct archive_entry *VAR_41)
{
 int64_t VAR_42;
 struct cpio *VAR_43;
 const char *VAR_44, *VAR_45;
 int VAR_46, VAR_47, VAR_48;
 char VAR_49[VAR_20];
 struct archive_string_conv *VAR_50;
 struct archive_entry *VAR_51;
 size_t VAR_52;
 int VAR_53;

 VAR_43 = (struct cpio *)VAR_40->format_data;
 VAR_48 = VAR_6;
 VAR_50 = FUNC_24(VAR_40);
 VAR_51 = ((void*)0);


 VAR_47 = FUNC_13(VAR_41, &VAR_45, &VAR_52, VAR_50);
 if (VAR_47 != 0) {
  if (VAR_39 == VAR_8) {
   FUNC_21(&VAR_40->archive, VAR_8,
       "Can't allocate memory for Pathname");
   VAR_48 = VAR_5;
   goto exit_write_header;
  }
  FUNC_21(&VAR_40->archive, VAR_3,
      "Can't translate pathname '%s' to %s",
      FUNC_12(VAR_41),
      FUNC_22(VAR_50));
  VAR_48 = VAR_7;
 }
 VAR_46 = (int)VAR_52 + 1;

 FUNC_25(VAR_49, 0, VAR_20);
 FUNC_23(0x070701, VAR_49 + VAR_23, VAR_24);
 FUNC_23(FUNC_3(VAR_41), VAR_49 + VAR_12,
     VAR_13);
 FUNC_23(FUNC_4(VAR_41), VAR_49 + VAR_14,
     VAR_15);

 VAR_42 = FUNC_8(VAR_41);
 if (VAR_42 > 0xffffffff) {
  FUNC_21(&VAR_40->archive, VAR_9,
      "large inode number truncated");
  VAR_48 = VAR_7;
 }


 FUNC_23(VAR_42 & 0xffffffff, VAR_49 + VAR_21, VAR_22);
 FUNC_23(FUNC_9(VAR_41), VAR_49 + VAR_25, VAR_26);
 FUNC_23(FUNC_20(VAR_41), VAR_49 + VAR_37, VAR_38);
 FUNC_23(FUNC_7(VAR_41), VAR_49 + VAR_18, VAR_19);
 FUNC_23(FUNC_11(VAR_41), VAR_49 + VAR_31, VAR_32);
 if (FUNC_5(VAR_41) == VAR_0
     || FUNC_5(VAR_41) == VAR_1) {
     FUNC_23(FUNC_14(VAR_41), VAR_49 + VAR_33, VAR_34);
     FUNC_23(FUNC_15(VAR_41), VAR_49 + VAR_35, VAR_36);
 } else {
     FUNC_23(0, VAR_49 + VAR_33, VAR_34);
     FUNC_23(0, VAR_49 + VAR_35, VAR_36);
 }
 FUNC_23(FUNC_10(VAR_41), VAR_49 + VAR_27, VAR_28);
 FUNC_23(VAR_46, VAR_49 + VAR_29, VAR_30);
 FUNC_23(0, VAR_49 + VAR_10, VAR_11);


 if (FUNC_5(VAR_41) != VAR_2)
  FUNC_16(VAR_41, 0);


 VAR_47 = FUNC_19(VAR_41, &VAR_44, &VAR_52, VAR_50);
 if (VAR_47 != 0) {
  if (VAR_39 == VAR_8) {
   FUNC_21(&VAR_40->archive, VAR_8,
       "Can't allocate memory for Likname");
   VAR_48 = VAR_5;
   goto exit_write_header;
  }
  FUNC_21(&VAR_40->archive, VAR_3,
      "Can't translate linkname '%s' to %s",
      FUNC_18(VAR_41),
      FUNC_22(VAR_50));
  VAR_48 = VAR_7;
 }
 if (VAR_52 > 0 && VAR_44 != ((void*)0) && *VAR_44 != '\0')
  VAR_47 = FUNC_23(FUNC_26(VAR_44), VAR_49 + VAR_16,
      VAR_17);
 else
  VAR_47 = FUNC_23(FUNC_17(VAR_41),
      VAR_49 + VAR_16, VAR_17);
 if (VAR_47) {
  FUNC_21(&VAR_40->archive, VAR_9,
      "File is too large for this format.");
  VAR_48 = VAR_4;
  goto exit_write_header;
 }

 VAR_47 = FUNC_1(VAR_40, VAR_49, VAR_20);
 if (VAR_47 != VAR_6) {
  VAR_48 = VAR_5;
  goto exit_write_header;
 }


 VAR_47 = FUNC_1(VAR_40, VAR_45, VAR_46);
 if (VAR_47 != VAR_6) {
  VAR_48 = VAR_5;
  goto exit_write_header;
 }
 VAR_53 = FUNC_0(VAR_46 + VAR_20);
 if (VAR_53) {
  VAR_47 = FUNC_1(VAR_40, "\0\0\0", VAR_53);
  if (VAR_47 != VAR_6) {
   VAR_48 = VAR_5;
   goto exit_write_header;
  }
 }

 VAR_43->entry_bytes_remaining = FUNC_17(VAR_41);
 VAR_43->padding = (int)FUNC_0(VAR_43->entry_bytes_remaining);


 if (VAR_44 != ((void*)0) && *VAR_44 != '\0') {
  VAR_47 = FUNC_1(VAR_40, VAR_44, FUNC_26(VAR_44));
  if (VAR_47 != VAR_6) {
   VAR_48 = VAR_5;
   goto exit_write_header;
  }
  VAR_53 = FUNC_0(FUNC_26(VAR_44));
  VAR_47 = FUNC_1(VAR_40, "\0\0\0", VAR_53);
  if (VAR_47 != VAR_6) {
   VAR_48 = VAR_5;
   goto exit_write_header;
  }
 }
exit_write_header:
 FUNC_6(VAR_51);
 return (VAR_48);
}
