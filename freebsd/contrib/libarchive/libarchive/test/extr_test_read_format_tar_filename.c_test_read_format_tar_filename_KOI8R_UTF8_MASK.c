
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
 int VAR_5 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry**) ;
 int FUNC_10 (struct archive*,char const*,int) ;
 int FUNC_11 (struct archive*,char*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct archive*,int,int ) ;
 int FUNC_17 (char*,int ) ;
 int * FUNC_18 (int ,char*) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_6)
{
 struct archive *VAR_7;
 struct archive_entry *VAR_8;





 if (((void*)0) == FUNC_18(VAR_5, "en_US.UTF-8")) {
  FUNC_19("en_US.UTF-8 locale not available on this system.");
  return;
 }

 FUNC_14((VAR_7 = FUNC_8()) != ((void*)0));
 FUNC_16(VAR_7, VAR_3, FUNC_12(VAR_7));
 FUNC_16(VAR_7, VAR_3, FUNC_13(VAR_7));
 if (VAR_3 != FUNC_11(VAR_7, "hdrcharset=KOI8-R")) {
  FUNC_15(VAR_3, FUNC_6(VAR_7));
  FUNC_19("This system cannot convert character-set"
      " from KOI8-R to UTF-8.");
  return;
 }
 FUNC_16(VAR_7, VAR_3,
     FUNC_10(VAR_7, VAR_6, 10240));


 FUNC_16(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_17("\xd0\x9f\xd0\xa0\xd0\x98\xd0\x92\xd0\x95\xd0\xa2",
     FUNC_1(VAR_8));
 FUNC_15(6, FUNC_2(VAR_8));
 FUNC_15(FUNC_0(VAR_8), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);


 FUNC_16(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_17("\xd0\xbf\xd1\x80\xd0\xb8\xd0\xb2\xd0\xb5\xd1\x82",
     FUNC_1(VAR_8));
 FUNC_15(6, FUNC_2(VAR_8));
 FUNC_15(FUNC_0(VAR_8), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);


 FUNC_15(FUNC_0(VAR_8), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);


 FUNC_16(VAR_7, VAR_0, FUNC_9(VAR_7, &VAR_8));


 FUNC_16(VAR_7, VAR_1, FUNC_3(VAR_7, 0));
 FUNC_16(VAR_7, VAR_2,
     FUNC_4(VAR_7));


 FUNC_15(FUNC_0(VAR_8), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);


 FUNC_15(VAR_3, FUNC_5(VAR_7));
 FUNC_15(VAR_3, FUNC_6(VAR_7));






 FUNC_14((VAR_7 = FUNC_8()) != ((void*)0));
 FUNC_16(VAR_7, VAR_3, FUNC_12(VAR_7));
 FUNC_16(VAR_7, VAR_3, FUNC_13(VAR_7));
 FUNC_16(VAR_7, VAR_3,
     FUNC_10(VAR_7, VAR_6, 10240));






 FUNC_16(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));

 FUNC_17("\xf0\xf2\xe9\xf7\xe5\xf4",
     FUNC_1(VAR_8));
 FUNC_15(6, FUNC_2(VAR_8));


 FUNC_15(FUNC_0(VAR_8), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);




 FUNC_16(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_17("\xd0\xbf\xd1\x80\xd0\xb8\xd0\xb2\xd0\xb5\xd1\x82",
     FUNC_1(VAR_8));
 FUNC_15(6, FUNC_2(VAR_8));



 FUNC_16(VAR_7, VAR_0, FUNC_9(VAR_7, &VAR_8));


 FUNC_16(VAR_7, VAR_1, FUNC_3(VAR_7, 0));
 FUNC_16(VAR_7, VAR_2,
     FUNC_4(VAR_7));


 FUNC_15(VAR_3, FUNC_5(VAR_7));
 FUNC_15(VAR_3, FUNC_6(VAR_7));
}
