
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive*,int ) ;
 char const* FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (struct archive*,char const*,int) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct archive*,int,int) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*,int,char const*,char const*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_5)
{
 const char *VAR_6[7] = { "f1", "f2", "f3", "d1/f1", "d1/f2", "d1/f3", ((void*)0) };
 struct archive_entry *VAR_7;
 struct archive *VAR_8;
 int VAR_9,VAR_10;

 FUNC_11((VAR_8 = FUNC_6()) != ((void*)0));
 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10 == VAR_4) {
  FUNC_17("gzip reading not fully supported on this platform");
  FUNC_12(VAR_3, FUNC_5(VAR_8));
  return;
 }
 FUNC_13(VAR_8, VAR_3, VAR_10);
 FUNC_13(VAR_8, VAR_3, FUNC_10(VAR_8));
 FUNC_15(VAR_5);
 FUNC_13(VAR_8, VAR_3, FUNC_8(VAR_8, VAR_5, 200));


 for (VAR_9 = 0; VAR_9 < 6; ++VAR_9) {
  FUNC_16("Could not read file %d (%s) from %s", VAR_9, VAR_6[VAR_9], VAR_5);
  FUNC_13(VAR_8, VAR_3,
      FUNC_7(VAR_8, &VAR_7));
  if (VAR_10 != VAR_3) {
   FUNC_5(VAR_8);
   return;
  }
  FUNC_14(VAR_6[VAR_9], FUNC_0(VAR_7));
 }


 FUNC_13(VAR_8, VAR_0, FUNC_7(VAR_8, &VAR_7));


 FUNC_12(FUNC_1(VAR_8, 0), VAR_1);
 FUNC_14(FUNC_2(VAR_8, 0), "gzip");
 FUNC_12(FUNC_3(VAR_8), VAR_2);

 FUNC_12(VAR_3, FUNC_4(VAR_8));
 FUNC_12(VAR_3, FUNC_5(VAR_8));
}
