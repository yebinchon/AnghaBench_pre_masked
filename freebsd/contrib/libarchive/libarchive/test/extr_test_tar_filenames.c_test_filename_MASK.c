
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 struct archive_entry* FUNC_3 () ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*,int) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_10 (struct archive*,char*,size_t) ;
 scalar_t__ FUNC_11 (struct archive*) ;
 scalar_t__ FUNC_12 (struct archive*) ;
 scalar_t__ FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 scalar_t__ FUNC_16 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_17 () ;
 scalar_t__ FUNC_18 (struct archive*,char*,int,size_t*) ;
 scalar_t__ FUNC_19 (struct archive*,int ) ;
 scalar_t__ FUNC_20 (struct archive*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (struct archive*,int,int ) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,int,int) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (char*,char const*) ;
 int FUNC_29 (char*) ;

__attribute__((used)) static void
FUNC_30(const char *VAR_3, int VAR_4, int VAR_5)
{
 char VAR_6[8192];
 char VAR_7[400];
 char VAR_8[400];
 struct archive_entry *VAR_9;
 struct archive *VAR_10;
 size_t VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_12 = VAR_7;
 if (VAR_3) {
  FUNC_28(VAR_7, VAR_3);
  VAR_12 += FUNC_29(VAR_12);
 }
 if (VAR_4 > 0) {
  for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
   *VAR_12++ = 'a';
  *VAR_12++ = '/';
 }
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++)
  *VAR_12++ = 'b';
 *VAR_12 = '\0';

 FUNC_28(VAR_8, VAR_7);


 FUNC_21((VAR_10 = FUNC_17()) != ((void*)0));
 FUNC_22(0 == FUNC_20(VAR_10));
 FUNC_22(0 == FUNC_13(VAR_10));
 FUNC_22(0 == FUNC_19(VAR_10,0));
 FUNC_22(0 == FUNC_18(VAR_10, VAR_6, sizeof(VAR_6), &VAR_11));




 FUNC_21((VAR_9 = FUNC_3()) != ((void*)0));
 FUNC_0(VAR_9, VAR_7);
 FUNC_5(VAR_9, VAR_2 | 0755);
 FUNC_26("Pathname %d/%d", VAR_4, VAR_5);
 FUNC_22(0 == FUNC_16(VAR_10, VAR_9));
 FUNC_1(VAR_9);




 FUNC_21((VAR_9 = FUNC_3()) != ((void*)0));
 FUNC_0(VAR_9, VAR_8);
 FUNC_5(VAR_9, VAR_1 | 0755);
 FUNC_26("Dirname %d/%d", VAR_4, VAR_5);
 FUNC_22(0 == FUNC_16(VAR_10, VAR_9));
 FUNC_1(VAR_9);


 FUNC_27(VAR_8, "/");




 FUNC_21((VAR_9 = FUNC_3()) != ((void*)0));
 FUNC_0(VAR_9, VAR_8);
 FUNC_5(VAR_9, VAR_1 | 0755);
 FUNC_26("Dirname %d/%d", VAR_4, VAR_5);
 FUNC_22(0 == FUNC_16(VAR_10, VAR_9));
 FUNC_1(VAR_9);


 FUNC_24(VAR_10, VAR_0, FUNC_14(VAR_10));
 FUNC_23(VAR_0, FUNC_15(VAR_10));




 FUNC_21((VAR_10 = FUNC_8()) != ((void*)0));
 FUNC_22(0 == FUNC_12(VAR_10));
 FUNC_22(0 == FUNC_11(VAR_10));
 FUNC_22(0 == FUNC_10(VAR_10, VAR_6, VAR_11));


 FUNC_22(0 == FUNC_9(VAR_10, &VAR_9));
 FUNC_25(VAR_7, FUNC_4(VAR_9));
 FUNC_23((VAR_2 | 0755), FUNC_2(VAR_9));
 FUNC_22(0 == FUNC_9(VAR_10, &VAR_9));
 FUNC_25(VAR_8, FUNC_4(VAR_9));
 FUNC_21((VAR_1 | 0755) == FUNC_2(VAR_9));

 FUNC_22(0 == FUNC_9(VAR_10, &VAR_9));
 FUNC_25(VAR_8, FUNC_4(VAR_9));
 FUNC_21((VAR_1 | 0755) == FUNC_2(VAR_9));


 FUNC_21(1 == FUNC_9(VAR_10, &VAR_9));
 FUNC_24(VAR_10, VAR_0, FUNC_6(VAR_10));
 FUNC_23(VAR_0, FUNC_7(VAR_10));
}
