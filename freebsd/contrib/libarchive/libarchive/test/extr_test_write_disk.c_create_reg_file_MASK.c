
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*,int,int ) ;
 int FUNC_3 (struct archive_entry*,int) ;
 int FUNC_4 (struct archive*,char const*,int) ;
 struct archive* FUNC_5 () ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*) ;
 int FUNC_9 (struct archive*,struct archive_entry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void FUNC_18(struct archive_entry *VAR_1, const char *VAR_2)
{
 static const char VAR_3[]="abcdefghijklmnopqrstuvwxyz";
 struct archive *VAR_4;


 FUNC_10((VAR_4 = FUNC_5()) != ((void*)0));
        FUNC_6(VAR_4, VAR_0);
 FUNC_17("%s", VAR_2);
 FUNC_3(VAR_1, sizeof(VAR_3));
 FUNC_2(VAR_1, 123456789, 0);
 FUNC_12(VAR_4, 0, FUNC_9(VAR_4, VAR_1));
 FUNC_11(sizeof(VAR_3), FUNC_4(VAR_4, VAR_3, sizeof(VAR_3)));
 FUNC_12(VAR_4, 0, FUNC_7(VAR_4));
 FUNC_11(0, FUNC_8(VAR_4));


 FUNC_16(FUNC_1(VAR_1), FUNC_0(VAR_1) & 0777);
 FUNC_15(FUNC_1(VAR_1), sizeof(VAR_3));

 FUNC_14(FUNC_1(VAR_1), 123456789, 0);
        FUNC_17("No atime given, so atime should get set to current time");
 FUNC_13(FUNC_1(VAR_1));
}
