
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct gnutar {int init_default_conversion; char* pathname; int pathname_length; char* linkname; int linkname_length; int entry_padding; scalar_t__ entry_bytes_remaining; int gname_length; int gname; int uname_length; int uname; struct archive_string_conv* opt_sconv; struct archive_string_conv* sconv_default; } ;
struct archive_wstring {int s; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;
struct archive_string {int s; } ;
struct archive_entry {int dummy; } ;
typedef int ssize_t ;
typedef int int64_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_write*,int) ;
 int FUNC_1 (struct archive_write*,char const*,int) ;
 struct archive_entry* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*,int *,int *,struct archive_string_conv*) ;
 int * FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,char**,int*,struct archive_string_conv*) ;
 scalar_t__ FUNC_11 (struct archive_entry*) ;
 struct archive_entry* FUNC_12 (int *) ;
 char* FUNC_13 (struct archive_entry*) ;
 int FUNC_14 (struct archive_entry*,char**,int*,struct archive_string_conv*) ;
 int* FUNC_15 (struct archive_entry*) ;
 int FUNC_16 (struct archive_entry*,char*) ;
 int FUNC_17 (struct archive_entry*,char*) ;
 int FUNC_18 (struct archive_entry*,size_t) ;
 int FUNC_19 (struct archive_entry*,char*) ;
 scalar_t__ FUNC_20 (struct archive_entry*) ;
 int * FUNC_21 (struct archive_entry*) ;
 int FUNC_22 (struct archive_entry*,char**,int*,struct archive_string_conv*) ;
 int FUNC_23 (struct archive_entry*) ;
 int FUNC_24 (struct archive_entry*,int *,int *,struct archive_string_conv*) ;
 int FUNC_25 (struct archive_write*,char*,struct archive_entry*,int) ;
 int FUNC_26 (int *,scalar_t__,char*,...) ;
 int FUNC_27 (struct archive_wstring*,char) ;
 int FUNC_28 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_29 (int *) ;
 int * FUNC_30 (struct archive_wstring*,size_t) ;
 int FUNC_31 (struct archive_wstring*) ;
 int FUNC_32 (struct archive_wstring*) ;
 int FUNC_33 (struct archive_wstring*,char const*,size_t) ;
 int FUNC_34 (struct archive_wstring*,int) ;
 int * FUNC_35 (struct archive_wstring*,size_t) ;
 int FUNC_36 (struct archive_wstring*) ;
 int FUNC_37 (struct archive_wstring*,int const*,size_t) ;
 scalar_t__ VAR_8 ;
 int FUNC_38 (char const*) ;
 int FUNC_39 (int const*) ;

__attribute__((used)) static int
FUNC_40(struct archive_write *VAR_9,
     struct archive_entry *VAR_10)
{
 char VAR_11[512];
 int VAR_12, VAR_13, VAR_14 = VAR_3;
 int VAR_15;
 struct gnutar *VAR_16;
 struct archive_string_conv *VAR_17;
 struct archive_entry *VAR_18;

 VAR_16 = (struct gnutar *)VAR_9->format_data;


 if (VAR_16->opt_sconv == ((void*)0)) {
  if (!VAR_16->init_default_conversion) {
   VAR_16->sconv_default =
       FUNC_29(
    &(VAR_9->archive));
   VAR_16->init_default_conversion = 1;
  }
  VAR_17 = VAR_16->sconv_default;
 } else
  VAR_17 = VAR_16->opt_sconv;


 if (FUNC_9(VAR_10) != ((void*)0) ||
     FUNC_21(VAR_10) != ((void*)0) ||
     !(FUNC_5(VAR_10) == 129))
  FUNC_18(VAR_10, 0);

