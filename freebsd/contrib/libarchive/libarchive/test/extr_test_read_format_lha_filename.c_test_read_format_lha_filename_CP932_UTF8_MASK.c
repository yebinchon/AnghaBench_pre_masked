
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (struct archive*,char const*,int) ;
 int FUNC_9 (struct archive*,char*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct archive*,int,int ) ;
 int FUNC_15 (char*,int ) ;
 int * FUNC_16 (int ,char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_5)
{
 struct archive *VAR_6;
 struct archive_entry *VAR_7;




 if (((void*)0) == FUNC_16(VAR_4, "en_US.UTF-8")) {
  FUNC_17("en_US.UTF-8 locale not available on this system.");
  return;
 }






 FUNC_12((VAR_6 = FUNC_6()) != ((void*)0));
 FUNC_14(VAR_6, VAR_3, FUNC_11(VAR_6));
 if (VAR_3 != FUNC_9(VAR_6, "hdrcharset=CP932")) {
  FUNC_13(VAR_3, FUNC_5(VAR_6));
  FUNC_17("This system cannot convert character-set"
      " from CP932 to UTF-8.");
  return;
 }
 FUNC_13(VAR_3, FUNC_5(VAR_6));

 FUNC_12((VAR_6 = FUNC_6()) != ((void*)0));
 FUNC_14(VAR_6, VAR_3, FUNC_10(VAR_6));
 FUNC_14(VAR_6, VAR_3, FUNC_11(VAR_6));
 FUNC_14(VAR_6, VAR_3,
     FUNC_8(VAR_6, VAR_5, 10240));


 FUNC_14(VAR_6, VAR_3, FUNC_7(VAR_6, &VAR_7));
 FUNC_15("\xE6\xBC\xA2\xE5\xAD\x97\x2E\x74\x78\x74",
     FUNC_0(VAR_7));
 FUNC_13(8, FUNC_1(VAR_7));


 FUNC_14(VAR_6, VAR_3, FUNC_7(VAR_6, &VAR_7));
 FUNC_15("\xE8\xA1\xA8\x2E\x74\x78\x74",
     FUNC_0(VAR_7));
 FUNC_13(4, FUNC_1(VAR_7));



 FUNC_14(VAR_6, VAR_0, FUNC_7(VAR_6, &VAR_7));


 FUNC_14(VAR_6, VAR_1, FUNC_2(VAR_6, 0));
 FUNC_14(VAR_6, VAR_2, FUNC_3(VAR_6));


 FUNC_13(VAR_3, FUNC_4(VAR_6));
 FUNC_13(VAR_3, FUNC_5(VAR_6));
}
