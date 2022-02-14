
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive*,struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*,char*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct archive*,int ,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct archive_entry *VAR_0;
 struct archive *VAR_1;

 if (!FUNC_8((VAR_1 = FUNC_6()) != ((void*)0)))
  return;
 if (!FUNC_8((VAR_0 = FUNC_2()) != ((void*)0))) {
  FUNC_4(VAR_1);
  return;
 }

 FUNC_10(VAR_1, 0, FUNC_5(VAR_1, "foo"));
 FUNC_10(VAR_1, 0, FUNC_5(VAR_1, "bar"));

 FUNC_0(VAR_0, "unknown");
 FUNC_11("User 'unknown' should be excluded");
 FUNC_9(1, FUNC_7(VAR_1, VAR_0));
 FUNC_9(1, FUNC_3(VAR_1, VAR_0));
 FUNC_0(VAR_0, "foo");
 FUNC_11("User 'foo' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_1, VAR_0));
 FUNC_9(0, FUNC_3(VAR_1, VAR_0));
 FUNC_0(VAR_0, "foo1");
 FUNC_11("User 'foo1' should be excluded");
 FUNC_9(1, FUNC_7(VAR_1, VAR_0));
 FUNC_9(1, FUNC_3(VAR_1, VAR_0));
 FUNC_0(VAR_0, "bar");
 FUNC_11("User 'bar' should not be excluded");
 FUNC_9(0, FUNC_7(VAR_1, VAR_0));
 FUNC_9(0, FUNC_3(VAR_1, VAR_0));
 FUNC_0(VAR_0, "bar1");
 FUNC_11("User 'bar1' should be excluded");
 FUNC_9(1, FUNC_7(VAR_1, VAR_0));
 FUNC_9(1, FUNC_3(VAR_1, VAR_0));


 FUNC_1(VAR_0);
 FUNC_4(VAR_1);
}
