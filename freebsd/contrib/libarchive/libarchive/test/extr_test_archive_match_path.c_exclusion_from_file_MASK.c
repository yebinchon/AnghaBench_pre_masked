
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
 int FUNC_5 (struct archive*,struct archive_entry*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*,struct archive_entry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(struct archive *VAR_0)
{
 struct archive_entry *VAR_1;

 if (!FUNC_8((VAR_1 = FUNC_4()) != ((void*)0))) {
  FUNC_6(VAR_0);
  return;
 }


 FUNC_1(VAR_1, "first");
 FUNC_10("'first' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_0, VAR_1));
 FUNC_9(0, FUNC_5(VAR_0, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"first");
 FUNC_10("'first' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_0, VAR_1));
 FUNC_9(0, FUNC_5(VAR_0, VAR_1));


 FUNC_1(VAR_1, "second");
 FUNC_10("'second' should be excluded");
 FUNC_9(1, FUNC_7(VAR_0, VAR_1));
 FUNC_9(1, FUNC_5(VAR_0, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"second");
 FUNC_10("'second' should be excluded");
 FUNC_9(1, FUNC_7(VAR_0, VAR_1));
 FUNC_9(1, FUNC_5(VAR_0, VAR_1));


 FUNC_1(VAR_1, "third");
 FUNC_10("'third' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_0, VAR_1));
 FUNC_9(0, FUNC_5(VAR_0, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"third");
 FUNC_10("'third' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_0, VAR_1));
 FUNC_9(0, FUNC_5(VAR_0, VAR_1));


 FUNC_1(VAR_1, "four");
 FUNC_10("'four' should be excluded");
 FUNC_9(1, FUNC_7(VAR_0, VAR_1));
 FUNC_9(1, FUNC_5(VAR_0, VAR_1));
 FUNC_0(VAR_1);
 FUNC_2(VAR_1, L"four");
 FUNC_10("'four' should be excluded");
 FUNC_9(1, FUNC_7(VAR_0, VAR_1));
 FUNC_9(1, FUNC_5(VAR_0, VAR_1));


 FUNC_3(VAR_1);
}
