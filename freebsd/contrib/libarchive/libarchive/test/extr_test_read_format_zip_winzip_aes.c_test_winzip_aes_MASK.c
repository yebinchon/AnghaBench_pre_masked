
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 char* FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 scalar_t__ FUNC_5 (struct archive*) ;
 char* FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,int ) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,char*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*,char*,int) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 struct archive* FUNC_15 () ;
 int FUNC_16 (struct archive*,struct archive_entry**) ;
 int FUNC_17 (struct archive*,char const*,int) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (struct archive*) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 struct archive* FUNC_22 () ;
 int FUNC_23 (struct archive*) ;
 int FUNC_24 (struct archive*,char*) ;
 int * FUNC_25 () ;
 int FUNC_26 (int) ;
 int FUNC_27 (int,int ) ;
 int FUNC_28 (struct archive*,int,int ) ;
 int FUNC_29 (char*,char*) ;
 int FUNC_30 (char const*) ;
 int FUNC_31 (char*) ;

__attribute__((used)) static void
FUNC_32(const char *VAR_7, int VAR_8)
{
 struct archive_entry *VAR_9;
 struct archive *VAR_10;
 char VAR_11[512];


 FUNC_26((VAR_10 = FUNC_22()) != ((void*)0));
 FUNC_28(VAR_10, VAR_5, FUNC_23(VAR_10));
 FUNC_28(VAR_10, VAR_5, FUNC_20(VAR_10));
 if (VAR_5 != FUNC_24(VAR_10,
    "zip:encryption=aes256")) {
  FUNC_31("This system does not have cryptographic liberary");
  FUNC_21(VAR_10);
  return;
 }
 FUNC_21(VAR_10);


 FUNC_30(VAR_7);




 FUNC_26((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_28(VAR_10, VAR_5, FUNC_18(VAR_10));
 FUNC_28(VAR_10, VAR_5, FUNC_19(VAR_10));
 FUNC_28(VAR_10, VAR_5,
               FUNC_17(VAR_10, VAR_7, 10240));

 FUNC_28(VAR_10, VAR_6,
  FUNC_14(VAR_10));


 FUNC_28(VAR_10, VAR_5, FUNC_16(VAR_10, &VAR_9));
 FUNC_27((VAR_0 | 0644), FUNC_2(VAR_9));
 FUNC_29("README", FUNC_3(VAR_9));
 FUNC_27(6818, FUNC_4(VAR_9));
 FUNC_27(1, FUNC_0(VAR_9));
 FUNC_27(0, FUNC_1(VAR_9));
 FUNC_28(VAR_10, 1, FUNC_14(VAR_10));
 FUNC_27(VAR_2, FUNC_12(VAR_10, VAR_11, sizeof(VAR_11)));
 FUNC_27(1, FUNC_7(VAR_10));


 FUNC_28(VAR_10, VAR_1, FUNC_16(VAR_10, &VAR_9));


 FUNC_28(VAR_10, VAR_3, FUNC_8(VAR_10, 0));
 FUNC_28(VAR_10, VAR_4, FUNC_9(VAR_10));


 FUNC_27(VAR_5, FUNC_11(VAR_10));
 FUNC_27(VAR_5, FUNC_13(VAR_10));





 FUNC_26((VAR_10 = FUNC_15()) != ((void*)0));
 FUNC_28(VAR_10, VAR_5, FUNC_18(VAR_10));
 FUNC_28(VAR_10, VAR_5, FUNC_19(VAR_10));

 FUNC_28(VAR_10, VAR_5,
  FUNC_10(VAR_10, "invalid_pass"));
 FUNC_28(VAR_10, VAR_5,
  FUNC_10(VAR_10, "invalid_phrase"));
 FUNC_28(VAR_10, VAR_5,
  FUNC_10(VAR_10, "password"));
 FUNC_28(VAR_10, VAR_5,
  FUNC_17(VAR_10, VAR_7, 10240));

 FUNC_28(VAR_10, VAR_6,
  FUNC_14(VAR_10));


 FUNC_28(VAR_10, VAR_5, FUNC_16(VAR_10, &VAR_9));
 FUNC_27((VAR_0 | 0644), FUNC_2(VAR_9));
 FUNC_29("README", FUNC_3(VAR_9));
 FUNC_27(6818, FUNC_4(VAR_9));
 FUNC_27(1, FUNC_0(VAR_9));
 FUNC_27(0, FUNC_1(VAR_9));
 FUNC_28(VAR_10, 1, FUNC_14(VAR_10));
 if (!VAR_8 || FUNC_25() != ((void*)0)) {
  FUNC_27(512, FUNC_12(VAR_10, VAR_11, sizeof(VAR_11)));
 } else {
  FUNC_27(VAR_2, FUNC_12(VAR_10, VAR_11, 19));
  FUNC_29(FUNC_6(VAR_10),
      "Unsupported ZIP compression method (deflation)");
  FUNC_26(FUNC_5(VAR_10) != 0);
 }

 FUNC_27(1, FUNC_7(VAR_10));


 FUNC_28(VAR_10, VAR_1, FUNC_16(VAR_10, &VAR_9));


 FUNC_28(VAR_10, VAR_3, FUNC_8(VAR_10, 0));
 FUNC_28(VAR_10, VAR_4, FUNC_9(VAR_10));


 FUNC_27(VAR_5, FUNC_11(VAR_10));
 FUNC_27(VAR_5, FUNC_13(VAR_10));
}
