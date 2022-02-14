
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
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
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
 int FUNC_17 (char const*) ;

__attribute__((used)) static void
FUNC_18(void)
{
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 const char *VAR_7 = "test_read_format_iso_2.iso.Z";

 FUNC_17(VAR_7);

 FUNC_13((VAR_6 = FUNC_8()) != ((void*)0));
 FUNC_15(VAR_6, VAR_3,
     FUNC_11(VAR_6));
 FUNC_15(VAR_6, VAR_3,
     FUNC_12(VAR_6));
 FUNC_15(VAR_6, VAR_3,
     FUNC_10(VAR_6, VAR_7, 512));
 FUNC_15(VAR_6, VAR_3,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_16(".", FUNC_1(VAR_5));
 FUNC_15(VAR_6, VAR_3,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_16("A", FUNC_1(VAR_5));
 FUNC_15(VAR_6, VAR_3,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_16("A/B", FUNC_1(VAR_5));
 FUNC_15(VAR_6, VAR_3,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_16("C", FUNC_1(VAR_5));
 FUNC_15(VAR_6, VAR_3,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_16("C/D", FUNC_1(VAR_5));
 FUNC_15(VAR_6, VAR_0,
     FUNC_9(VAR_6, &VAR_5));
 FUNC_14(5, FUNC_2(VAR_6));
 FUNC_14(FUNC_3(VAR_6, 0),
     VAR_1);
 FUNC_14(FUNC_4(VAR_6), VAR_2);
 FUNC_14(FUNC_0(VAR_5), 0);
 FUNC_15(VAR_6, FUNC_7(VAR_6), VAR_4);
 FUNC_15(VAR_6, VAR_3, FUNC_5(VAR_6));
 FUNC_14(VAR_3, FUNC_6(VAR_6));
}
