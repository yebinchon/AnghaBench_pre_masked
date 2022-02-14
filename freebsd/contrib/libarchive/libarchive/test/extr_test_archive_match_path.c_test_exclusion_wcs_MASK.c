
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*) ;
 struct archive_entry* FUNC_4 () ;
 int FUNC_5 (struct archive*,char*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct archive_entry *VAR_0;
 struct archive *VAR_1;

 if (!FUNC_10((VAR_1 = FUNC_8()) != ((void*)0)))
  return;
 if (!FUNC_10((VAR_0 = FUNC_4()) != ((void*)0))) {
  FUNC_7(VAR_1);
  return;
 }


 FUNC_12(VAR_1, 0, FUNC_5(VAR_1, L"^aa*"));


 FUNC_1(VAR_0, "aa1234");
 FUNC_13("'aa1234' should be excluded");
 FUNC_11(1, FUNC_9(VAR_1, VAR_0));
 FUNC_11(1, FUNC_6(VAR_1, VAR_0));
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, L"aa1234");
 FUNC_13("'aa1234' should be excluded");
 FUNC_11(1, FUNC_9(VAR_1, VAR_0));
 FUNC_11(1, FUNC_6(VAR_1, VAR_0));


 FUNC_1(VAR_0, "a1234");
 FUNC_13("'a1234' should not be excluded");
 FUNC_11(0, FUNC_9(VAR_1, VAR_0));
 FUNC_11(0, FUNC_6(VAR_1, VAR_0));
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, L"a1234");
 FUNC_13("'a1234' should not be excluded");
 FUNC_11(0, FUNC_9(VAR_1, VAR_0));
 FUNC_11(0, FUNC_6(VAR_1, VAR_0));


 FUNC_3(VAR_0);
 FUNC_7(VAR_1);
}
