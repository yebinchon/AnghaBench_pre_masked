
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int,int) ;
 int FUNC_4 (struct archive*,struct archive_entry*) ;
 int FUNC_5 (struct archive*,struct archive_entry*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9(struct archive *VAR_0)
{
 struct archive_entry *VAR_1;

 if (!FUNC_6((VAR_1 = FUNC_2()) != ((void*)0)))
  return;

 FUNC_0(VAR_1, "file1");
 FUNC_3(VAR_1, 7879, 999);
 FUNC_8("It should be excluded");
 FUNC_7(1, FUNC_5(VAR_0, VAR_1));
 FUNC_7(1, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 0);
 FUNC_8("It should be excluded");
 FUNC_7(1, FUNC_5(VAR_0, VAR_1));
 FUNC_7(1, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 1);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));

 FUNC_0(VAR_1, "file2");
 FUNC_3(VAR_1, 7879, 999);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 0);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 1);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));

 FUNC_0(VAR_1, "file3");
 FUNC_3(VAR_1, 7879, 999);
 FUNC_8("It should be excluded");
 FUNC_7(1, FUNC_5(VAR_0, VAR_1));
 FUNC_7(1, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 0);
 FUNC_8("It should be excluded");
 FUNC_7(1, FUNC_5(VAR_0, VAR_1));
 FUNC_7(1, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 1);
 FUNC_8("It should be excluded");
 FUNC_7(1, FUNC_5(VAR_0, VAR_1));
 FUNC_7(1, FUNC_4(VAR_0, VAR_1));





 FUNC_0(VAR_1, "file4");
 FUNC_3(VAR_1, 7879, 999);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 0);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));
 FUNC_3(VAR_1, 7880, 1);
 FUNC_8("It should not be excluded");
 FUNC_7(0, FUNC_5(VAR_0, VAR_1));
 FUNC_7(0, FUNC_4(VAR_0, VAR_1));



 FUNC_1(VAR_1);
}
