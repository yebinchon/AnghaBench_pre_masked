
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 struct archive_entry* FUNC_3 () ;
 int FUNC_4 (struct archive*,struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,int,char*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry*) ;
 int FUNC_9 (struct archive*,struct archive_entry*,int,int *) ;
 struct archive* FUNC_10 () ;
 int FUNC_11 (struct archive*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (struct archive*,int ,int ) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 struct archive *VAR_3;
 struct archive_entry *VAR_4;
 struct archive *VAR_5;

 if (!FUNC_12((VAR_5 = FUNC_7()) != ((void*)0)))
  return;
 if (!FUNC_12((VAR_4 = FUNC_3()) != ((void*)0))) {
  FUNC_5(VAR_5);
  return;
 }
 if (!FUNC_12((VAR_3 = FUNC_10()) != ((void*)0))) {
  FUNC_5(VAR_5);
  FUNC_2(VAR_4);
  return;
 }




 FUNC_14(VAR_5, 0, FUNC_6(VAR_5,
     VAR_0 | VAR_1, L"mid_mtime"));


 FUNC_1(VAR_4, "old_mtime");
 FUNC_14(VAR_3, VAR_2,
     FUNC_9(VAR_3, VAR_4, -1, ((void*)0)));
 FUNC_15("old_mtime should be excluded");
 FUNC_13(1, FUNC_8(VAR_5, VAR_4));
 FUNC_13(1, FUNC_4(VAR_5, VAR_4));


 FUNC_0(VAR_4);
 FUNC_1(VAR_4, "mid_mtime");
 FUNC_14(VAR_3, VAR_2,
     FUNC_9(VAR_3, VAR_4, -1, ((void*)0)));
 FUNC_15("mid_mtime should be excluded");
 FUNC_13(1, FUNC_8(VAR_5, VAR_4));
 FUNC_13(1, FUNC_4(VAR_5, VAR_4));


 FUNC_0(VAR_4);
 FUNC_1(VAR_4, "new_mtime");
 FUNC_14(VAR_3, VAR_2,
     FUNC_9(VAR_3, VAR_4, -1, ((void*)0)));
 FUNC_15("new_mtime should not be excluded");
 FUNC_13(0, FUNC_8(VAR_5, VAR_4));
 FUNC_13(0, FUNC_4(VAR_5, VAR_4));


 FUNC_11(VAR_3);
 FUNC_2(VAR_4);
 FUNC_5(VAR_5);
}
