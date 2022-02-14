
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive*,int ) ;
 char const* FUNC_2 (struct archive*,int ) ;
 scalar_t__ FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (struct archive*,char const*,int) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (struct archive*,scalar_t__,int ) ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*,int,char const*,char const*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_4)
{
 const char *VAR_5[7] = { "f1", "f2", "f3", "d1/f1", "d1/f2", "d1/f3", ((void*)0) };
 struct archive_entry *VAR_6;
 struct archive *VAR_7;
 int VAR_8;

 FUNC_11((VAR_7 = FUNC_6()) != ((void*)0));
 if (VAR_3 != FUNC_9(VAR_7)) {
  FUNC_17("Unsupported bzip2");
  return;
 }
 FUNC_13(VAR_7, VAR_3, FUNC_10(VAR_7));
 FUNC_15(VAR_4);
 FUNC_13(VAR_7, VAR_3, FUNC_8(VAR_7, VAR_4, 2));


 for (VAR_8 = 0; VAR_8 < 6; ++VAR_8) {
  FUNC_16("Could not read file %d (%s) from %s", VAR_8, VAR_5[VAR_8], VAR_4);
  FUNC_13(VAR_7, VAR_3,
      FUNC_7(VAR_7, &VAR_6));
  FUNC_14(VAR_5[VAR_8], FUNC_0(VAR_6));
 }


 FUNC_13(VAR_7, VAR_0, FUNC_7(VAR_7, &VAR_6));


 FUNC_12(FUNC_1(VAR_7, 0), VAR_1);
 FUNC_14(FUNC_2(VAR_7, 0), "bzip2");
 FUNC_12(FUNC_3(VAR_7), VAR_2);

 FUNC_13(VAR_7, VAR_3, FUNC_4(VAR_7));
 FUNC_12(FUNC_1(VAR_7, 0), VAR_1);
 FUNC_14(FUNC_2(VAR_7, 0), "bzip2");
 FUNC_12(FUNC_3(VAR_7), VAR_2);

 FUNC_12(VAR_3, FUNC_5(VAR_7));
}
