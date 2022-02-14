
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int archive ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 struct archive* FUNC_8 () ;
 int FUNC_9 (struct archive*,struct archive_entry**) ;
 int FUNC_10 (struct archive*,char*,int) ;
 int FUNC_11 (struct archive*,char*) ;
 int FUNC_12 (struct archive*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct archive*,int,int ) ;
 int FUNC_17 (int ,char*) ;

__attribute__((used)) static void
FUNC_18(void)
{
 static char VAR_5[] =
     "#mtree\n"
     "d type=dir content=.\n";
 struct archive_entry *VAR_6;
 struct archive *VAR_7;

 FUNC_14((VAR_7 = FUNC_8()) != ((void*)0));
 FUNC_16(VAR_7, VAR_3,
     FUNC_12(VAR_7));
 FUNC_16(VAR_7, VAR_3,
     FUNC_13(VAR_7));
 FUNC_16(VAR_7, VAR_3,
     FUNC_11(VAR_7, "mtree:checkfs"));
 FUNC_16(VAR_7, VAR_3,
     FUNC_10(VAR_7, VAR_5, sizeof(VAR_5)));
 FUNC_16(VAR_7, VAR_3, FUNC_9(VAR_7, &VAR_6));
 FUNC_15(FUNC_4(VAR_7), VAR_2);
 FUNC_17(FUNC_2(VAR_6), "d");
 FUNC_15(FUNC_0(VAR_6), VAR_0);
 FUNC_15(FUNC_1(VAR_6), 0);
 FUNC_16(VAR_7, FUNC_7(VAR_7), VAR_4);
 FUNC_16(VAR_7, VAR_1, FUNC_9(VAR_7, &VAR_6));
 FUNC_15(1, FUNC_3(VAR_7));
 FUNC_15(VAR_3, FUNC_5(VAR_7));
 FUNC_15(VAR_3, FUNC_6(VAR_7));
}
