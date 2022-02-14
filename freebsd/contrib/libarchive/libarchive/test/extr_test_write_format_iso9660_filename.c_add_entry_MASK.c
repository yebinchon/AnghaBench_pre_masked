
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*,char const*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int,int) ;
 int FUNC_4 (struct archive_entry*,int,int) ;
 int FUNC_5 (struct archive_entry*,int,int) ;
 int FUNC_6 (struct archive_entry*,int) ;
 int FUNC_7 (struct archive_entry*,int,int) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,char const*) ;
 int FUNC_10 (struct archive*,struct archive_entry*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;

__attribute__((used)) static void
FUNC_13(struct archive *VAR_2, const char *VAR_3, const char *VAR_4)
{
 struct archive_entry *VAR_5;

 FUNC_11((VAR_5 = FUNC_2()) != ((void*)0));
 FUNC_4(VAR_5, 2, 20);
 FUNC_3(VAR_5, 3, 30);
 FUNC_5(VAR_5, 4, 40);
 FUNC_7(VAR_5, 5, 50);
 FUNC_0(VAR_5, VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_9(VAR_5, VAR_4);
 FUNC_6(VAR_5, VAR_1 | 0555);
 FUNC_8(VAR_5, 0);
 FUNC_12(VAR_2, VAR_0, FUNC_10(VAR_2, VAR_5));
 FUNC_1(VAR_5);
}
