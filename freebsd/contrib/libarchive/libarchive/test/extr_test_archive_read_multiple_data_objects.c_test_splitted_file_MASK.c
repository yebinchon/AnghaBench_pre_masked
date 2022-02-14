
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_txt ;
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
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,char*,int) ;
 int FUNC_10 (struct archive*) ;
 struct archive* FUNC_11 () ;
 int FUNC_12 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_13 (struct archive*,char const**,int) ;
 scalar_t__ FUNC_14 (struct archive*) ;
 scalar_t__ FUNC_15 (struct archive*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct archive*,int,int) ;
 int FUNC_20 (char*,char const*,int) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char const**) ;

__attribute__((used)) static void
FUNC_23(void)
{
  char VAR_1[64];
  static const char *VAR_2[] =
  {
    "test_read_splitted_rar_aa",
    "test_read_splitted_rar_ab",
    "test_read_splitted_rar_ac",
    "test_read_splitted_rar_ad",
    ((void*)0)
  };
  const char VAR_3[] = "test text document\r\n";
  int VAR_4 = sizeof(VAR_3)-1;
  struct archive_entry *VAR_5;
  struct archive *VAR_6;

  FUNC_22(VAR_2);
  FUNC_16((VAR_6 = FUNC_11()) != ((void*)0));
  FUNC_17(0 == FUNC_14(VAR_6));
  FUNC_17(0 == FUNC_15(VAR_6));
  FUNC_17(0 == FUNC_13(VAR_6, VAR_2, 10240));


  FUNC_17(0 == FUNC_12(VAR_6, &VAR_5));
  FUNC_21("test.txt", FUNC_4(VAR_5));
  FUNC_17((int)FUNC_3(VAR_5));
  FUNC_17((int)FUNC_1(VAR_5));
  FUNC_17((int)FUNC_0(VAR_5));
  FUNC_18(20, FUNC_5(VAR_5));
  FUNC_18(33188, FUNC_2(VAR_5));
  FUNC_17(VAR_4 == FUNC_9(VAR_6, VAR_1, VAR_4));
  FUNC_20(VAR_1, VAR_3, VAR_4);


  FUNC_17(0 == FUNC_12(VAR_6, &VAR_5));
  FUNC_21("testlink", FUNC_4(VAR_5));
  FUNC_17((int)FUNC_3(VAR_5));
  FUNC_17((int)FUNC_1(VAR_5));
  FUNC_17((int)FUNC_0(VAR_5));
  FUNC_18(0, FUNC_5(VAR_5));
  FUNC_18(41471, FUNC_2(VAR_5));
  FUNC_21("test.txt", FUNC_6(VAR_5));
  FUNC_19(VAR_6, 0, FUNC_9(VAR_6, VAR_1, sizeof(VAR_1)));


  FUNC_17(0 == FUNC_12(VAR_6, &VAR_5));
  FUNC_21("testdir/test.txt", FUNC_4(VAR_5));
  FUNC_17((int)FUNC_3(VAR_5));
  FUNC_17((int)FUNC_1(VAR_5));
  FUNC_17((int)FUNC_0(VAR_5));
  FUNC_18(20, FUNC_5(VAR_5));
  FUNC_18(33188, FUNC_2(VAR_5));
  FUNC_17(VAR_4 == FUNC_9(VAR_6, VAR_1, VAR_4));
  FUNC_20(VAR_1, VAR_3, VAR_4);


  FUNC_17(0 == FUNC_12(VAR_6, &VAR_5));
  FUNC_21("testdir", FUNC_4(VAR_5));
  FUNC_17((int)FUNC_3(VAR_5));
  FUNC_17((int)FUNC_1(VAR_5));
  FUNC_17((int)FUNC_0(VAR_5));
  FUNC_18(0, FUNC_5(VAR_5));
  FUNC_18(16877, FUNC_2(VAR_5));


  FUNC_17(0 == FUNC_12(VAR_6, &VAR_5));
  FUNC_21("testemptydir", FUNC_4(VAR_5));
  FUNC_17((int)FUNC_3(VAR_5));
  FUNC_17((int)FUNC_1(VAR_5));
  FUNC_17((int)FUNC_0(VAR_5));
  FUNC_18(0, FUNC_5(VAR_5));
  FUNC_18(16877, FUNC_2(VAR_5));


  FUNC_17(1 == FUNC_12(VAR_6, &VAR_5));
  FUNC_18(5, FUNC_7(VAR_6));
  FUNC_19(VAR_6, VAR_0, FUNC_8(VAR_6));
  FUNC_18(VAR_0, FUNC_10(VAR_6));
}
