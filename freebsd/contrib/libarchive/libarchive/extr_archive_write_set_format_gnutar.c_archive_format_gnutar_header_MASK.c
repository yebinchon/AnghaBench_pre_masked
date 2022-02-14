
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnutar {char* pathname; size_t pathname_length; size_t linkname_length; char const* linkname; char* uname; size_t uname_length; char* gname; size_t gname_length; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct archive_entry {int dummy; } ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 char* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 unsigned int FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 unsigned int FUNC_6 (struct archive_entry*) ;
 unsigned int FUNC_7 (struct archive_entry*) ;
 scalar_t__ FUNC_8 (struct archive_entry*) ;
 scalar_t__ FUNC_9 (struct archive_entry*) ;
 char* FUNC_10 (struct archive_entry*) ;
 int FUNC_11 (int *,int ,char*,...) ;
 scalar_t__ FUNC_12 (scalar_t__,char*,int ,int ) ;
 scalar_t__ FUNC_13 (unsigned int,char*,int) ;
 int FUNC_14 (char*,char const*,size_t) ;
 size_t FUNC_15 (char const*) ;
 char const VAR_31 ;

__attribute__((used)) static int
FUNC_16(struct archive_write *VAR_32, char VAR_33[512],
    struct archive_entry *VAR_34, int VAR_35)
{
 unsigned int VAR_36;
 int VAR_37, VAR_38;
 size_t VAR_39;
 const char *VAR_40;
 struct gnutar *VAR_41;

 VAR_41 = (struct gnutar *)VAR_32->format_data;

 VAR_38 = 0;





 FUNC_14(VAR_33, &VAR_31, 512);







 if (VAR_35 == 'K' || VAR_35 == 'L') {
  VAR_40 = FUNC_5(VAR_34);
  VAR_39 = FUNC_15(VAR_40);
 } else {
  VAR_40 = VAR_41->pathname;
  VAR_39 = VAR_41->pathname_length;
 }
 if (VAR_39 > VAR_17)
  VAR_39 = VAR_17;
 FUNC_14(VAR_33 + VAR_16, VAR_40, VAR_39);

 if ((VAR_39 = VAR_41->linkname_length) > 0) {
  if (VAR_39 > VAR_11)
   VAR_39 = VAR_11;
  FUNC_14(VAR_33 + VAR_10, VAR_41->linkname,
      VAR_39);
 }


 if (VAR_35 == 'K' || VAR_35 == 'L') {
  VAR_40 = FUNC_10(VAR_34);
  VAR_39 = FUNC_15(VAR_40);
 } else {
  VAR_40 = VAR_41->uname;
  VAR_39 = VAR_41->uname_length;
 }
 if (VAR_39 > 0) {
  if (VAR_39 > VAR_30)
   VAR_39 = VAR_30;
  FUNC_14(VAR_33 + VAR_29, VAR_40, VAR_39);
 }


 if (VAR_35 == 'K' || VAR_35 == 'L') {
  VAR_40 = FUNC_2(VAR_34);
  VAR_39 = FUNC_15(VAR_40);
 } else {
  VAR_40 = VAR_41->gname;
  VAR_39 = VAR_41->gname_length;
 }
 if (VAR_39 > 0) {
  if (FUNC_15(VAR_40) > VAR_9)
   VAR_39 = VAR_9;
  FUNC_14(VAR_33 + VAR_8, VAR_40, VAR_39);
 }


 FUNC_13(FUNC_3(VAR_34) & 07777,
     VAR_33 + VAR_12, VAR_13);


 if (FUNC_12(FUNC_9(VAR_34), VAR_33 + VAR_27,
  VAR_28, VAR_26)) {
  FUNC_11(&VAR_32->archive, VAR_3,
      "Numeric user ID %jd too large",
      (intmax_t)FUNC_9(VAR_34));
  VAR_38 = VAR_2;
 }


 if (FUNC_12(FUNC_1(VAR_34), VAR_33 + VAR_6,
  VAR_7, VAR_5)) {
  FUNC_11(&VAR_32->archive, VAR_3,
      "Numeric group ID %jd too large",
      (intmax_t)FUNC_1(VAR_34));
  VAR_38 = VAR_2;
 }


 if (FUNC_12(FUNC_8(VAR_34), VAR_33 + VAR_23,
  VAR_24, VAR_22)) {
  FUNC_11(&VAR_32->archive, VAR_3,
      "File size out of range");
  VAR_38 = VAR_2;
 }


 FUNC_13(FUNC_4(VAR_34),
     VAR_33 + VAR_14, VAR_15);

 if (FUNC_0(VAR_34) == VAR_0
     || FUNC_0(VAR_34) == VAR_1) {
  if (FUNC_13(FUNC_6(VAR_34),
      VAR_33 + VAR_18,
   VAR_19)) {
   FUNC_11(&VAR_32->archive, VAR_3,
       "Major device number too large");
   VAR_38 = VAR_2;
  }

  if (FUNC_13(FUNC_7(VAR_34),
      VAR_33 + VAR_20,
   VAR_21)) {
   FUNC_11(&VAR_32->archive, VAR_3,
       "Minor device number too large");
   VAR_38 = VAR_2;
  }
 }

 VAR_33[VAR_25] = VAR_35;

 VAR_36 = 0;
 for (VAR_37 = 0; VAR_37 < 512; VAR_37++)
  VAR_36 += 255 & (unsigned int)VAR_33[VAR_37];
 VAR_33[VAR_4 + 6] = '\0';

 FUNC_13(VAR_36, VAR_33 + VAR_4, 6);
 return (VAR_38);
}