 if (132 == FUNC_5(VAR_10)) {
  const char *VAR_19;
  size_t VAR_20;
   VAR_19 = FUNC_13(VAR_10);





  if (VAR_19 != ((void*)0) && VAR_19[0] != '\0' && VAR_19[FUNC_38(VAR_19) - 1] != '/') {
   struct archive_string VAR_21;

   FUNC_32(&VAR_21);
   VAR_20 = FUNC_38(VAR_19);
   if (FUNC_30(&VAR_21,
       VAR_20 + 2) == ((void*)0)) {
    FUNC_26(&VAR_9->archive, VAR_5,
        "Can't allocate ustar data");
    FUNC_31(&VAR_21);
    return(VAR_2);
   }
   FUNC_33(&VAR_21, VAR_19, VAR_20);
   FUNC_27(&VAR_21, '/');
   FUNC_3(VAR_10, VAR_21.s);
   FUNC_31(&VAR_21);
  }
 }
 VAR_18 = ((void*)0);

 VAR_12 = FUNC_14(VAR_10, &(VAR_16->pathname),
     &(VAR_16->pathname_length), VAR_17);
 if (VAR_12 != 0) {
  if (VAR_8 == VAR_5) {
   FUNC_26(&VAR_9->archive, VAR_5,
       "Can't allocate memory for Pathame");
   VAR_13 = VAR_2;
   goto exit_write_header;
  }
  FUNC_26(&VAR_9->archive, VAR_0,
      "Can't translate pathname '%s' to %s",
      FUNC_13(VAR_10),
      FUNC_28(VAR_17));
  VAR_14 = VAR_4;
 }
 VAR_12 = FUNC_24(VAR_10, &(VAR_16->uname),
     &(VAR_16->uname_length), VAR_17);
 if (VAR_12 != 0) {
  if (VAR_8 == VAR_5) {
   FUNC_26(&VAR_9->archive, VAR_5,
       "Can't allocate memory for Uname");
   VAR_13 = VAR_2;
   goto exit_write_header;
  }
  FUNC_26(&VAR_9->archive,
      VAR_0,
      "Can't translate uname '%s' to %s",
      FUNC_23(VAR_10),
      FUNC_28(VAR_17));
  VAR_14 = VAR_4;
 }
 VAR_12 = FUNC_8(VAR_10, &(VAR_16->gname),
     &(VAR_16->gname_length), VAR_17);
 if (VAR_12 != 0) {
  if (VAR_8 == VAR_5) {
   FUNC_26(&VAR_9->archive, VAR_5,
       "Can't allocate memory for Gname");
   VAR_13 = VAR_2;
   goto exit_write_header;
  }
  FUNC_26(&VAR_9->archive,
      VAR_0,
      "Can't translate gname '%s' to %s",
      FUNC_7(VAR_10),
      FUNC_28(VAR_17));
  VAR_14 = VAR_4;
 }


 VAR_12 = FUNC_10(VAR_10, &(VAR_16->linkname),
     &(VAR_16->linkname_length), VAR_17);
 if (VAR_12 != 0) {
  if (VAR_8 == VAR_5) {
   FUNC_26(&VAR_9->archive, VAR_5,
       "Can't allocate memory for Linkname");
   VAR_13 = VAR_2;
   goto exit_write_header;
  }
  FUNC_26(&VAR_9->archive,
      VAR_0,
      "Can't translate linkname '%s' to %s",
      FUNC_9(VAR_10),
      FUNC_28(VAR_17));
  VAR_14 = VAR_4;
 }
 if (VAR_16->linkname_length == 0) {
  VAR_12 = FUNC_22(VAR_10, &(VAR_16->linkname),
      &(VAR_16->linkname_length), VAR_17);
  if (VAR_12 != 0) {
   if (VAR_8 == VAR_5) {
    FUNC_26(&VAR_9->archive, VAR_5,
        "Can't allocate memory for Linkname");
    VAR_13 = VAR_2;
    goto exit_write_header;
   }
   FUNC_26(&VAR_9->archive,
       VAR_0,
       "Can't translate linkname '%s' to %s",
       FUNC_9(VAR_10),
       FUNC_28(VAR_17));
   VAR_14 = VAR_4;
  }
 }
 if (VAR_16->linkname_length > VAR_6) {
  size_t VAR_22 = VAR_16->linkname_length + 1;
  struct archive_entry *VAR_23 = FUNC_12(&VAR_9->archive);



  FUNC_19(VAR_23, "root");
  FUNC_16(VAR_23, "wheel");

  FUNC_17(VAR_23, "././@LongLink");
  FUNC_18(VAR_23, VAR_22);
  VAR_13 = FUNC_25(VAR_9, VAR_11, VAR_23, 'K');
  FUNC_6(VAR_23);
  if (VAR_13 < VAR_4)
   goto exit_write_header;
  VAR_13 = FUNC_1(VAR_9, VAR_11, 512);
  if (VAR_13 < VAR_4)
   goto exit_write_header;

  VAR_13 = FUNC_1(VAR_9, VAR_16->linkname, VAR_22);
  if (VAR_13 < VAR_4)
   goto exit_write_header;

  VAR_13 = FUNC_0(VAR_9, 0x1ff & (-(ssize_t)VAR_22));
  if (VAR_13 < VAR_4)
   goto exit_write_header;
 }


