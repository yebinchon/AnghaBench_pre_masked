
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int,int ) ;
 int FUNC_4 (struct archive*,int,struct archive_entry*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct archive*,int ,int ) ;
 int FUNC_9 (struct archive*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 struct archive_entry *VAR_3;
 struct archive *VAR_4;

 if (!FUNC_7((VAR_4 = FUNC_6()) != ((void*)0)))
  return;
 if (!FUNC_7((VAR_3 = FUNC_2()) != ((void*)0))) {
  FUNC_5(VAR_4);
  return;
 }

 FUNC_0(VAR_3, "file1");
 FUNC_3(VAR_3, 7880, 0);
 FUNC_8(VAR_4, 0, FUNC_4(VAR_4,
     VAR_1 | VAR_2 |
     VAR_0, VAR_3));
 FUNC_0(VAR_3, "file2");
 FUNC_3(VAR_3, 1, 0);
 FUNC_8(VAR_4, 0, FUNC_4(VAR_4,
     VAR_1 | VAR_2 |
     VAR_0, VAR_3));
 FUNC_0(VAR_3, "file3");
 FUNC_3(VAR_3, 99999, 0);
 FUNC_8(VAR_4, 0, FUNC_4(VAR_4,
     VAR_1 | VAR_2 |
     VAR_0, VAR_3));

 FUNC_9(VAR_4);


 FUNC_1(VAR_3);
 FUNC_5(VAR_4);
}
