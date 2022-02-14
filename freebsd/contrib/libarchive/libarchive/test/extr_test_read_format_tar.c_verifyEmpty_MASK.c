
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
 int FUNC_1 (struct archive*,int ) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_9 (struct archive*,int ,int) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 scalar_t__ FUNC_11 (struct archive*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct archive*,int ,int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18(void)
{
 struct archive_entry *VAR_6;
 struct archive *VAR_7;

 FUNC_12((VAR_7 = FUNC_7()) != ((void*)0));
 FUNC_13(0 == FUNC_10(VAR_7));
 FUNC_13(0 == FUNC_11(VAR_7));
 FUNC_13(0 == FUNC_9(VAR_7, VAR_5, 512));
 FUNC_15(VAR_7, VAR_0, FUNC_8(VAR_7, &VAR_6));
 FUNC_14(FUNC_1(VAR_7, 0), VAR_1);
 FUNC_16(FUNC_2(VAR_7, 0), "none");
 FUNC_17("512 zero bytes should be recognized as a tar archive.");
 FUNC_14(FUNC_3(VAR_7), VAR_2);
 FUNC_14(FUNC_0(VAR_6), 0);
 FUNC_15(VAR_7, FUNC_6(VAR_7), VAR_4);

 FUNC_15(VAR_7, VAR_3, FUNC_4(VAR_7));
 FUNC_14(VAR_3, FUNC_5(VAR_7));
}