 if (VAR_16->pathname_length > VAR_7) {
  const char *VAR_24 = VAR_16->pathname;
  size_t VAR_25 = VAR_16->pathname_length + 1;
  struct archive_entry *VAR_26 = FUNC_12(&VAR_9->archive);



  FUNC_19(VAR_26, "root");
  FUNC_16(VAR_26, "wheel");

  FUNC_17(VAR_26, "././@LongLink");
  FUNC_18(VAR_26, VAR_25);
  VAR_13 = FUNC_25(VAR_9, VAR_11, VAR_26, 'L');
  FUNC_6(VAR_26);
  if (VAR_13 < VAR_4)
   goto exit_write_header;
  VAR_13 = FUNC_1(VAR_9, VAR_11, 512);
  if(VAR_13 < VAR_4)
   goto exit_write_header;

  VAR_13 = FUNC_1(VAR_9, VAR_24, VAR_25);
  if(VAR_13 < VAR_4)
   goto exit_write_header;

  VAR_13 = FUNC_0(VAR_9, 0x1ff & (-(ssize_t)VAR_25));
  if (VAR_13 < VAR_4)
   goto exit_write_header;
 }

 if (FUNC_9(VAR_10) != ((void*)0)) {
  VAR_15 = '1';
 } else
  switch (FUNC_5(VAR_10)) {
  case 129: VAR_15 = '0' ; break;
  case 130: VAR_15 = '2' ; break;
  case 133: VAR_15 = '3' ; break;
  case 134: VAR_15 = '4' ; break;
  case 132: VAR_15 = '5' ; break;
  case 131: VAR_15 = '6' ; break;
  case 128:
   FUNC_26(&VAR_9->archive,
       VAR_0,
       "tar format cannot archive socket");
   VAR_13 = VAR_1;
   goto exit_write_header;
  default:
   FUNC_26(&VAR_9->archive,
       VAR_0,
       "tar format cannot archive this (mode=0%lo)",
       (unsigned long)FUNC_11(VAR_10));
   VAR_13 = VAR_1;
   goto exit_write_header;
  }

 VAR_13 = FUNC_25(VAR_9, VAR_11, VAR_10, VAR_15);
 if (VAR_13 < VAR_4)
  goto exit_write_header;
 if (VAR_14 < VAR_13)
  VAR_13 = VAR_14;
 VAR_14 = FUNC_1(VAR_9, VAR_11, 512);
 if (VAR_14 < VAR_4) {
  VAR_13 = VAR_14;
  goto exit_write_header;
 }
 if (VAR_14 < VAR_13)
  VAR_13 = VAR_14;

 VAR_16->entry_bytes_remaining = FUNC_20(VAR_10);
 VAR_16->entry_padding = 0x1ff & (-(int64_t)VAR_16->entry_bytes_remaining);
exit_write_header:
 FUNC_6(VAR_18);
 return (VAR_13);
}
