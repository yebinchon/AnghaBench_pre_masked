
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,int ) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*,char*,int) ;
 int FUNC_13 (struct archive*,void const**,size_t*,int *) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 struct archive* FUNC_16 () ;
 int FUNC_17 (struct archive*,struct archive_entry**) ;
 int FUNC_18 (struct archive*,char const*,int) ;
 int FUNC_19 (struct archive*) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (struct archive*,int,int ) ;
 int FUNC_24 (char*,int ,int) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_27(const char *VAR_12, int VAR_13)
{
 struct archive_entry *VAR_14;
 struct archive *VAR_15;
 char VAR_16[128];
 const void *VAR_17;
 size_t VAR_18;
 int64_t VAR_19;
 int VAR_20, VAR_21;

 if (VAR_13)
  VAR_20 = VAR_21 = 1001;
 else
  VAR_20 = VAR_21 = 0;

 FUNC_26(VAR_12);
 FUNC_21((VAR_15 = FUNC_16()) != ((void*)0));
 FUNC_23(VAR_15, VAR_6, FUNC_19(VAR_15));
 FUNC_23(VAR_15, VAR_6, FUNC_20(VAR_15));
 FUNC_23(VAR_15, VAR_6,
     FUNC_18(VAR_15, VAR_12, 10240));


 FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
 if (VAR_13)
  FUNC_22((VAR_0 | 0750), FUNC_2(VAR_14));
 else
  FUNC_22((VAR_0 | 0755), FUNC_2(VAR_14));
 FUNC_25("dir/", FUNC_4(VAR_14));
 FUNC_22(86401, FUNC_3(VAR_14));
 FUNC_22(VAR_20, FUNC_7(VAR_14));
 FUNC_22(VAR_21, FUNC_0(VAR_14));
 FUNC_22(0, FUNC_5(VAR_14));
 FUNC_23(VAR_15, VAR_3,
     FUNC_13(VAR_15, &VAR_17, &VAR_18, &VAR_19));
 FUNC_22(VAR_18, 0);
 FUNC_22(FUNC_1(VAR_14), 0);
 FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);


 FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
 FUNC_22((VAR_0 | 0755), FUNC_2(VAR_14));
 FUNC_25("dir2/", FUNC_4(VAR_14));
 FUNC_22(86401, FUNC_3(VAR_14));
 FUNC_22(VAR_20, FUNC_7(VAR_14));
 FUNC_22(VAR_21, FUNC_0(VAR_14));
 FUNC_22(0, FUNC_5(VAR_14));
 FUNC_23(VAR_15, VAR_3,
     FUNC_13(VAR_15, &VAR_17, &VAR_18, &VAR_19));
 FUNC_22(VAR_18, 0);
 FUNC_22(FUNC_1(VAR_14), 0);
 FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);

 if (VAR_13) {

  FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
  FUNC_22((VAR_1 | 0755), FUNC_2(VAR_14));
  FUNC_25("dir2/symlink1", FUNC_4(VAR_14));
  FUNC_25("../file1", FUNC_6(VAR_14));
  FUNC_22(172802, FUNC_3(VAR_14));
  FUNC_22(VAR_20, FUNC_7(VAR_14));
  FUNC_22(VAR_21, FUNC_0(VAR_14));
  FUNC_22(0, FUNC_5(VAR_14));
  FUNC_22(FUNC_1(VAR_14), 0);
  FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);


  FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
  FUNC_22((VAR_1 | 0755), FUNC_2(VAR_14));
  FUNC_25("dir2/symlink2", FUNC_4(VAR_14));
  FUNC_25("../file2", FUNC_6(VAR_14));
  FUNC_22(172802, FUNC_3(VAR_14));
  FUNC_22(VAR_20, FUNC_7(VAR_14));
  FUNC_22(VAR_21, FUNC_0(VAR_14));
  FUNC_22(0, FUNC_5(VAR_14));
  FUNC_22(FUNC_1(VAR_14), 0);
  FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);
 }


 FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
 FUNC_22((VAR_2 | 0644), FUNC_2(VAR_14));
 FUNC_25("file1", FUNC_4(VAR_14));
 FUNC_22(86401, FUNC_3(VAR_14));
 FUNC_22(VAR_20, FUNC_7(VAR_14));
 FUNC_22(VAR_21, FUNC_0(VAR_14));
 FUNC_22(VAR_9, FUNC_5(VAR_14));
 FUNC_22(VAR_9, FUNC_12(VAR_15, VAR_16, VAR_9));
 FUNC_24(VAR_16, VAR_8, VAR_9);
 FUNC_22(FUNC_1(VAR_14), 0);
 FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);


 FUNC_23(VAR_15, VAR_6, FUNC_17(VAR_15, &VAR_14));
 if (VAR_13)
  FUNC_22((VAR_2 | 0666), FUNC_2(VAR_14));
 else
  FUNC_22((VAR_2 | 0644), FUNC_2(VAR_14));
 FUNC_25("file2", FUNC_4(VAR_14));
 FUNC_22(86401, FUNC_3(VAR_14));
 FUNC_22(VAR_20, FUNC_7(VAR_14));
 FUNC_22(VAR_21, FUNC_0(VAR_14));
 FUNC_22(VAR_11, FUNC_5(VAR_14));
 FUNC_22(VAR_11, FUNC_12(VAR_15, VAR_16, VAR_11));
 FUNC_24(VAR_16, VAR_10, VAR_11);
 FUNC_22(FUNC_1(VAR_14), 0);
 FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);


 if (VAR_13) {
  FUNC_22(6, FUNC_8(VAR_15));
 } else {
  FUNC_22(4, FUNC_8(VAR_15));
 }


 FUNC_23(VAR_15, VAR_3, FUNC_17(VAR_15, &VAR_14));


 if (VAR_13) {
  FUNC_22(6, FUNC_8(VAR_15));
 } else {
  FUNC_22(4, FUNC_8(VAR_15));
 }


 FUNC_22(FUNC_1(VAR_14), 0);
 FUNC_23(VAR_15, FUNC_15(VAR_15), VAR_7);


 FUNC_23(VAR_15, VAR_4, FUNC_9(VAR_15, 0));
 FUNC_23(VAR_15, VAR_5, FUNC_10(VAR_15));


 FUNC_22(VAR_6, FUNC_11(VAR_15));
 FUNC_22(VAR_6, FUNC_14(VAR_15));
}
