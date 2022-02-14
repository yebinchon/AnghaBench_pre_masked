
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
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 int FUNC_8 (struct archive*,char*,int) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct archive*,int,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(void)
{
 char VAR_4[] = "test_compat_gtar_2.tar";
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 int VAR_7;

 FUNC_11((VAR_6 = FUNC_6()) != ((void*)0));
 FUNC_13(VAR_6, VAR_3, FUNC_9(VAR_6));
 FUNC_13(VAR_6, VAR_3, FUNC_10(VAR_6));
 FUNC_14(VAR_4);
 FUNC_13(VAR_6, VAR_3, FUNC_8(VAR_6, VAR_4, 10240));


 FUNC_13(VAR_6, VAR_3, VAR_7 = FUNC_7(VAR_6, &VAR_5));
 if (VAR_7 != VAR_3) {
  FUNC_5(VAR_6);
  return;
 }


 FUNC_12(2097152, FUNC_1(VAR_5));
 FUNC_12(2097152, FUNC_0(VAR_5));


 FUNC_13(VAR_6, VAR_0, FUNC_7(VAR_6, &VAR_5));


 FUNC_12(FUNC_2(VAR_6, 0), VAR_1);
 FUNC_12(FUNC_3(VAR_6), VAR_2);

 FUNC_12(VAR_3, FUNC_4(VAR_6));
 FUNC_12(VAR_3, FUNC_5(VAR_6));
}
