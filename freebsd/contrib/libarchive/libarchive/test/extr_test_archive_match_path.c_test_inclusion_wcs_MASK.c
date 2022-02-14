
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*) ;
 struct archive_entry* FUNC_4 () ;
 int FUNC_5 (struct archive*,struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,char*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*,char const**) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct archive*,int ,int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 struct archive_entry *VAR_1;
 struct archive *VAR_2;
 const char *VAR_3;

 if (!FUNC_12((VAR_2 = FUNC_8()) != ((void*)0)))
  return;
 if (!FUNC_12((VAR_1 = FUNC_4()) != ((void*)0))) {
  FUNC_6(VAR_2);
  return;
 }


 FUNC_14(VAR_2, 0, FUNC_7(VAR_2, L"^aa*"));


 FUNC_1(VAR_1, "aa1234");
 FUNC_15("'aa1234' should not be excluded");
 FUNC_13(0, FUNC_9(VAR_2, VAR_1));
 FUNC_13(0, FUNC_5(VAR_2, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"aa1234");
 FUNC_15("'aa1234' should not be excluded");
 FUNC_13(0, FUNC_9(VAR_2, VAR_1));
 FUNC_13(0, FUNC_5(VAR_2, VAR_1));


 FUNC_1(VAR_1, "a1234");
 FUNC_15("'a1234' should be excluded");
 FUNC_13(1, FUNC_9(VAR_2, VAR_1));
 FUNC_13(1, FUNC_5(VAR_2, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"a1234");
 FUNC_15("'a1234' should be excluded");
 FUNC_13(1, FUNC_9(VAR_2, VAR_1));
 FUNC_13(1, FUNC_5(VAR_2, VAR_1));


 FUNC_13(0, FUNC_10(VAR_2));
 FUNC_14(VAR_2, VAR_0,
     FUNC_11(VAR_2, &VAR_3));


 FUNC_3(VAR_1);
 FUNC_6(VAR_2);
}
