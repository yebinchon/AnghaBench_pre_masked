
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; } ;
struct archive_string_conv {int dummy; } ;
struct archive_entry {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
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
 size_t VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 size_t VAR_40 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_3 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_13 (int *,scalar_t__,char*,...) ;
 int FUNC_14 (struct archive_string_conv*) ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_15 (int,char*,int ,int ,int) ;
 int FUNC_16 (unsigned int,char*,int) ;
 int FUNC_17 (char*,char const*,size_t) ;
 char* FUNC_18 (char const*,char) ;
 size_t FUNC_19 (char const*) ;
 char const VAR_42 ;

int
FUNC_20(struct archive_write *VAR_43, char VAR_44[512],
    struct archive_entry *VAR_45, int VAR_46, int VAR_47,
    struct archive_string_conv *VAR_48)
{
 unsigned int VAR_49;
 int VAR_50, VAR_51, VAR_52;
 size_t VAR_53;
 const char *VAR_54, *VAR_55;
 int VAR_56;

 VAR_52 = 0;
 VAR_56 = -1;





 FUNC_17(VAR_44, &VAR_42, 512);






 VAR_51 = FUNC_6(VAR_45, &VAR_55, &VAR_53, VAR_48);
 if (VAR_51 != 0) {
  if (VAR_41 == VAR_6) {
   FUNC_13(&VAR_43->archive, VAR_6,
       "Can't allocate memory for Pathname");
   return (VAR_3);
  }
  FUNC_13(&VAR_43->archive, VAR_0,
      "Can't translate pathname '%s' to %s",
      VAR_55, FUNC_14(VAR_48));
  VAR_52 = VAR_4;
 }
 if (VAR_53 <= VAR_23)
  FUNC_17(VAR_44 + VAR_22, VAR_55, VAR_53);
 else {

  VAR_54 = FUNC_18(VAR_55 + VAR_53 - VAR_23 - 1, '/');





  if (VAR_54 == VAR_55)
   VAR_54 = FUNC_18(VAR_54 + 1, '/');

  if (!VAR_54) {

   FUNC_13(&VAR_43->archive, VAR_5,
       "Pathname too long");
   VAR_52 = VAR_2;
  } else if (VAR_54[1] == '\0') {






   FUNC_13(&VAR_43->archive, VAR_5,
       "Pathname too long");
   VAR_52 = VAR_2;
  } else if (VAR_54 > VAR_55 + VAR_25) {

   FUNC_13(&VAR_43->archive, VAR_5,
       "Pathname too long");
   VAR_52 = VAR_2;
  } else {

   FUNC_17(VAR_44 + VAR_24, VAR_55, VAR_54 - VAR_55);
   FUNC_17(VAR_44 + VAR_22, VAR_54 + 1,
       VAR_55 + VAR_53 - VAR_54 - 1);
  }
 }

 VAR_51 = FUNC_3(VAR_45, &VAR_54, &VAR_53, VAR_48);
 if (VAR_51 != 0) {
  if (VAR_41 == VAR_6) {
   FUNC_13(&VAR_43->archive, VAR_6,
       "Can't allocate memory for Linkname");
   return (VAR_3);
  }
  FUNC_13(&VAR_43->archive,
      VAR_0,
      "Can't translate linkname '%s' to %s",
      VAR_54, FUNC_14(VAR_48));
  VAR_52 = VAR_4;
 }
 if (VAR_53 > 0)
  VAR_56 = '1';
 else {
  VAR_51 = FUNC_10(VAR_45, &VAR_54, &VAR_53, VAR_48);
  if (VAR_51 != 0) {
   if (VAR_41 == VAR_6) {
    FUNC_13(&VAR_43->archive, VAR_6,
        "Can't allocate memory for Linkname");
    return (VAR_3);
   }
   FUNC_13(&VAR_43->archive,
       VAR_0,
       "Can't translate linkname '%s' to %s",
       VAR_54, FUNC_14(VAR_48));
   VAR_52 = VAR_4;
  }
 }
 if (VAR_53 > 0) {
  if (VAR_53 > VAR_15) {
   FUNC_13(&VAR_43->archive, VAR_5,
       "Link contents too long");
   VAR_52 = VAR_2;
   VAR_53 = VAR_15;
  }
  FUNC_17(VAR_44 + VAR_14, VAR_54, VAR_53);
 }

 VAR_51 = FUNC_12(VAR_45, &VAR_54, &VAR_53, VAR_48);
 if (VAR_51 != 0) {
  if (VAR_41 == VAR_6) {
   FUNC_13(&VAR_43->archive, VAR_6,
       "Can't allocate memory for Uname");
   return (VAR_3);
  }
  FUNC_13(&VAR_43->archive,
      VAR_0,
      "Can't translate uname '%s' to %s",
      VAR_54, FUNC_14(VAR_48));
  VAR_52 = VAR_4;
 }
 if (VAR_53 > 0) {
  if (VAR_53 > VAR_40) {
   FUNC_13(&VAR_43->archive, VAR_1,
       "Username too long");
   VAR_52 = VAR_2;
   VAR_53 = VAR_40;
  }
  FUNC_17(VAR_44 + VAR_39, VAR_54, VAR_53);
 }

