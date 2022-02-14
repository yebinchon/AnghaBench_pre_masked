
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 struct archive_entry* FUNC_7 () ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_entry*,int) ;
 int FUNC_10 (struct archive_entry*,int,int) ;
 int FUNC_11 (struct archive_entry*,size_t) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive*,int ) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (struct archive*,char*,size_t) ;
 int FUNC_17 (struct archive*) ;
 struct archive* FUNC_18 () ;
 int FUNC_19 (struct archive*,struct archive_entry**) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*) ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*,char*,size_t) ;
 int FUNC_25 (struct archive*) ;
 int FUNC_26 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_27 () ;
 int FUNC_28 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_29 (struct archive*) ;
 size_t FUNC_30 (struct archive*,char*,char*,char const*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (size_t,int ) ;
 int FUNC_33 (struct archive*,size_t,int ) ;
 int FUNC_34 (char*,char*,size_t) ;
 int FUNC_35 (char*,int ) ;
 int FUNC_36 (char*) ;
 char* FUNC_37 (size_t) ;
 int FUNC_38 (char*,char,size_t) ;
 scalar_t__ FUNC_39 () ;
 int FUNC_40 (struct archive*,char*,size_t,int) ;
 int FUNC_41 (char*,char const*) ;
 scalar_t__ FUNC_42 (char const*,char*) ;

__attribute__((used)) static void
FUNC_43(const char *VAR_6)
{
 struct archive_entry *VAR_7;
 struct archive *VAR_8;
 size_t VAR_9;
 size_t VAR_10 = VAR_5 + 1024 * 256;
 size_t VAR_11 = VAR_5;
 char *VAR_12, *VAR_13, *VAR_14;
 unsigned VAR_15;

 FUNC_31((VAR_12 = FUNC_37(VAR_10)) != ((void*)0));
 FUNC_31((VAR_13 = FUNC_37(VAR_11)) != ((void*)0));
 FUNC_31((VAR_14 = FUNC_37(VAR_11)) != ((void*)0));


 FUNC_31((VAR_8 = FUNC_27()) != ((void*)0));
 if (VAR_8 == ((void*)0) || VAR_12 == ((void*)0) || VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
  FUNC_25(VAR_8);
  FUNC_36(VAR_12);
  FUNC_36(VAR_13);
  FUNC_36(VAR_14);
  return;
 }
 FUNC_33(VAR_8, VAR_4, FUNC_29(VAR_8));
 if (VAR_6 != ((void*)0) &&
     VAR_4 != FUNC_30(VAR_8, "7zip",
     "compression", VAR_6)) {
  FUNC_41("%s writing not fully supported on this platform",
     VAR_6);
  FUNC_32(VAR_4, FUNC_25(VAR_8));
  FUNC_36(VAR_12);
  FUNC_36(VAR_13);
  FUNC_36(VAR_14);
  return;
 }
 FUNC_33(VAR_8, VAR_4, FUNC_22(VAR_8));
 FUNC_33(VAR_8, VAR_4,
     FUNC_28(VAR_8, VAR_12, VAR_10, &VAR_9));




 FUNC_31((VAR_7 = FUNC_7()) != ((void*)0));
 FUNC_10(VAR_7, 1, 100);
 FUNC_32(1, FUNC_5(VAR_7));
 FUNC_32(100, FUNC_6(VAR_7));
 FUNC_1(VAR_7, "file");
 FUNC_35("file", FUNC_8(VAR_7));
 FUNC_9(VAR_7, VAR_0 | 0755);
 FUNC_32((VAR_0 | 0755), FUNC_4(VAR_7));
 FUNC_11(VAR_7, VAR_11);

 FUNC_32(0, FUNC_26(VAR_8, VAR_7));
 FUNC_3(VAR_7);
 if (FUNC_42(VAR_6, "ppmd") == 0) {

  FUNC_38(VAR_13, 'a', VAR_11);
 } else {
  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++)
   VAR_13[VAR_15] = (char)FUNC_39();
 }
 FUNC_32(VAR_11, FUNC_24(VAR_8, VAR_13, VAR_11));


 FUNC_33(VAR_8, VAR_4, FUNC_23(VAR_8));
 FUNC_32(VAR_4, FUNC_25(VAR_8));


 FUNC_34(VAR_12, "\x37\x7a\xbc\xaf\x27\x1c\x00\x03", 8);





 FUNC_31((VAR_8 = FUNC_18()) != ((void*)0));
 FUNC_33(VAR_8, VAR_4, FUNC_21(VAR_8));
 FUNC_33(VAR_8, VAR_4, FUNC_20(VAR_8));
 FUNC_33(VAR_8, VAR_4, FUNC_40(VAR_8, VAR_12, VAR_9, 7));




 FUNC_33(VAR_8, VAR_4, FUNC_19(VAR_8, &VAR_7));
 FUNC_32(1, FUNC_5(VAR_7));
 FUNC_32(100, FUNC_6(VAR_7));
 FUNC_32(0, FUNC_0(VAR_7));
 FUNC_32(0, FUNC_2(VAR_7));
 FUNC_35("file", FUNC_8(VAR_7));
 FUNC_32(VAR_0 | 0755, FUNC_4(VAR_7));
 FUNC_32(VAR_11, FUNC_12(VAR_7));
 FUNC_33(VAR_8, VAR_11, FUNC_16(VAR_8, VAR_14, VAR_11));
 FUNC_34(VAR_13, VAR_14, VAR_11);


 FUNC_33(VAR_8, VAR_1, FUNC_19(VAR_8, &VAR_7));


 FUNC_33(VAR_8, VAR_2, FUNC_13(VAR_8, 0));
 FUNC_33(VAR_8, VAR_3, FUNC_14(VAR_8));

 FUNC_32(VAR_4, FUNC_15(VAR_8));
 FUNC_32(VAR_4, FUNC_17(VAR_8));

 FUNC_36(VAR_12);
 FUNC_36(VAR_13);
 FUNC_36(VAR_14);
}
