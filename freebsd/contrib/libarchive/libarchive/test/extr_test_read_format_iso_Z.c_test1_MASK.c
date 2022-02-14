
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
 int FUNC_1 (struct archive*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry**) ;
 int FUNC_9 (struct archive*,char const*,int) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct archive*,int,int ) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 struct archive_entry *VAR_4;
 struct archive *VAR_5;
 const char *VAR_6 = "test_read_format_iso.iso.Z";

 FUNC_15(VAR_6);

 FUNC_12((VAR_5 = FUNC_7()) != ((void*)0));
 FUNC_14(VAR_5, VAR_2,
     FUNC_10(VAR_5));
 FUNC_14(VAR_5, VAR_2,
     FUNC_11(VAR_5));
 FUNC_14(VAR_5, VAR_2,
     FUNC_9(VAR_5, VAR_6, 512));
 FUNC_14(VAR_5, VAR_2,
     FUNC_8(VAR_5, &VAR_4));
 FUNC_13(1, FUNC_1(VAR_5));
 FUNC_13(FUNC_2(VAR_5, 0),
     VAR_0);
 FUNC_13(FUNC_3(VAR_5), VAR_1);
 FUNC_13(FUNC_0(VAR_4), 0);
 FUNC_14(VAR_5, FUNC_6(VAR_5), VAR_3);
 FUNC_14(VAR_5, VAR_2, FUNC_4(VAR_5));
 FUNC_13(VAR_2, FUNC_5(VAR_5));
}
