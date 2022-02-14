
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef size_t uint64_t ;
typedef int time_t ;
struct TYPE_10__ {char* s; } ;
struct pax {int sparse_map_padding; int entry_bytes_remaining; int entry_padding; int * sparse_list; TYPE_1__ pax_header; TYPE_1__ sparse_map; scalar_t__ opt_binary; struct archive_string_conv* sconv_utf8; } ;
struct archive_wstring {char* s; } ;
struct TYPE_11__ {scalar_t__ archive_format; } ;
struct archive_write {TYPE_4__ archive; scalar_t__ format_data; } ;
struct archive_string_conv {int dummy; } ;
struct archive_string {char* s; } ;
struct archive_entry {int dummy; } ;
typedef int ssize_t ;
typedef int intmax_t ;
typedef int int64_t ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct archive_write*,char*,struct archive_entry*,char,int,int *) ;
 int FUNC_1 (struct archive_write*,size_t) ;
 int FUNC_2 (struct archive_write*,char*,int) ;
 struct archive_entry* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_write*,struct archive_entry*,struct pax*,int) ;
 int FUNC_5 (TYPE_1__*,char*,char const*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int,scalar_t__) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 scalar_t__ FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (struct archive_entry*) ;
 scalar_t__ FUNC_12 (struct archive_entry*) ;
 scalar_t__ FUNC_13 (struct archive_entry*) ;
 struct archive_entry* FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive_entry*,char*) ;
 int FUNC_16 (struct archive_entry*,char*) ;
 int FUNC_17 (struct archive_entry*) ;
 scalar_t__ FUNC_18 (struct archive_entry*) ;
 char* FUNC_19 (struct archive_entry*) ;
 int const FUNC_20 (struct archive_entry*) ;
 int FUNC_21 (struct archive_entry*) ;
 int FUNC_22 (struct archive_entry*) ;
 int FUNC_23 (struct archive_entry*) ;
 void* FUNC_24 (struct archive_entry*,size_t*) ;
 int FUNC_25 (struct archive_entry*) ;
 int FUNC_26 (struct archive_entry*) ;
 scalar_t__ FUNC_27 (struct archive_entry*) ;
 struct archive_entry* FUNC_28 (TYPE_4__*) ;
 char* FUNC_29 (struct archive_entry*) ;
 int* FUNC_30 (struct archive_entry*) ;
 int FUNC_31 (struct archive_entry*) ;
 int FUNC_32 (struct archive_entry*) ;
 int FUNC_33 (struct archive_entry*) ;
 int FUNC_34 (struct archive_entry*,int ,int ) ;
 int FUNC_35 (struct archive_entry*,int ,int ) ;
 int FUNC_36 (struct archive_entry*,int const) ;
 int FUNC_37 (struct archive_entry*,int) ;
 int FUNC_38 (struct archive_entry*,int ) ;
 int FUNC_39 (struct archive_entry*,char*) ;
 int FUNC_40 (struct archive_entry*,int) ;
 int FUNC_41 (struct archive_entry*,int,scalar_t__) ;
 int FUNC_42 (struct archive_entry*,int ) ;
 int FUNC_43 (struct archive_entry*,int ) ;
 int FUNC_44 (struct archive_entry*,size_t) ;
 int FUNC_45 (struct archive_entry*,char*) ;
 int FUNC_46 (struct archive_entry*,int) ;
 int FUNC_47 (struct archive_entry*,int ) ;
 int FUNC_48 (struct archive_entry*) ;
 int FUNC_49 (struct archive_entry*,int,int ) ;
 int FUNC_50 (struct archive_entry*,int*,int*) ;
 int FUNC_51 (struct archive_entry*) ;
 scalar_t__ FUNC_52 (struct archive_entry*) ;
 int FUNC_53 (struct archive_entry*) ;
 int FUNC_54 (struct archive_entry*) ;
 scalar_t__ FUNC_55 (struct archive_entry*) ;
 int FUNC_56 (TYPE_4__*,int ,char*,...) ;
 int FUNC_57 (struct archive_wstring*,char) ;
 int FUNC_58 (struct archive_wstring*,char*) ;
 int FUNC_59 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_60 (TYPE_4__*,char*,int) ;
 int FUNC_61 (TYPE_1__*) ;
 int * FUNC_62 (struct archive_wstring*,size_t) ;
 int FUNC_63 (struct archive_wstring*) ;
 int FUNC_64 (struct archive_wstring*) ;
 int FUNC_65 (TYPE_1__*,char*,int,...) ;
 int FUNC_66 (TYPE_1__*) ;
 int FUNC_67 (struct archive_wstring*,char const*,size_t) ;
 scalar_t__ FUNC_68 (struct archive_write*,void const*,size_t) ;
 int FUNC_69 (struct archive_write*) ;
 int FUNC_70 (struct archive_write*,struct pax*,struct archive_entry*) ;
 int FUNC_71 (struct archive_wstring*,int) ;
 int * FUNC_72 (struct archive_wstring*,size_t) ;
 int FUNC_73 (struct archive_wstring*) ;
 int FUNC_74 (struct archive_wstring*,int const*,size_t) ;
 int FUNC_75 (char*,char*) ;
 int FUNC_76 (char*,char const*) ;
 int FUNC_77 (char*,char const*,size_t,int *) ;
 int FUNC_78 (char*) ;
 int FUNC_79 (struct archive_write*,struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_80 (struct archive_write*,struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_81 (struct archive_write*,struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_82 (struct archive_write*,struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_83 (struct archive_write*,struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 scalar_t__ FUNC_84 (char const*) ;
 char* FUNC_85 (size_t) ;
 int FUNC_86 (char*,char*,int) ;
 int FUNC_87 (struct pax*,int,size_t) ;
 int FUNC_88 (struct pax*) ;
 char* FUNC_89 (char const*,char) ;
 int FUNC_90 (char*,char const*) ;
 int FUNC_91 (char const*) ;
 char* FUNC_92 (char*,char) ;
 size_t FUNC_93 (int const*) ;

__attribute__((used)) static int
FUNC_94(struct archive_write *VAR_20,
    struct archive_entry *VAR_21)
{
 struct archive_entry *VAR_22;
 const char *VAR_23;
 const char *VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28;
 int VAR_29;
 uint64_t VAR_30, VAR_31;
 struct pax *VAR_32;
 const char *VAR_33;
 const char *VAR_34 = ((void*)0), *VAR_35 = ((void*)0);
 const char *VAR_36 = ((void*)0), *VAR_37 = ((void*)0);
 const void *VAR_38;
 size_t VAR_39;
 struct archive_string_conv *VAR_40;
 size_t VAR_41, VAR_42, VAR_43;
 size_t VAR_44, VAR_45;

 char VAR_46[512];
 char VAR_47[512];
 char VAR_48[256];
 char VAR_49[256];
 char VAR_50[256];
 struct archive_string VAR_51;

 VAR_27 = VAR_14;
 VAR_25 = 0;
 VAR_32 = (struct pax *)VAR_20->format_data;


 if (FUNC_29(VAR_21) == ((void*)0)) {
  FUNC_56(&VAR_20->archive, VAR_9,
     "Can't record entry in tar file without pathname");
  return (VAR_10);
 }




 if (VAR_32->opt_binary)
  VAR_40 = ((void*)0);
 else {

  if (VAR_32->sconv_utf8 == ((void*)0)) {


   VAR_32->sconv_utf8 = FUNC_60(
       &(VAR_20->archive), "UTF-8", 1);
   if (VAR_32->sconv_utf8 == ((void*)0))

    return (VAR_10);
  }
  VAR_40 = VAR_32->sconv_utf8;
 }

 VAR_26 = FUNC_80(VAR_20, VAR_21, &VAR_33,
     &VAR_41, VAR_40);
 if (VAR_26 == VAR_11)
  return (VAR_26);
 else if (VAR_26 != VAR_14) {
  VAR_26 = FUNC_80(VAR_20, VAR_21, &VAR_33,
      &VAR_41, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  FUNC_56(&VAR_20->archive, VAR_8,
      "Can't translate linkname '%s' to %s", VAR_33,
      FUNC_59(VAR_40));
  VAR_27 = VAR_15;
  VAR_40 = ((void*)0);
 }


 if (VAR_33 == ((void*)0)) {
  switch (FUNC_20(VAR_21)) {
  case 134:
  case 133:
  case 131:
  case 130:
  case 129:
   break;
  case 132:
  {
    VAR_23 = FUNC_29(VAR_21);





   if (VAR_23 != ((void*)0) && VAR_23[0] != '\0' && VAR_23[FUNC_91(VAR_23) - 1] != '/') {
    struct archive_string VAR_52;

    FUNC_64(&VAR_52);
    VAR_42 = FUNC_91(VAR_23);
    if (FUNC_62(&VAR_52,
        VAR_42 + 2) == ((void*)0)) {
     FUNC_56(&VAR_20->archive, VAR_16,
         "Can't allocate pax data");
     FUNC_63(&VAR_52);
     return(VAR_11);
    }
    FUNC_67(&VAR_52, VAR_23, VAR_42);
    FUNC_57(&VAR_52, '/');
    FUNC_15(
        VAR_21, VAR_52.s);
    FUNC_63(&VAR_52);
   }
   break;
  }
  case 128:
   FUNC_56(&VAR_20->archive,
       VAR_8,
       "tar format cannot archive socket");
   return (VAR_10);
  default:
   FUNC_56(&VAR_20->archive,
       VAR_8,
       "tar format cannot archive this (type=0%lo)",
       (unsigned long)
       FUNC_20(VAR_21));
   return (VAR_10);
  }
 }
 VAR_38 =
     FUNC_24(VAR_21, &VAR_39);
 if (VAR_38 != ((void*)0)) {
  const char *VAR_53;
  char *VAR_54, *VAR_55;
  size_t VAR_56;
  struct archive_entry *VAR_57 = FUNC_28(&VAR_20->archive);

  VAR_53 = FUNC_29(VAR_21);
  VAR_56 = FUNC_91(VAR_53);
  VAR_54 = FUNC_85(VAR_56 + 3);
  if (VAR_54 == ((void*)0) || VAR_57 == ((void*)0)) {

   FUNC_21(VAR_57);
   FUNC_78(VAR_54);
   return (VAR_10);
  }
  FUNC_90(VAR_54, VAR_53);

  VAR_55 = FUNC_92(VAR_54, '/');
  while (VAR_55 != ((void*)0) && VAR_55[1] == '\0') {
   *VAR_55 = '\0';
   VAR_55 = FUNC_92(VAR_54, '/');
  }
  if (VAR_55 == ((void*)0)) {
   FUNC_86(VAR_54 + 2, VAR_54, VAR_56 + 1);
   FUNC_86(VAR_54, "._", 2);
  } else {
   VAR_55 += 1;
   FUNC_86(VAR_55 + 2, VAR_55, FUNC_91(VAR_55) + 1);
   FUNC_86(VAR_55, "._", 2);
  }
  FUNC_15(VAR_57, VAR_54);
  FUNC_78(VAR_54);

  FUNC_44(VAR_57, VAR_39);
  FUNC_36(VAR_57, 129);
  FUNC_43(VAR_57,
      FUNC_31(VAR_21));
  FUNC_41(VAR_57,
      FUNC_26(VAR_21),
      FUNC_27(VAR_21));
  FUNC_37(VAR_57,
      FUNC_22(VAR_21));
  FUNC_38(VAR_57,
      FUNC_23(VAR_21));
  FUNC_46(VAR_57,
      FUNC_53(VAR_21));
  FUNC_47(VAR_57,
      FUNC_54(VAR_21));


  VAR_26 = FUNC_94(VAR_20, VAR_57);
  FUNC_21(VAR_57);
  if (VAR_26 < VAR_15)
   return (VAR_26);
  if (VAR_26 < VAR_27)
   VAR_27 = VAR_26;
  VAR_26 = (int)FUNC_68(VAR_20, VAR_38,
      VAR_39);
  if (VAR_26 < VAR_15)
   return (VAR_26);
  if (VAR_26 < VAR_27)
   VAR_27 = VAR_26;
  VAR_26 = FUNC_69(VAR_20);
  if (VAR_26 < VAR_15)
   return (VAR_26);
  if (VAR_26 < VAR_27)
   VAR_27 = VAR_26;
 }
 VAR_22 = FUNC_14(VAR_21);

 if (VAR_22 == ((void*)0)) {
  FUNC_56(&VAR_20->archive, VAR_16,
      "Can't allocate pax data");
  return(VAR_11);
 }
 FUNC_61(&(VAR_32->pax_header));
 FUNC_61(&(VAR_32->sparse_map));
 VAR_30 = 0;
 FUNC_88(VAR_32);

 if (VAR_33 == ((void*)0) &&
     FUNC_20(VAR_22) == 129)
  VAR_29 = FUNC_51(VAR_22);
 else
  VAR_29 = 0;
 if (VAR_29) {
  int64_t VAR_58, VAR_59, VAR_60 = 0;

  while (FUNC_50(
      VAR_22, &VAR_58, &VAR_59) == VAR_14)
   VAR_60 = VAR_58 + VAR_59;




  if (VAR_60 < FUNC_48(VAR_22))
   FUNC_49(VAR_22,
       FUNC_48(VAR_22), 0);
  VAR_29 = FUNC_51(VAR_22);
 }






 VAR_26 = FUNC_81(VAR_20, VAR_22, &VAR_34, &VAR_42, VAR_40);
 if (VAR_26 == VAR_11)
  return (VAR_26);
 else if (VAR_26 != VAR_14) {
  VAR_26 = FUNC_81(VAR_20, VAR_22, &VAR_34,
      &VAR_42, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  FUNC_56(&VAR_20->archive, VAR_8,
      "Can't translate pathname '%s' to %s", VAR_34,
      FUNC_59(VAR_40));
  VAR_27 = VAR_15;
  VAR_40 = ((void*)0);
 }
 VAR_26 = FUNC_83(VAR_20, VAR_22, &VAR_36, &VAR_44, VAR_40);
 if (VAR_26 == VAR_11)
  return (VAR_26);
 else if (VAR_26 != VAR_14) {
  VAR_26 = FUNC_83(VAR_20, VAR_22, &VAR_36, &VAR_44, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  FUNC_56(&VAR_20->archive, VAR_8,
      "Can't translate uname '%s' to %s", VAR_36,
      FUNC_59(VAR_40));
  VAR_27 = VAR_15;
  VAR_40 = ((void*)0);
 }
 VAR_26 = FUNC_79(VAR_20, VAR_22, &VAR_37, &VAR_45, VAR_40);
 if (VAR_26 == VAR_11)
  return (VAR_26);
 else if (VAR_26 != VAR_14) {
  VAR_26 = FUNC_79(VAR_20, VAR_22, &VAR_37, &VAR_45, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  FUNC_56(&VAR_20->archive, VAR_8,
      "Can't translate gname '%s' to %s", VAR_37,
      FUNC_59(VAR_40));
  VAR_27 = VAR_15;
  VAR_40 = ((void*)0);
 }
 VAR_35 = VAR_33;
 VAR_43 = VAR_41;
 if (VAR_35 == ((void*)0)) {
  VAR_26 = FUNC_82(VAR_20, VAR_22, &VAR_35,
      &VAR_43, VAR_40);
  if (VAR_26 == VAR_11)
   return (VAR_26);
  else if (VAR_26 != VAR_14) {
   VAR_26 = FUNC_82(VAR_20, VAR_22, &VAR_35,
       &VAR_43, ((void*)0));
   if (VAR_26 == VAR_11)
    return (VAR_26);
   FUNC_56(&VAR_20->archive,
       VAR_8,
       "Can't translate linkname '%s' to %s", VAR_35,
       FUNC_59(VAR_40));
   VAR_27 = VAR_15;
   VAR_40 = ((void*)0);
  }
 }



 if (VAR_40 == ((void*)0) && !VAR_32->opt_binary) {
  if (VAR_33 != ((void*)0)) {
   VAR_26 = FUNC_80(VAR_20, VAR_22, &VAR_33,
       &VAR_41, ((void*)0));
   if (VAR_26 == VAR_11)
    return (VAR_26);
   VAR_35 = VAR_33;
   VAR_43 = VAR_41;
  }
  VAR_26 = FUNC_81(VAR_20, VAR_22, &VAR_34,
      &VAR_42, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  VAR_26 = FUNC_83(VAR_20, VAR_22, &VAR_36, &VAR_44, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
  VAR_26 = FUNC_79(VAR_20, VAR_22, &VAR_37, &VAR_45, ((void*)0));
  if (VAR_26 == VAR_11)
   return (VAR_26);
 }


 if (VAR_40 == ((void*)0))
  FUNC_5(&(VAR_32->pax_header), "hdrcharset", "BINARY");







 if (FUNC_84(VAR_34)) {

  FUNC_5(&(VAR_32->pax_header), "path", VAR_34);
  FUNC_42(VAR_22,
      FUNC_77(VAR_48,
   VAR_34, VAR_42, ((void*)0)));
  VAR_25 = 1;
 } else {





  if (VAR_42 <= 100) {

  } else {


   VAR_24 = FUNC_89(VAR_34 + VAR_42 - 100 - 1, '/');

   if (VAR_24 == VAR_34)
    VAR_24 = FUNC_89(VAR_24 + 1, '/');







   if (VAR_24 == ((void*)0)
       || VAR_24[1] == '\0'
       || VAR_24 - VAR_34 > 155)
   {
    FUNC_5(&(VAR_32->pax_header), "path", VAR_34);
    FUNC_42(VAR_22,
        FUNC_77(VAR_48,
     VAR_34, VAR_42, ((void*)0)));
    VAR_25 = 1;
   }
  }
 }

 if (VAR_35 != ((void*)0)) {


  if (VAR_43 > 100 || FUNC_84(VAR_35)) {
   FUNC_5(&(VAR_32->pax_header), "linkpath", VAR_35);
   if (VAR_43 > 100) {
    if (VAR_33 != ((void*)0))
     FUNC_39(VAR_22,
         "././@LongHardLink");
    else
     FUNC_45(VAR_22,
         "././@LongSymLink");
   }
   VAR_25 = 1;
  }
 }


 FUNC_64(&VAR_51);
 FUNC_58(&VAR_51, FUNC_29(VAR_22));


 if (FUNC_48(VAR_22) >= (((int64_t)1) << 33)) {
  FUNC_6(&(VAR_32->pax_header), "size",
      FUNC_48(VAR_22));
  VAR_25 = 1;
 }


 if ((unsigned int)FUNC_22(VAR_22) >= (1 << 18)) {
  FUNC_6(&(VAR_32->pax_header), "gid",
      FUNC_22(VAR_22));
  VAR_25 = 1;
 }



 if (VAR_37 != ((void*)0)) {
  if (VAR_45 > 31 || FUNC_84(VAR_37)) {
   FUNC_5(&(VAR_32->pax_header), "gname", VAR_37);
   VAR_25 = 1;
  }
 }


 if ((unsigned int)FUNC_53(VAR_22) >= (1 << 18)) {
  FUNC_6(&(VAR_32->pax_header), "uid",
      FUNC_53(VAR_22));
  VAR_25 = 1;
 }


 if (VAR_36 != ((void*)0)) {
  if (VAR_44 > 31 || FUNC_84(VAR_36)) {
   FUNC_5(&(VAR_32->pax_header), "uname", VAR_36);
   VAR_25 = 1;
  }
 }
 if (FUNC_20(VAR_22) == 134
     || FUNC_20(VAR_22) == 133) {




  int VAR_61, VAR_62;
  VAR_61 = FUNC_32(VAR_22);
  VAR_62 = FUNC_33(VAR_22);
  if (VAR_61 >= (1 << 18)) {
   FUNC_6(&(VAR_32->pax_header), "SCHILY.devmajor",
       VAR_61);
   VAR_25 = 1;
  }





  if (VAR_62 >= (1 << 18)) {
   FUNC_6(&(VAR_32->pax_header), "SCHILY.devminor",
       VAR_62);



   VAR_25 = 1;
  }
 }
 if (!VAR_25 &&
     ((FUNC_26(VAR_22) < 0)
  || (FUNC_26(VAR_22) >= 0x7fffffff)))
  VAR_25 = 1;


 VAR_23 = FUNC_19(VAR_22);
 if (!VAR_25 && VAR_23 != ((void*)0) && *VAR_23 != '\0')
  VAR_25 = 1;


 if (!VAR_25 && FUNC_55(VAR_21) > 0)
  VAR_25 = 1;


 if (!VAR_25 && VAR_29 > 0)
  VAR_25 = 1;

 VAR_28 = FUNC_8(VAR_21);


 if (!VAR_25 && VAR_28 != 0)
  VAR_25 = 1;


 if (!VAR_25 && FUNC_52(VAR_22) > 0)
  VAR_25 = 1;







 if (VAR_20->archive.archive_format != VAR_13) {
  if (FUNC_17(VAR_22) != 0 ||
      FUNC_18(VAR_22) != 0)
   FUNC_7(&(VAR_32->pax_header), "ctime",
       FUNC_17(VAR_22),
       FUNC_18(VAR_22));

  if (FUNC_9(VAR_22) != 0 ||
      FUNC_10(VAR_22) != 0)
   FUNC_7(&(VAR_32->pax_header), "atime",
       FUNC_9(VAR_22),
       FUNC_10(VAR_22));


  if (FUNC_12(VAR_22) &&
      FUNC_11(VAR_22)
      < FUNC_26(VAR_22))
   FUNC_7(&(VAR_32->pax_header),
       "LIBARCHIVE.creationtime",
       FUNC_11(VAR_22),
       FUNC_13(VAR_22));
 }
 if (VAR_20->archive.archive_format != VAR_13 ||
     VAR_25) {
  if (FUNC_26(VAR_22) < 0 ||
      FUNC_26(VAR_22) >= 0x7fffffff ||
      FUNC_27(VAR_22) != 0)
   FUNC_7(&(VAR_32->pax_header), "mtime",
       FUNC_26(VAR_22),
       FUNC_27(VAR_22));


  VAR_23 = FUNC_19(VAR_22);
  if (VAR_23 != ((void*)0) && *VAR_23 != '\0')
   FUNC_5(&(VAR_32->pax_header), "SCHILY.fflags", VAR_23);


  if ((VAR_28 & VAR_7) != 0) {
   VAR_27 = FUNC_4(VAR_20, VAR_21, VAR_32,
       VAR_3 |
       VAR_4 |
       VAR_2);
   if (VAR_27 == VAR_11)
    return (VAR_11);
  }
  if (VAR_28 & VAR_5) {
   VAR_27 = FUNC_4(VAR_20, VAR_21, VAR_32,
       VAR_5 |
       VAR_3 |
       VAR_4);
   if (VAR_27 == VAR_11)
    return (VAR_11);
  }
  if (VAR_28 & VAR_6) {
   VAR_27 = FUNC_4(VAR_20, VAR_21, VAR_32,
       VAR_6 |
       VAR_3 |
       VAR_4);
   if (VAR_27 == VAR_11)
    return (VAR_11);
  }


  if (VAR_29 > 0) {
   int64_t VAR_63, VAR_64;

   FUNC_6(&(VAR_32->pax_header),
       "GNU.sparse.major", 1);
   FUNC_6(&(VAR_32->pax_header),
       "GNU.sparse.minor", 0);




   FUNC_5(&(VAR_32->pax_header),
       "GNU.sparse.name", VAR_34);
   FUNC_6(&(VAR_32->pax_header),
       "GNU.sparse.realsize",
       FUNC_48(VAR_22));




   FUNC_42(VAR_22,
       FUNC_75(VAR_50,
           VAR_51.s));





   FUNC_65(&(VAR_32->sparse_map), "%d\n",
       VAR_29);
   while (FUNC_50(VAR_22,
       &VAR_63, &VAR_64) == VAR_14) {
    FUNC_65(&(VAR_32->sparse_map),
        "%jd\n%jd\n",
        (intmax_t)VAR_63,
        (intmax_t)VAR_64);
    VAR_30 += VAR_64;
    if (FUNC_87(VAR_32, VAR_63, VAR_64)
        != VAR_14) {
     FUNC_56(&VAR_20->archive,
         VAR_16,
         "Can't allocate memory");
     FUNC_21(VAR_22);
     FUNC_63(&VAR_51);
     return (VAR_11);
    }
   }
  }


  if (FUNC_70(VAR_20, VAR_32, VAR_21)
      == VAR_11) {
   FUNC_21(VAR_22);
   FUNC_63(&VAR_51);
   return (VAR_11);
  }


  if (FUNC_52(VAR_22) ==
      VAR_1) {
   FUNC_5(&(VAR_32->pax_header),
       "LIBARCHIVE.symlinktype", "file");
  } else if (FUNC_52(VAR_22) ==
      VAR_0) {
   FUNC_5(&(VAR_32->pax_header),
       "LIBARCHIVE.symlinktype", "dir");
  }
 }


 if (FUNC_20(VAR_22) != 129)
  FUNC_44(VAR_22, 0);





 if (VAR_20->archive.archive_format != VAR_12 &&
     VAR_33 != ((void*)0))
  FUNC_44(VAR_22, 0);
 if (VAR_33 != ((void*)0))
  FUNC_44(VAR_22, 0);


 VAR_31 = FUNC_48(VAR_22);





 if (FUNC_66(&(VAR_32->sparse_map))) {
  size_t VAR_65 = FUNC_66(&(VAR_32->sparse_map));
  VAR_32->sparse_map_padding = 0x1ff & (-(ssize_t)VAR_65);
  FUNC_44(VAR_22,
      VAR_65 + VAR_32->sparse_map_padding + VAR_30);
 }
 if (FUNC_0(VAR_20, VAR_47, VAR_22, -1, 0,
     ((void*)0)) == VAR_11)
  return (VAR_11);


 if (FUNC_66(&(VAR_32->pax_header)) > 0) {
  struct archive_entry *VAR_66;
  time_t VAR_67;
  int64_t VAR_68, VAR_69;
  int VAR_70;

  VAR_66 = FUNC_28(&VAR_20->archive);
  VAR_23 = VAR_51.s;
  FUNC_42(VAR_66,
      FUNC_76(VAR_49, VAR_23));
  FUNC_44(VAR_66,
      FUNC_66(&(VAR_32->pax_header)));

  VAR_68 = FUNC_53(VAR_22);
  if (VAR_68 >= 1 << 18)
   VAR_68 = (1 << 18) - 1;
  FUNC_46(VAR_66, VAR_68);
  VAR_69 = FUNC_22(VAR_22);
  if (VAR_69 >= 1 << 18)
   VAR_69 = (1 << 18) - 1;
  FUNC_37(VAR_66, VAR_69);

  VAR_70 = FUNC_25(VAR_22);
  FUNC_40(VAR_66, VAR_70);


  FUNC_47(VAR_66,
      FUNC_54(VAR_22));
  FUNC_38(VAR_66,
      FUNC_23(VAR_22));


  VAR_67 = FUNC_26(VAR_22);
  if (VAR_67 < 0) { VAR_67 = 0; }
  if (VAR_67 >= 0x7fffffff) { VAR_67 = 0x7fffffff; }
  FUNC_41(VAR_66, VAR_67, 0);


  FUNC_34(VAR_66, 0, 0);


  FUNC_35(VAR_66, 0, 0);

  VAR_26 = FUNC_0(VAR_20, VAR_46,
      VAR_66, 'x', 1, ((void*)0));

  FUNC_21(VAR_66);


  if (VAR_26 < VAR_15) {
   FUNC_56(&VAR_20->archive, VAR_9,
       "archive_write_pax_header: "
       "'x' header failed?!  This can't happen.\n");
   return (VAR_11);
  } else if (VAR_26 < VAR_27)
   VAR_27 = VAR_26;
  VAR_26 = FUNC_2(VAR_20, VAR_46, 512);
  if (VAR_26 != VAR_14) {
   FUNC_88(VAR_32);
   VAR_32->entry_bytes_remaining = 0;
   VAR_32->entry_padding = 0;
   return (VAR_11);
  }

  VAR_32->entry_bytes_remaining = FUNC_66(&(VAR_32->pax_header));
  VAR_32->entry_padding =
      0x1ff & (-(int64_t)VAR_32->entry_bytes_remaining);

  VAR_26 = FUNC_2(VAR_20, VAR_32->pax_header.s,
      FUNC_66(&(VAR_32->pax_header)));
  if (VAR_26 != VAR_14) {

   return (VAR_11);
  }

  VAR_26 = FUNC_1(VAR_20, (size_t)VAR_32->entry_padding);
  if (VAR_26 != VAR_14) {

   return (VAR_11);
  }
  VAR_32->entry_bytes_remaining = VAR_32->entry_padding = 0;
 }


 VAR_26 = FUNC_2(VAR_20, VAR_47, 512);
 if (VAR_26 != VAR_14)
  return (VAR_26);






 FUNC_44(VAR_21, VAR_31);
 if (VAR_32->sparse_list == ((void*)0) && VAR_31 > 0) {


  FUNC_87(VAR_32, 0, VAR_31);
  VAR_30 = VAR_31;
 }
 VAR_32->entry_padding = 0x1ff & (-(int64_t)VAR_30);
 FUNC_21(VAR_22);
 FUNC_63(&VAR_51);

 return (VAR_27);
}
