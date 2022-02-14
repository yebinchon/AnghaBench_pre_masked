
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
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (struct archive*,int,int ) ;
 int FUNC_16 (char*,int ) ;
 int * FUNC_17 (int ,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void
FUNC_19(const char *VAR_6)
{
 struct archive *VAR_7;
 struct archive_entry *VAR_8;




 if (((void*)0) == FUNC_17(VAR_5, "Russian_Russia")) {
  FUNC_18("Russian_Russia locale not available on this system.");
  return;
 }

 FUNC_13((VAR_7 = FUNC_8()) != ((void*)0));
 FUNC_15(VAR_7, VAR_3, FUNC_11(VAR_7));
 FUNC_15(VAR_7, VAR_3, FUNC_12(VAR_7));
 FUNC_15(VAR_7, VAR_3,
     FUNC_10(VAR_7, VAR_6, 10240));


 FUNC_15(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_16("\xcf\xd0\xc8\xc2\xc5\xd2",
     FUNC_1(VAR_8));
 FUNC_14(6, FUNC_2(VAR_8));
 FUNC_14(FUNC_0(VAR_8), 0);
 FUNC_15(VAR_7, FUNC_7(VAR_7), VAR_4);


 FUNC_15(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_8));
 FUNC_16("\xef\xf0\xe8\xe2\xe5\xf2",
     FUNC_1(VAR_8));
 FUNC_14(6, FUNC_2(VAR_8));
 FUNC_14(FUNC_0(VAR_8), 0);
 FUNC_15(VAR_7, FUNC_7(VAR_7), VAR_4);



 FUNC_15(VAR_7, VAR_0, FUNC_9(VAR_7, &VAR_8));


 FUNC_15(VAR_7, VAR_1, FUNC_3(VAR_7, 0));
 FUNC_15(VAR_7, VAR_2, FUNC_4(VAR_7));


 FUNC_14(VAR_3, FUNC_5(VAR_7));
 FUNC_14(VAR_3, FUNC_6(VAR_7));
}
