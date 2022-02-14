
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int,int) ;
 int FUNC_4 (struct archive_entry*,int,int) ;
 int FUNC_5 (struct archive*,struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,int,int,int ) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct archive_entry *VAR_3;
 struct archive *VAR_4;

 if (!FUNC_10((VAR_4 = FUNC_8()) != ((void*)0)))
  return;
 if (!FUNC_10((VAR_3 = FUNC_2()) != ((void*)0))) {
  FUNC_6(VAR_4);
  return;
 }

 FUNC_12(VAR_4, 0, FUNC_7(VAR_4,
     VAR_1 | VAR_0 |
     VAR_2, 7880, 0));

 FUNC_0(VAR_3, "file1");
 FUNC_4(VAR_3, 7880, 0);
 FUNC_3(VAR_3, 7880, 0);
 FUNC_13("Both Its mtime and ctime should be excluded");
 FUNC_11(1, FUNC_9(VAR_4, VAR_3));
 FUNC_11(1, FUNC_5(VAR_4, VAR_3));
 FUNC_4(VAR_3, 7879, 999);
 FUNC_3(VAR_3, 7879, 999);
 FUNC_13("Both Its mtime and ctime should be excluded");
 FUNC_11(1, FUNC_9(VAR_4, VAR_3));
 FUNC_11(1, FUNC_5(VAR_4, VAR_3));

 FUNC_4(VAR_3, 7881, 0);
 FUNC_3(VAR_3, 7881, 0);
 FUNC_13("Both Its mtime and ctime should not be excluded");
 FUNC_11(0, FUNC_9(VAR_4, VAR_3));
 FUNC_11(0, FUNC_5(VAR_4, VAR_3));

 FUNC_4(VAR_3, 7880, 1);
 FUNC_3(VAR_3, 7880, 0);
 FUNC_13("Its mtime should be excluded");
 FUNC_11(1, FUNC_9(VAR_4, VAR_3));
 FUNC_11(1, FUNC_5(VAR_4, VAR_3));

 FUNC_4(VAR_3, 7880, 0);
 FUNC_3(VAR_3, 7880, 1);
 FUNC_13("Its ctime should be excluded");
 FUNC_11(1, FUNC_9(VAR_4, VAR_3));
 FUNC_11(1, FUNC_5(VAR_4, VAR_3));


 FUNC_1(VAR_3);
 FUNC_6(VAR_4);
}
