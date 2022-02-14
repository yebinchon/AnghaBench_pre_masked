
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int data ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,int) ;
 int FUNC_4 (struct archive_entry*,char*) ;
 int FUNC_5 (struct archive_entry*,int) ;
 char FUNC_6 (struct archive*,char*,size_t) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,struct archive_entry*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (size_t,char) ;
 int FUNC_11 (struct archive*,int ,int ) ;
 int FUNC_12 (char*,char const*,int) ;
 int FUNC_13 (char*,...) ;
 char FUNC_14 (int *) ;
 int * FUNC_15 (int ,char*) ;
 char FUNC_16 (char*,int,size_t,int *) ;
 int FUNC_17 (char*) ;
 char* FUNC_18 (size_t) ;
 int FUNC_19 (char*,char const*,int) ;
 int FUNC_20 (char*,int ,size_t) ;
 scalar_t__ FUNC_21 (int ,struct stat*) ;

__attribute__((used)) static void
FUNC_22(struct archive *VAR_1, int VAR_2)
{
 static const char VAR_3[]="abcdefghijklmnopqrstuvwxyz";
 struct stat VAR_4;
 struct archive_entry *VAR_5;
 size_t VAR_6 = 64 * 1024;
 char *VAR_7, *VAR_8;
 const char *VAR_9 = VAR_2 ? "sparse" : "non-sparse";
 FILE *VAR_10;

 VAR_7 = FUNC_18(VAR_6);
 FUNC_9(VAR_7 != ((void*)0));
 if (VAR_7 == ((void*)0))
  return;

 VAR_5 = FUNC_1();
 FUNC_9(VAR_5 != ((void*)0));
 FUNC_5(VAR_5, 8 * VAR_6);
 FUNC_4(VAR_5, "test_write_data");
 FUNC_3(VAR_5, VAR_0 | 0755);
 FUNC_11(VAR_1, 0, FUNC_8(VAR_1, VAR_5));




 FUNC_20(VAR_7, 0, VAR_6);
 FUNC_19(VAR_7, VAR_3, sizeof(VAR_3));
 FUNC_13("%s", VAR_9);
 FUNC_10(VAR_6, FUNC_6(VAR_1, VAR_7, VAR_6));


 FUNC_20(VAR_7, 0, VAR_6);
 FUNC_19(VAR_7 + VAR_6 / 2 - 3, VAR_3, sizeof(VAR_3));
 FUNC_13("%s", VAR_9);
 FUNC_10(VAR_6, FUNC_6(VAR_1, VAR_7, VAR_6));


 FUNC_20(VAR_7, 0, VAR_6);
 FUNC_19(VAR_7 + VAR_6 - sizeof(VAR_3), VAR_3, sizeof(VAR_3));
 FUNC_13("%s", VAR_9);
 FUNC_10(VAR_6, FUNC_6(VAR_1, VAR_7, VAR_6));

 FUNC_13("%s", VAR_9);
 FUNC_11(VAR_1, 0, FUNC_7(VAR_1));


 FUNC_9(0 == FUNC_21(FUNC_2(VAR_5), &VAR_4));
        FUNC_10(VAR_4.st_size, 8 * VAR_6);
 VAR_10 = FUNC_15(FUNC_2(VAR_5), "rb");
 FUNC_9(VAR_10 != ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_17(VAR_7);
  return;
 }


 FUNC_10(VAR_6, FUNC_16(VAR_7, 1, VAR_6, VAR_10));
 FUNC_13("%s", VAR_9);
 FUNC_12(VAR_7, VAR_3, sizeof(VAR_3));
 for (VAR_8 = VAR_7 + sizeof(VAR_3); VAR_8 < VAR_7 + VAR_6; ++VAR_8) {
  FUNC_13("offset: %d, %s", (int)(VAR_8 - VAR_7), VAR_9);
  if (!FUNC_10(0, *VAR_8))
   break;
 }


 FUNC_10(VAR_6, FUNC_16(VAR_7, 1, VAR_6, VAR_10));
 for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_6; ++VAR_8) {
  FUNC_13("offset: %d, %s", (int)(VAR_8 - VAR_7), VAR_9);
  if (VAR_8 == VAR_7 + VAR_6 / 2 - 3) {
   FUNC_12(VAR_8, VAR_3, sizeof(VAR_3));
   VAR_8 += sizeof(VAR_3);
  } else if (!FUNC_10(0, *VAR_8))
   break;
 }


 FUNC_10(VAR_6, FUNC_16(VAR_7, 1, VAR_6, VAR_10));
 for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_6 - sizeof(VAR_3); ++VAR_8) {
  FUNC_13("offset: %d, %s", (int)(VAR_8 - VAR_7), VAR_9);
  if (!FUNC_10(0, *VAR_8))
   break;
 }
 FUNC_13("%s", VAR_9);
 FUNC_12(VAR_7 + VAR_6 - sizeof(VAR_3), VAR_3, sizeof(VAR_3));



 FUNC_10(0, FUNC_14(VAR_10));
 FUNC_0(VAR_5);
 FUNC_17(VAR_7);
}
