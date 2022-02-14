
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*,int*,int*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive*,int ) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*,void const**,size_t*,int*) ;
 int FUNC_13 (struct archive*) ;
 struct archive* FUNC_14 () ;
 int FUNC_15 (struct archive*,struct archive_entry**) ;
 int FUNC_16 (struct archive*,char*,int) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int,int) ;
 int FUNC_21 (struct archive*,int,int) ;
 int FUNC_22 (char const*,char*,int) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char,int) ;

__attribute__((used)) static void
FUNC_27(void)
{
 char VAR_4[] = "test_compat_solaris_pax_sparse_2.pax.Z";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 int64_t VAR_7, VAR_8;
 const void *VAR_9;
 size_t VAR_10;
 int VAR_11;

 FUNC_19((VAR_6 = FUNC_14()) != ((void*)0));
 FUNC_21(VAR_6, VAR_3, FUNC_17(VAR_6));
 FUNC_21(VAR_6, VAR_3, FUNC_18(VAR_6));
 FUNC_24(VAR_4);
 FUNC_21(VAR_6, VAR_3, FUNC_16(VAR_6, VAR_4, 10240));


 FUNC_21(VAR_6, VAR_3, VAR_11 = FUNC_15(VAR_6, &VAR_5));
 if (VAR_11 != VAR_3) {
  FUNC_13(VAR_6);
  return;
 }
 FUNC_23("hole", FUNC_4(VAR_5));
 FUNC_20(1310416789, FUNC_3(VAR_5));
 FUNC_20(101, FUNC_7(VAR_5));
 FUNC_23("cue", FUNC_8(VAR_5));
 FUNC_20(10, FUNC_0(VAR_5));
 FUNC_23("staff", FUNC_1(VAR_5));
 FUNC_20(0100644, FUNC_2(VAR_5));


 FUNC_25("This sparse file should have two data blocks");
 FUNC_20(2, FUNC_6(VAR_5));
 FUNC_20(VAR_3,
     FUNC_5(VAR_5, &VAR_7, &VAR_8));
 FUNC_20(393216, VAR_7);
 FUNC_20(131072, VAR_8);
 FUNC_20(VAR_3,
     FUNC_5(VAR_5, &VAR_7, &VAR_8));
 FUNC_20(786432, VAR_7);
 FUNC_20(32799, VAR_8);
 while (VAR_3 ==
     FUNC_12(VAR_6, &VAR_9, &VAR_10, &VAR_7)) {
  FUNC_25("The data blocks should not include the hole");
  FUNC_19((VAR_7 >= 393216 && VAR_7 + VAR_10 <= 393216+131072) ||
         (VAR_7 >= 786432 && VAR_7 + VAR_10 <= 786432+32799));
  if (VAR_7 + VAR_10 == 819231 && VAR_10 >= 31) {
   char VAR_12[32];
   const char *VAR_13 = VAR_9;
   VAR_13 += VAR_10 - 31;
   FUNC_26(VAR_12, 'c', 31);
   FUNC_25("Last 31 bytes should be all 'c'");
   FUNC_22(VAR_13, VAR_12, 31);
  }
 }


 FUNC_21(VAR_6, VAR_0, FUNC_15(VAR_6, &VAR_5));


 FUNC_20(FUNC_9(VAR_6, 0), VAR_1);
 FUNC_20(FUNC_10(VAR_6), VAR_2);

 FUNC_20(VAR_3, FUNC_11(VAR_6));
 FUNC_20(VAR_3, FUNC_13(VAR_6));
}