 VAR_51 = FUNC_2(VAR_45, &VAR_54, &VAR_53, VAR_48);
 if (VAR_51 != 0) {
  if (VAR_41 == VAR_6) {
   FUNC_13(&VAR_43->archive, VAR_6,
       "Can't allocate memory for Gname");
   return (VAR_3);
  }
  FUNC_13(&VAR_43->archive,
      VAR_0,
      "Can't translate gname '%s' to %s",
      VAR_54, FUNC_14(VAR_48));
  VAR_52 = VAR_4;
 }
 if (VAR_53 > 0) {
  if (FUNC_19(VAR_54) > VAR_13) {
   FUNC_13(&VAR_43->archive, VAR_1,
       "Group name too long");
   VAR_52 = VAR_2;
   VAR_53 = VAR_13;
  }
  FUNC_17(VAR_44 + VAR_12, VAR_54, VAR_53);
 }

 if (FUNC_15(FUNC_4(VAR_45) & 07777,
     VAR_44 + VAR_17, VAR_18, VAR_16, VAR_47)) {
  FUNC_13(&VAR_43->archive, VAR_7,
      "Numeric mode too large");
  VAR_52 = VAR_2;
 }

 if (FUNC_15(FUNC_11(VAR_45),
     VAR_44 + VAR_37, VAR_38, VAR_36, VAR_47)) {
  FUNC_13(&VAR_43->archive, VAR_7,
      "Numeric user ID too large");
  VAR_52 = VAR_2;
 }

 if (FUNC_15(FUNC_1(VAR_45),
     VAR_44 + VAR_10, VAR_11, VAR_9, VAR_47)) {
  FUNC_13(&VAR_43->archive, VAR_7,
      "Numeric group ID too large");
  VAR_52 = VAR_2;
 }

 if (FUNC_15(FUNC_9(VAR_45),
     VAR_44 + VAR_33, VAR_34, VAR_32, VAR_47)) {
  FUNC_13(&VAR_43->archive, VAR_7,
      "File size out of range");
  VAR_52 = VAR_2;
 }

 if (FUNC_15(FUNC_5(VAR_45),
     VAR_44 + VAR_20, VAR_21, VAR_19, VAR_47)) {
  FUNC_13(&VAR_43->archive, VAR_7,
      "File modification time too large");
  VAR_52 = VAR_2;
 }

 if (FUNC_0(VAR_45) == 134
     || FUNC_0(VAR_45) == 133) {
  if (FUNC_15(FUNC_7(VAR_45),
      VAR_44 + VAR_27, VAR_28,
      VAR_26, VAR_47)) {
   FUNC_13(&VAR_43->archive, VAR_7,
       "Major device number too large");
   VAR_52 = VAR_2;
  }

  if (FUNC_15(FUNC_8(VAR_45),
      VAR_44 + VAR_30, VAR_31,
      VAR_29, VAR_47)) {
   FUNC_13(&VAR_43->archive, VAR_7,
       "Minor device number too large");
   VAR_52 = VAR_2;
  }
 }

 if (VAR_46 >= 0) {
  VAR_44[VAR_35] = VAR_46;
 } else if (VAR_56 >= 0) {
  VAR_44[VAR_35] = VAR_56;
 } else {
  switch (FUNC_0(VAR_45)) {
  case 129: VAR_44[VAR_35] = '0' ; break;
  case 130: VAR_44[VAR_35] = '2' ; break;
  case 133: VAR_44[VAR_35] = '3' ; break;
  case 134: VAR_44[VAR_35] = '4' ; break;
  case 132: VAR_44[VAR_35] = '5' ; break;
  case 131: VAR_44[VAR_35] = '6' ; break;
  case 128:
   FUNC_13(&VAR_43->archive,
       VAR_0,
       "tar format cannot archive socket");
   return (VAR_2);
  default:
   FUNC_13(&VAR_43->archive,
       VAR_0,
       "tar format cannot archive this (mode=0%lo)",
       (unsigned long)FUNC_4(VAR_45));
   VAR_52 = VAR_2;
  }
 }

 VAR_49 = 0;
 for (VAR_50 = 0; VAR_50 < 512; VAR_50++)
  VAR_49 += 255 & (unsigned int)VAR_44[VAR_50];
 VAR_44[VAR_8 + 6] = '\0';

 FUNC_16(VAR_49, VAR_44 + VAR_8, 6);
 return (VAR_52);
}
