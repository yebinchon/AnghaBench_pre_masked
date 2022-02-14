
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_string_conv {int dummy; } ;
struct archive_string {char const* s; } ;
struct archive_mstring {int dummy; } ;
struct archive {int dummy; } ;
typedef int nfd ;
typedef int nfc ;
typedef int mstr ;
typedef int buff ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_mstring*) ;
 int FUNC_1 (struct archive_mstring*,char*,int,struct archive_string_conv*) ;
 int FUNC_2 (struct archive_mstring*,int *) ;
 int FUNC_3 (struct archive_mstring*,char const**,size_t*,struct archive_string_conv*) ;
 int FUNC_4 (struct archive*,struct archive_mstring*,int const**) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive_string*,char*,struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_8 (struct archive*,char*,int ) ;
 int FUNC_9 (struct archive_string_conv*,int) ;
 struct archive_string_conv* FUNC_10 (struct archive*,char*,int ) ;
 int FUNC_11 (struct archive_string*) ;
 int FUNC_12 (struct archive_string*) ;
 int FUNC_13 (struct archive_string*,char*,int,struct archive_string_conv*) ;
 int FUNC_14 (struct archive*) ;
 struct archive* FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (int *,int const*) ;
 int FUNC_21 (char*,char*,...) ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (char*,int,int *) ;
 int * FUNC_24 (char const*,char*) ;
 int FUNC_25 () ;
 int FUNC_26 (struct archive_mstring*,int ,int) ;
 int FUNC_27 (char*,int *,char*,char*,char*,int) ;
 int * FUNC_28 (int ,char*) ;
 int FUNC_29 (char*) ;
 char* FUNC_30 (char*,char) ;
 int FUNC_31 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_32(const char *VAR_3)
{
 struct archive *VAR_4, *VAR_5;
 struct archive_string VAR_6;
 struct archive_mstring VAR_7;
 struct archive_string_conv *VAR_8, *VAR_9;
 struct archive_string_conv *VAR_10, *VAR_11;
 FILE *VAR_12;
 char VAR_13[512];
 int VAR_14 = 0;
 int VAR_15, VAR_16;
 int VAR_17 = VAR_2;

 VAR_15 = (((void*)0) != FUNC_28(VAR_1, "en_US.UTF-8"));
 VAR_16 = FUNC_25();

 if (!VAR_15 && !VAR_16) {
  FUNC_29("A test of string normalization for NFD requires "
      "a suitable locale; en_US.UTF-8 not available on this "
      "system");
  return;
 }

 FUNC_12(&VAR_6);
 FUNC_26(&VAR_7, 0, sizeof(VAR_7));




 FUNC_16((VAR_4 = FUNC_6()) != ((void*)0));
 FUNC_17(((void*)0) != (VAR_8 =
     FUNC_8(VAR_4, "UTF-8", 0)));
 FUNC_17(((void*)0) != (VAR_10 =
     FUNC_8(VAR_4, "UTF-16BE", 0)));
 FUNC_17(((void*)0) != (VAR_11 =
     FUNC_8(VAR_4, "UTF-16LE", 0)));
 FUNC_16((VAR_5 = FUNC_15()) != ((void*)0));
 FUNC_17(((void*)0) != (VAR_9 =
     FUNC_10(VAR_5, "UTF-8", 0)));
 if (VAR_8 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0) ||
     VAR_9 == ((void*)0)) {

  FUNC_18(VAR_0, FUNC_5(VAR_4));
  return;
 }
 FUNC_9(VAR_8, VAR_17);
 FUNC_9(VAR_10, VAR_17);
 FUNC_9(VAR_11, VAR_17);
 FUNC_9(VAR_9, VAR_17);


 FUNC_16((VAR_12 = FUNC_24(VAR_3, "r")) != ((void*)0));
 while (FUNC_23(VAR_13, sizeof(VAR_13), VAR_12) != ((void*)0)) {
  char VAR_18[80], VAR_19[80];
  char VAR_20[80], VAR_21[80];
  char VAR_22[80], VAR_23[80];
  char VAR_24[80], VAR_25[80];
  wchar_t VAR_26[40], VAR_27[40];
  char *VAR_28, *VAR_29;
  const wchar_t *VAR_30;
  const char *VAR_31;
  size_t VAR_32;
  int VAR_33;

  VAR_14++;
  if (VAR_13[0] == '#')
   continue;
  VAR_29 = FUNC_30(VAR_13, ';');
  if (VAR_29 == ((void*)0))
   continue;
  *VAR_29++ = '\0';

  FUNC_31(VAR_18, VAR_13, sizeof(VAR_18)-1);
  VAR_18[sizeof(VAR_18)-1] = '\0';
  VAR_28 = VAR_29;
  VAR_29 = FUNC_30(VAR_29, '\n');
  if (VAR_29 == ((void*)0))
   continue;
  *VAR_29 = '\0';

  FUNC_31(VAR_19, VAR_28, sizeof(VAR_19)-1);
  VAR_19[sizeof(VAR_19)-1] = '\0';




  VAR_33 = FUNC_27(VAR_20, VAR_26,
   VAR_22, VAR_24, VAR_18, 1);




  FUNC_27(VAR_21, VAR_27, VAR_23, VAR_25,
      VAR_19, 0);

  if (VAR_15) {



   FUNC_18(0, FUNC_7(
       &VAR_6, VAR_20, VAR_8));
   if (VAR_33) {
    FUNC_21("NFC(%s) should not be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_20, VAR_6);
   } else {
    FUNC_21("NFC(%s) should be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_21, VAR_6);
   }




   FUNC_18(0, FUNC_7(
       &VAR_6, VAR_21, VAR_8));
   FUNC_21("NFD(%s) should not be any changed:%d",
       VAR_19, VAR_14);
   FUNC_19(VAR_21, VAR_6);




   FUNC_18(0, FUNC_7(
       &VAR_6, VAR_21, VAR_9));
   FUNC_21("NFD(%s) should not be any changed:%d",
       VAR_19, VAR_14);
   FUNC_19(VAR_21, VAR_6);




   FUNC_18(0, FUNC_13(
       &VAR_6, VAR_22, 100000, VAR_10));
   if (VAR_33) {
    FUNC_21("NFC(%s) should not be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_20, VAR_6);
   } else {
    FUNC_21("NFC(%s) should be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_21, VAR_6);
   }




   FUNC_18(0, FUNC_13(
       &VAR_6, VAR_24, 100000, VAR_11));
   if (VAR_33) {
    FUNC_21("NFC(%s) should not be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_20, VAR_6);
   } else {
    FUNC_21("NFC(%s) should be converted to"
        " NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_19(VAR_21, VAR_6);
   }
  }
  if (VAR_15 || VAR_16) {



   FUNC_18(0, FUNC_1(
       &VAR_7, VAR_20, 100000, VAR_8));
   FUNC_18(0,
       FUNC_4(VAR_4, &VAR_7, &VAR_30));
   if (VAR_33) {
    FUNC_21("UTF-8 NFC(%s) should not be converted "
        "to WCS NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_26, VAR_30);
   } else {
    FUNC_21("UTF-8 NFC(%s) should be converted "
        "to WCS NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_27, VAR_30);
   }




   FUNC_18(0, FUNC_1(
       &VAR_7, VAR_22, 100000, VAR_10));
   FUNC_18(0,
       FUNC_4(VAR_4, &VAR_7, &VAR_30));
   if (VAR_33) {
    FUNC_21("UTF-16BE NFC(%s) should not be "
        "converted to WCS NFD(%s):%d",
        VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_26, VAR_30);
   } else {
    FUNC_21("UTF-16BE NFC(%s) should be converted "
        "to WCS NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_27, VAR_30);
   }




   FUNC_18(0, FUNC_1(
       &VAR_7, VAR_24, 100000, VAR_11));
   FUNC_18(0,
       FUNC_4(VAR_4, &VAR_7, &VAR_30));
   if (VAR_33) {
    FUNC_21("UTF-16LE NFC(%s) should not be "
        "converted to WCS NFD(%s):%d",
        VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_26, VAR_30);
   } else {
    FUNC_21("UTF-16LE NFC(%s) should be converted "
        "to WCS NFD(%s):%d", VAR_18, VAR_19, VAR_14);
    FUNC_20(VAR_27, VAR_30);
   }




   FUNC_18(0, FUNC_2(
       &VAR_7, VAR_27));
   FUNC_18(0, FUNC_3(
       &VAR_7, &VAR_31, &VAR_32, VAR_9));
   FUNC_21("WCS NFD(%s) should be UTF-8 NFD:%d"
       ,VAR_19, VAR_14);
   FUNC_19(VAR_21, VAR_31);
  }
 }

 FUNC_11(&VAR_6);
 FUNC_0(&VAR_7);
 FUNC_22(VAR_12);
 FUNC_18(VAR_0, FUNC_5(VAR_4));
 FUNC_18(VAR_0, FUNC_14(VAR_5));
}
