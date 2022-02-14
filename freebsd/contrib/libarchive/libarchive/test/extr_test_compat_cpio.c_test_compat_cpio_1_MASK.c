
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*,struct archive_entry**) ;
 int FUNC_12 (struct archive*,char*,int) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (struct archive*,int,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void
FUNC_20(void)
{
 char VAR_3[] = "test_compat_cpio_1.cpio";
 struct archive_entry *VAR_4;
 struct archive *VAR_5;

 FUNC_15((VAR_5 = FUNC_10()) != ((void*)0));
 FUNC_17(VAR_5, VAR_2, FUNC_13(VAR_5));
 FUNC_17(VAR_5, VAR_2, FUNC_14(VAR_5));
 FUNC_19(VAR_3);
 FUNC_17(VAR_5, VAR_2, FUNC_12(VAR_5, VAR_3, 17));


 FUNC_17(VAR_5, VAR_2, FUNC_11(VAR_5, &VAR_4));
 FUNC_18("foo1", FUNC_4(VAR_4));
 FUNC_18(((void*)0), FUNC_1(VAR_4));
 FUNC_16(1260250228, FUNC_3(VAR_4));
 FUNC_16(1000, FUNC_5(VAR_4));
 FUNC_16(1000, FUNC_0(VAR_4));
 FUNC_16(0100644, FUNC_2(VAR_4));


 FUNC_17(VAR_5, VAR_2, FUNC_11(VAR_5, &VAR_4));
 FUNC_18("foo2", FUNC_4(VAR_4));
 FUNC_18(((void*)0), FUNC_1(VAR_4));
 FUNC_16(1260250228, FUNC_3(VAR_4));
 FUNC_16(1000, FUNC_5(VAR_4));
 FUNC_16(1000, FUNC_0(VAR_4));
 FUNC_16(0100644, FUNC_2(VAR_4));


 FUNC_17(VAR_5, VAR_2, FUNC_11(VAR_5, &VAR_4));
 FUNC_18("bar1", FUNC_4(VAR_4));
 FUNC_18(((void*)0), FUNC_1(VAR_4));
 FUNC_16(1260250228, FUNC_3(VAR_4));
 FUNC_16(1000, FUNC_5(VAR_4));
 FUNC_16(1000, FUNC_0(VAR_4));
 FUNC_16(0100644, FUNC_2(VAR_4));


 FUNC_17(VAR_5, VAR_2, FUNC_11(VAR_5, &VAR_4));
 FUNC_18("bar2", FUNC_4(VAR_4));
 FUNC_18("bar1", FUNC_1(VAR_4));
 FUNC_16(1260250228, FUNC_3(VAR_4));
 FUNC_16(1000, FUNC_5(VAR_4));
 FUNC_16(1000, FUNC_0(VAR_4));
 FUNC_16(0100644, FUNC_2(VAR_4));


 FUNC_16(FUNC_6(VAR_5, 0), VAR_0);
 FUNC_16(FUNC_7(VAR_5), VAR_1);

 FUNC_16(VAR_2, FUNC_8(VAR_5));
 FUNC_16(VAR_2, FUNC_9(VAR_5));
}
