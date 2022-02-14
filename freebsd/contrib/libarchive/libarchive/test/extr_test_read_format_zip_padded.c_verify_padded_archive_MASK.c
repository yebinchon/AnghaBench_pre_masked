
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
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive*) ;
 int FUNC_4 (struct archive*) ;
 struct archive* FUNC_5 () ;
 int FUNC_6 (struct archive*,struct archive_entry**) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (struct archive*,int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct archive*,char*,size_t,int) ;
 char* FUNC_15 (size_t*,char const*) ;

__attribute__((used)) static void
FUNC_16(const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 struct archive *VAR_6;
 struct archive_entry *VAR_7;

 FUNC_12(VAR_3);
 VAR_4 = FUNC_15(&VAR_5, VAR_3);

 FUNC_8((VAR_6 = FUNC_5()) != ((void*)0));
 FUNC_10(VAR_6, VAR_2, FUNC_7(VAR_6));
 FUNC_10(VAR_6, VAR_2, FUNC_14(VAR_6, VAR_4, VAR_5, 1));

 FUNC_10(VAR_6, VAR_2, FUNC_6(VAR_6, &VAR_7));
 FUNC_11("file0", FUNC_1(VAR_7));
 FUNC_9(VAR_0 | 0644, FUNC_0(VAR_7));
 FUNC_9(6, FUNC_2(VAR_7));

 FUNC_10(VAR_6, VAR_2, FUNC_6(VAR_6, &VAR_7));
 FUNC_11("file1", FUNC_1(VAR_7));
 FUNC_9(VAR_0 | 0644, FUNC_0(VAR_7));
 FUNC_9(6, FUNC_2(VAR_7));

 FUNC_10(VAR_6, VAR_1, FUNC_6(VAR_6, &VAR_7));
 FUNC_10(VAR_6, VAR_2, FUNC_3(VAR_6));
 FUNC_10(VAR_6, VAR_2, FUNC_4(VAR_6));

 FUNC_13(VAR_4);
}
