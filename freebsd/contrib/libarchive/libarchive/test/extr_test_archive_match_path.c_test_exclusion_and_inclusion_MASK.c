
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*) ;
 struct archive_entry* FUNC_4 () ;
 int FUNC_5 (struct archive*,char*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,char*) ;
 int FUNC_9 (struct archive*,char*) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*,struct archive_entry*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*,char const**) ;
 int FUNC_14 (struct archive*,int const**) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (struct archive*,int ,int ) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*,int const*) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static void
FUNC_21(void)
{
 struct archive_entry *VAR_2;
 struct archive *VAR_3;
 const char *VAR_4;
 const wchar_t *VAR_5;

 if (!FUNC_15((VAR_3 = FUNC_10()) != ((void*)0)))
  return;
 if (!FUNC_15((VAR_2 = FUNC_4()) != ((void*)0))) {
  FUNC_7(VAR_3);
  return;
 }

 FUNC_17(VAR_3, 0, FUNC_5(VAR_3, "^aaa*"));
 FUNC_17(VAR_3, 0, FUNC_9(VAR_3, L"^aa*"));
 FUNC_17(VAR_3, 0, FUNC_8(VAR_3, "^a1*"));


 FUNC_1(VAR_2, "aa1234");
 FUNC_20("'aa1234' should not be excluded");
 FUNC_16(0, FUNC_11(VAR_3, VAR_2));
 FUNC_16(0, FUNC_6(VAR_3, VAR_2));
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, L"aa1234");
 FUNC_20("'aa1234' should not be excluded");
 FUNC_16(0, FUNC_11(VAR_3, VAR_2));
 FUNC_16(0, FUNC_6(VAR_3, VAR_2));


 FUNC_1(VAR_2, "aaa1234");
 FUNC_20("'aaa1234' should be excluded");
 FUNC_16(1, FUNC_11(VAR_3, VAR_2));
 FUNC_16(1, FUNC_6(VAR_3, VAR_2));
 FUNC_0(VAR_2);
 FUNC_2(VAR_2, L"aaa1234");
 FUNC_20("'aaa1234' should be excluded");
 FUNC_16(1, FUNC_11(VAR_3, VAR_2));
 FUNC_16(1, FUNC_6(VAR_3, VAR_2));


 FUNC_16(1, FUNC_12(VAR_3));

 FUNC_17(VAR_3, VAR_1,
     FUNC_13(VAR_3, &VAR_4));
 FUNC_18("^a1*", VAR_4);
 FUNC_17(VAR_3, VAR_0,
     FUNC_13(VAR_3, &VAR_4));

 FUNC_17(VAR_3, VAR_1,
     FUNC_14(VAR_3, &VAR_5));
 FUNC_19(L"^a1*", VAR_5);
 FUNC_17(VAR_3, VAR_0,
     FUNC_14(VAR_3, &VAR_5));


 FUNC_3(VAR_2);
 FUNC_7(VAR_3);
}
