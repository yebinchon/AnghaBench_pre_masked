
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (int *,scalar_t__,char*,...) ;
 int FUNC_10 (struct archive_string_conv*) ;
 scalar_t__ VAR_28 ;
 scalar_t__ FUNC_11 (int,char*,int ,int ,int) ;
 int FUNC_12 (unsigned int,char*,int) ;
 int FUNC_13 (char*,char const*,size_t) ;
 char const VAR_29 ;

__attribute__((used)) static int
FUNC_14(struct archive_write *VAR_30, char VAR_31[512],
    struct archive_entry *VAR_32, int VAR_33,
    struct archive_string_conv *VAR_34)
{
 unsigned int VAR_35;
 int VAR_36, VAR_37, VAR_38;
 size_t VAR_39;
 const char *VAR_40, *VAR_41;
 int VAR_42;

 VAR_38 = 0;
 VAR_42 = -1;





 FUNC_13(VAR_31, &VAR_29, 512);






 VAR_37 = FUNC_5(VAR_32, &VAR_41, &VAR_39, VAR_34);
 if (VAR_37 != 0) {
  if (VAR_28 == VAR_5) {
   FUNC_9(&VAR_30->archive, VAR_5,
       "Can't allocate memory for Pathname");
   return (VAR_2);
  }
  FUNC_9(&VAR_30->archive, VAR_0,
      "Can't translate pathname '%s' to %s",
      VAR_41, FUNC_10(VAR_34));
  VAR_38 = VAR_3;
 }
 if (VAR_33 && VAR_39 < VAR_20)
  FUNC_13(VAR_31 + VAR_19, VAR_41, VAR_39);
 else if (!VAR_33 && VAR_39 <= VAR_20)
  FUNC_13(VAR_31 + VAR_19, VAR_41, VAR_39);
 else {

  FUNC_9(&VAR_30->archive, VAR_4,
      "Pathname too long");
  VAR_38 = VAR_1;
 }

 VAR_37 = FUNC_2(VAR_32, &VAR_40, &VAR_39, VAR_34);
 if (VAR_37 != 0) {
  if (VAR_28 == VAR_5) {
   FUNC_9(&VAR_30->archive, VAR_5,
       "Can't allocate memory for Linkname");
   return (VAR_2);
  }
  FUNC_9(&VAR_30->archive,
      VAR_0,
      "Can't translate linkname '%s' to %s",
      VAR_40, FUNC_10(VAR_34));
  VAR_38 = VAR_3;
 }
 if (VAR_39 > 0)
  VAR_42 = '1';
 else {
  VAR_37 = FUNC_7(VAR_32, &VAR_40, &VAR_39, VAR_34);
  if (VAR_37 != 0) {
   if (VAR_28 == VAR_5) {
    FUNC_9(&VAR_30->archive, VAR_5,
        "Can't allocate memory for Linkname");
    return (VAR_2);
   }
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "Can't translate linkname '%s' to %s",
       VAR_40, FUNC_10(VAR_34));
   VAR_38 = VAR_3;
  }
 }
 if (VAR_39 > 0) {
  if (VAR_39 >= VAR_12) {
   FUNC_9(&VAR_30->archive, VAR_4,
       "Link contents too long");
   VAR_38 = VAR_1;
   VAR_39 = VAR_12;
  }
  FUNC_13(VAR_31 + VAR_11, VAR_40, VAR_39);
 }

 if (FUNC_11(FUNC_3(VAR_32) & 07777,
     VAR_31 + VAR_14, VAR_15,
     VAR_13, VAR_33)) {
  FUNC_9(&VAR_30->archive, VAR_6,
      "Numeric mode too large");
  VAR_38 = VAR_1;
 }

 if (FUNC_11(FUNC_8(VAR_32),
     VAR_31 + VAR_26, VAR_27, VAR_25, VAR_33)) {
  FUNC_9(&VAR_30->archive, VAR_6,
      "Numeric user ID too large");
  VAR_38 = VAR_1;
 }

 if (FUNC_11(FUNC_1(VAR_32),
     VAR_31 + VAR_9, VAR_10, VAR_8, VAR_33)) {
  FUNC_9(&VAR_30->archive, VAR_6,
      "Numeric group ID too large");
  VAR_38 = VAR_1;
 }

 if (FUNC_11(FUNC_6(VAR_32),
     VAR_31 + VAR_22, VAR_23,
     VAR_21, VAR_33)) {
  FUNC_9(&VAR_30->archive, VAR_6,
      "File size out of range");
  VAR_38 = VAR_1;
 }

 if (FUNC_11(FUNC_4(VAR_32),
     VAR_31 + VAR_17, VAR_18,
     VAR_16, VAR_33)) {
  FUNC_9(&VAR_30->archive, VAR_6,
      "File modification time too large");
  VAR_38 = VAR_1;
 }

 if (VAR_42 >= 0) {
  VAR_31[VAR_24] = VAR_42;
 } else {
  switch (FUNC_0(VAR_32)) {
  case 129: case 132:
   break;
  case 130:
   VAR_31[VAR_24] = '2';
   break;
  case 133:
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "tar format cannot archive character device");
   return (VAR_1);
  case 134:
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "tar format cannot archive block device");
   return (VAR_1);
  case 131:
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "tar format cannot archive fifo");
   return (VAR_1);
  case 128:
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "tar format cannot archive socket");
   return (VAR_1);
  default:
   FUNC_9(&VAR_30->archive,
       VAR_0,
       "tar format cannot archive this (mode=0%lo)",
       (unsigned long)FUNC_3(VAR_32));
   VAR_38 = VAR_1;
  }
 }

 VAR_35 = 0;
 for (VAR_36 = 0; VAR_36 < 512; VAR_36++)
  VAR_35 += 255 & (unsigned int)VAR_31[VAR_36];
 FUNC_12(VAR_35, VAR_31 + VAR_7, 6);

 VAR_31[VAR_7 + 6] = '\0';
 return (VAR_38);
}
