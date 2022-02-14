
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 struct archive_entry* FUNC_3 () ;
 int FUNC_4 (struct archive_entry*,int ,int) ;
 int FUNC_5 (struct archive_entry*,int ,int) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,int,char*) ;
 struct archive* FUNC_9 () ;
 int FUNC_10 (struct archive*,struct archive_entry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct archive*,int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16(void)
{
 struct archive_entry *VAR_4;
 struct archive *VAR_5;
 time_t VAR_6, VAR_7;

 if (!FUNC_11((VAR_5 = FUNC_9()) != ((void*)0)))
  return;
 if (!FUNC_11((VAR_4 = FUNC_3()) != ((void*)0))) {
  FUNC_7(VAR_5);
  return;
 }

 FUNC_15(&VAR_6);

 FUNC_13(VAR_5, 0, FUNC_8(VAR_5,
     VAR_2 | VAR_0 |
     VAR_3, L"1980/2/1 0:0:0 UTC"));


 FUNC_1(VAR_4, "file1");
 VAR_7 = FUNC_0(VAR_6, "1980/2/1 0:0:0 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should be excluded");
 FUNC_12(1, FUNC_10(VAR_5, VAR_4));
 FUNC_12(1, FUNC_6(VAR_5, VAR_4));
 VAR_7 = FUNC_0(VAR_6, "1980/1/1 0:0:0 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should be excluded");
 FUNC_12(1, FUNC_10(VAR_5, VAR_4));
 FUNC_12(1, FUNC_6(VAR_5, VAR_4));

 VAR_7 = FUNC_0(VAR_6, "1980/2/1 0:0:1 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should not be excluded");
 FUNC_12(0, FUNC_10(VAR_5, VAR_4));
 FUNC_12(0, FUNC_6(VAR_5, VAR_4));

 VAR_7 = FUNC_0(VAR_6, "1980/2/1 0:0:0 UTC");
 FUNC_5(VAR_4, VAR_7, 1);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Its mtime should be excluded");
 FUNC_12(1, FUNC_10(VAR_5, VAR_4));
 FUNC_12(1, FUNC_6(VAR_5, VAR_4));

 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 1);
 FUNC_14("Its ctime should be excluded");
 FUNC_12(1, FUNC_10(VAR_5, VAR_4));
 FUNC_12(1, FUNC_6(VAR_5, VAR_4));



 FUNC_13(VAR_5, 0, FUNC_8(VAR_5,
     VAR_2 | VAR_0 |
     VAR_3 | VAR_1,
     L"1980/2/1 0:0:0 UTC"));

 FUNC_1(VAR_4, "file1");
 VAR_7 = FUNC_0(VAR_6, "1980/2/1 0:0:0 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should not be excluded");
 FUNC_12(0, FUNC_10(VAR_5, VAR_4));
 FUNC_12(0, FUNC_6(VAR_5, VAR_4));
 VAR_7 = FUNC_0(VAR_6, "1980/1/1 0:0:0 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should be excluded");
 FUNC_12(1, FUNC_10(VAR_5, VAR_4));
 FUNC_12(1, FUNC_6(VAR_5, VAR_4));

 VAR_7 = FUNC_0(VAR_6, "1980/2/1 0:0:1 UTC");
 FUNC_5(VAR_4, VAR_7, 0);
 FUNC_4(VAR_4, VAR_7, 0);
 FUNC_14("Both Its mtime and ctime should not be excluded");
 FUNC_12(0, FUNC_10(VAR_5, VAR_4));
 FUNC_12(0, FUNC_6(VAR_5, VAR_4));


 FUNC_2(VAR_4);
 FUNC_7(VAR_5);
}
