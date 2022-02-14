
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive*,int ) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 struct archive* FUNC_11 () ;
 int FUNC_12 (struct archive*,struct archive_entry**) ;
 int FUNC_13 (struct archive*,char*,int) ;
 int FUNC_14 (struct archive*) ;
 int FUNC_15 (struct archive*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (struct archive*,int,int ) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static void
FUNC_21(void)
{
 char VAR_4[] = "test_compat_tar_hardlink_1.tar";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;

 FUNC_16((VAR_6 = FUNC_11()) != ((void*)0));
 FUNC_18(VAR_6, VAR_3, FUNC_14(VAR_6));
 FUNC_18(VAR_6, VAR_3, FUNC_15(VAR_6));
 FUNC_20(VAR_4);
 FUNC_18(VAR_6, VAR_3, FUNC_13(VAR_6, VAR_4, 10240));


 FUNC_18(VAR_6, VAR_3, FUNC_12(VAR_6, &VAR_5));
 FUNC_19("xmcd-3.3.2/docs_d/READMf",
  FUNC_4(VAR_5));
 FUNC_19(((void*)0), FUNC_1(VAR_5));
 FUNC_17(321, FUNC_5(VAR_5));
 FUNC_17(1082575645, FUNC_3(VAR_5));
 FUNC_17(1851, FUNC_6(VAR_5));
 FUNC_17(3, FUNC_0(VAR_5));
 FUNC_17(0100444, FUNC_2(VAR_5));


 FUNC_18(VAR_6, VAR_3, FUNC_12(VAR_6, &VAR_5));
 FUNC_19("xmcd-3.3.2/README",
  FUNC_4(VAR_5));
 FUNC_19(
  "xmcd-3.3.2/docs_d/READMf",
  FUNC_1(VAR_5));
 FUNC_17(0, FUNC_5(VAR_5));
 FUNC_17(1082575645, FUNC_3(VAR_5));
 FUNC_17(1851, FUNC_6(VAR_5));
 FUNC_17(3, FUNC_0(VAR_5));
 FUNC_17(0100444, FUNC_2(VAR_5));







 FUNC_18(VAR_6, VAR_0, FUNC_12(VAR_6, &VAR_5));


 FUNC_17(FUNC_7(VAR_6, 0), VAR_1);
 FUNC_17(FUNC_8(VAR_6), VAR_2);

 FUNC_17(VAR_3, FUNC_9(VAR_6));
 FUNC_17(VAR_3, FUNC_10(VAR_6));
}
