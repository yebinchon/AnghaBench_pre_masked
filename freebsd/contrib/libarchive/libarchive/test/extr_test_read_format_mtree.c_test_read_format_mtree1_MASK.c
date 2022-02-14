
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ time_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 scalar_t__ FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*,char*,int) ;
 scalar_t__ FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 struct archive* FUNC_13 () ;
 int FUNC_14 (struct archive*,struct archive_entry**) ;
 int FUNC_15 (struct archive*,char const*,int) ;
 int FUNC_16 (struct archive*,char*) ;
 int FUNC_17 (struct archive*) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int,long long const) ;
 int FUNC_21 (struct archive*,int,int ) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (char const*) ;
 int FUNC_26 (int *) ;
 int * FUNC_27 (char*,char*) ;
 scalar_t__ FUNC_28 (char*,int,int,int *) ;

__attribute__((used)) static void
FUNC_29(void)
{
 const char VAR_6[] = "test_read_format_mtree.mtree";
 char VAR_7[16];
 struct archive_entry *VAR_8;
 struct archive *VAR_9;
 FILE *VAR_10;



 static const long long VAR_11 = ((((long long)1) << 62) - 1) + (((long long)1) << 62);
 time_t VAR_12;
 volatile time_t VAR_13;

 FUNC_25(VAR_6);







 FUNC_24("dir", 0775);
 FUNC_24("dir2", 0775);

 FUNC_19((VAR_9 = FUNC_13()) != ((void*)0));
 FUNC_21(VAR_9, VAR_4,
     FUNC_17(VAR_9));
 FUNC_21(VAR_9, VAR_4,
     FUNC_18(VAR_9));
 FUNC_21(VAR_9, VAR_4,
     FUNC_16(VAR_9, "mtree:checkfs"));
 FUNC_21(VAR_9, VAR_4,
     FUNC_15(VAR_9, VAR_6, 11));




 VAR_10 = FUNC_27("file", "wb");
 FUNC_19(VAR_10 != ((void*)0));
 FUNC_20(3, FUNC_28("hi\n", 1, 3, VAR_10));
 FUNC_26(VAR_10);
 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_20(FUNC_8(VAR_9), VAR_3);
 FUNC_23(FUNC_4(VAR_8), "file");
 FUNC_20(FUNC_6(VAR_8), 18);
 FUNC_20(VAR_1, FUNC_0(VAR_8));
 FUNC_20(FUNC_2(VAR_8), VAR_1 | 0123);
 FUNC_20(FUNC_5(VAR_8), 3);
 FUNC_20(3, FUNC_10(VAR_9, VAR_7, 3));
 FUNC_22(VAR_7, "hi\n", 3);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir");
 FUNC_20(VAR_0, FUNC_0(VAR_8));
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir/file with space");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "file with space");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/dir3a");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/dir3a/indir3a");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/fullindir2");
 FUNC_20(FUNC_2(VAR_8), VAR_1 | 0644);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/indir2");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/dir3b");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/dir3b/indir3b");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/dir3b/filename\\with_esc\b\t\fapes");
 FUNC_20(FUNC_0(VAR_8), VAR_1);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "notindir");
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/emptyfile");
 FUNC_20(FUNC_5(VAR_8), 0);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/smallfile");
 FUNC_20(FUNC_5(VAR_8), 1);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);


 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/toosmallfile");
 FUNC_20(FUNC_5(VAR_8), -1);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/bigfile");
 FUNC_20(FUNC_5(VAR_8), VAR_11);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/toobigfile");

 FUNC_20(FUNC_5(VAR_8), VAR_11);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/veryoldfile");


 VAR_12 = FUNC_3(VAR_8);
 FUNC_19(VAR_12 <= 0);

 VAR_13 = (time_t)((uintmax_t)VAR_12 - 1);
 FUNC_19(VAR_13 > 0);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);



 FUNC_21(VAR_9, VAR_4, FUNC_14(VAR_9, &VAR_8));
 FUNC_23(FUNC_4(VAR_8), "dir2/toooldfile");
 FUNC_20(FUNC_3(VAR_8), VAR_12);
 FUNC_20(FUNC_1(VAR_8), 0);
 FUNC_21(VAR_9, FUNC_12(VAR_9), VAR_5);

 FUNC_21(VAR_9, VAR_2, FUNC_14(VAR_9, &VAR_8));
 FUNC_20(20, FUNC_7(VAR_9));
 FUNC_20(VAR_4, FUNC_9(VAR_9));
 FUNC_20(VAR_4, FUNC_11(VAR_9));
}
