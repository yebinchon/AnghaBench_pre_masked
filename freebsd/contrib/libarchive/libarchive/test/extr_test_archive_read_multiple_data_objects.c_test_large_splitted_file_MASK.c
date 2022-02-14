
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,char*,int) ;
 int FUNC_9 (struct archive*) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_12 (struct archive*,char const**,int) ;
 scalar_t__ FUNC_13 (struct archive*) ;
 scalar_t__ FUNC_14 (struct archive*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (struct archive*,int,int ) ;
 int FUNC_19 (char*,char const*,int) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char const**) ;

__attribute__((used)) static void
FUNC_22(void)
{
  static const char *VAR_1[] =
  {
    "test_read_large_splitted_rar_aa",
    "test_read_large_splitted_rar_ab",
    "test_read_large_splitted_rar_ac",
    "test_read_large_splitted_rar_ad",
    "test_read_large_splitted_rar_ae",
    ((void*)0)
  };
  const char VAR_2[] = "gin-bottom: 0in\"><BR>\n</P>\n</BODY>\n</HTML>";
  int VAR_3 = 241647978, VAR_4 = 0;
  char VAR_5[64];
  struct archive_entry *VAR_6;
  struct archive *VAR_7;

  FUNC_21(VAR_1);
  FUNC_15((VAR_7 = FUNC_10()) != ((void*)0));
  FUNC_16(0 == FUNC_13(VAR_7));
  FUNC_16(0 == FUNC_14(VAR_7));
  FUNC_16(0 == FUNC_12(VAR_7, VAR_1, 10240));


  FUNC_16(0 == FUNC_11(VAR_7, &VAR_6));
  FUNC_20("ppmd_lzss_conversion_test.txt",
                    FUNC_4(VAR_6));
  FUNC_16((int)FUNC_3(VAR_6));
  FUNC_16((int)FUNC_1(VAR_6));
  FUNC_16((int)FUNC_0(VAR_6));
  FUNC_17(VAR_3, FUNC_5(VAR_6));
  FUNC_17(33188, FUNC_2(VAR_6));
  while (VAR_4 + (int)sizeof(VAR_5) < VAR_3)
  {
    FUNC_16(sizeof(VAR_5) == FUNC_8(VAR_7, VAR_5, sizeof(VAR_5)));
    VAR_4 += sizeof(VAR_5);
  }
  FUNC_16(VAR_3 - VAR_4 == FUNC_8(VAR_7, VAR_5, VAR_3 - VAR_4));
  FUNC_19(VAR_5, VAR_2, VAR_3 - VAR_4);


  FUNC_16(1 == FUNC_11(VAR_7, &VAR_6));
  FUNC_17(1, FUNC_6(VAR_7));
  FUNC_18(VAR_7, VAR_0, FUNC_7(VAR_7));
  FUNC_17(VAR_0, FUNC_9(VAR_7));
}
