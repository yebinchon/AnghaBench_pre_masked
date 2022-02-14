
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_txt ;
struct mydata {char* filename; int fd; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 scalar_t__ FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*) ;
 scalar_t__ FUNC_8 (struct archive*,struct mydata*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*,char*,int) ;
 int FUNC_11 (struct archive*) ;
 struct archive* FUNC_12 () ;
 int FUNC_13 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_14 (struct archive*) ;
 scalar_t__ FUNC_15 (struct archive*,int ) ;
 scalar_t__ FUNC_16 (struct archive*,int ) ;
 scalar_t__ FUNC_17 (struct archive*,int ) ;
 scalar_t__ FUNC_18 (struct archive*,int ) ;
 scalar_t__ FUNC_19 (struct archive*,int ) ;
 scalar_t__ FUNC_20 (struct archive*,int ) ;
 scalar_t__ FUNC_21 (struct archive*) ;
 scalar_t__ FUNC_22 (struct archive*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int,int ) ;
 int FUNC_26 (struct archive*,int,int) ;
 int FUNC_27 (char*,char const*,int) ;
 int FUNC_28 (char*,int ) ;
 scalar_t__ FUNC_29 (int,int) ;
 int FUNC_30 (char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_31 (struct mydata*) ;
 int FUNC_32 (char*,char const*) ;
 int FUNC_33 (char const*) ;

__attribute__((used)) static void
FUNC_34(void)
{
  char VAR_7[64];
  static const char *VAR_8[] =
  {
    "test_read_splitted_rar_aa",
    "test_read_splitted_rar_ab",
    "test_read_splitted_rar_ac",
    "test_read_splitted_rar_ad",
    ((void*)0)
  };
  const char VAR_9[] = "test text document\r\n";
  int VAR_10 = sizeof(VAR_9)-1;
  struct archive_entry *VAR_11;
  struct archive *VAR_12;
  struct mydata *VAR_13;
  const char *VAR_14 = *VAR_8;
  int VAR_15;

  FUNC_30(VAR_8);
  FUNC_23((VAR_12 = FUNC_12()) != ((void*)0));
  FUNC_24(0 == FUNC_21(VAR_12));
  FUNC_24(0 == FUNC_22(VAR_12));

  for (VAR_15 = 0; VAR_14 != ((void*)0);)
  {
    FUNC_23((VAR_13 = (struct mydata *)FUNC_29(1, sizeof(*VAR_13))) != ((void*)0));
    if (VAR_13 == ((void*)0)) {
      FUNC_25(VAR_0, FUNC_11(VAR_12));
      return;
    }
    FUNC_23((VAR_13->filename =
      (char *)FUNC_29(1, FUNC_33(VAR_14) + 1)) != ((void*)0));
    if (VAR_13->filename == ((void*)0)) {
      FUNC_31(VAR_13);
      FUNC_25(VAR_0, FUNC_11(VAR_12));
      return;
    }
    FUNC_32(VAR_13->filename, VAR_14);
    VAR_13->fd = -1;
    VAR_14 = VAR_8[++VAR_15];
    FUNC_24(0 == FUNC_8(VAR_12, VAR_13));
  }
 FUNC_24(0 == FUNC_16(VAR_12, VAR_2));
 FUNC_24(0 == FUNC_17(VAR_12, VAR_3));
 FUNC_24(0 == FUNC_19(VAR_12, VAR_5));
 FUNC_24(0 == FUNC_15(VAR_12, VAR_1));
 FUNC_24(0 == FUNC_20(VAR_12, VAR_6));
  FUNC_24(0 == FUNC_18(VAR_12, VAR_4));
  FUNC_24(0 == FUNC_14(VAR_12));


  FUNC_24(0 == FUNC_13(VAR_12, &VAR_11));
  FUNC_28("test.txt", FUNC_4(VAR_11));
  FUNC_24((int)FUNC_3(VAR_11));
  FUNC_24((int)FUNC_1(VAR_11));
  FUNC_24((int)FUNC_0(VAR_11));
  FUNC_25(20, FUNC_5(VAR_11));
  FUNC_25(33188, FUNC_2(VAR_11));
  FUNC_24(VAR_10 == FUNC_10(VAR_12, VAR_7, VAR_10));
  FUNC_27(VAR_7, VAR_9, VAR_10);


  FUNC_24(0 == FUNC_13(VAR_12, &VAR_11));
  FUNC_28("testlink", FUNC_4(VAR_11));
  FUNC_24((int)FUNC_3(VAR_11));
  FUNC_24((int)FUNC_1(VAR_11));
  FUNC_24((int)FUNC_0(VAR_11));
  FUNC_25(0, FUNC_5(VAR_11));
  FUNC_25(41471, FUNC_2(VAR_11));
  FUNC_28("test.txt", FUNC_6(VAR_11));
  FUNC_26(VAR_12, 0, FUNC_10(VAR_12, VAR_7, sizeof(VAR_7)));


  FUNC_24(0 == FUNC_13(VAR_12, &VAR_11));
  FUNC_28("testdir/test.txt", FUNC_4(VAR_11));
  FUNC_24((int)FUNC_3(VAR_11));
  FUNC_24((int)FUNC_1(VAR_11));
  FUNC_24((int)FUNC_0(VAR_11));
  FUNC_25(20, FUNC_5(VAR_11));
  FUNC_25(33188, FUNC_2(VAR_11));
  FUNC_24(VAR_10 == FUNC_10(VAR_12, VAR_7, VAR_10));
  FUNC_27(VAR_7, VAR_9, VAR_10);


  FUNC_24(0 == FUNC_13(VAR_12, &VAR_11));
  FUNC_28("testdir", FUNC_4(VAR_11));
  FUNC_24((int)FUNC_3(VAR_11));
  FUNC_24((int)FUNC_1(VAR_11));
  FUNC_24((int)FUNC_0(VAR_11));
  FUNC_25(0, FUNC_5(VAR_11));
  FUNC_25(16877, FUNC_2(VAR_11));


  FUNC_24(0 == FUNC_13(VAR_12, &VAR_11));
  FUNC_28("testemptydir", FUNC_4(VAR_11));
  FUNC_24((int)FUNC_3(VAR_11));
  FUNC_24((int)FUNC_1(VAR_11));
  FUNC_24((int)FUNC_0(VAR_11));
  FUNC_25(0, FUNC_5(VAR_11));
  FUNC_25(16877, FUNC_2(VAR_11));


  FUNC_24(1 == FUNC_13(VAR_12, &VAR_11));
  FUNC_25(5, FUNC_7(VAR_12));
  FUNC_26(VAR_12, VAR_0, FUNC_9(VAR_12));
  FUNC_25(VAR_0, FUNC_11(VAR_12));
}
