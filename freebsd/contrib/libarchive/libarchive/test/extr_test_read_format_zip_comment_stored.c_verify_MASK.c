
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
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,struct archive_entry**) ;
 int FUNC_9 (struct archive*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (struct archive*,int ,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct archive*,char*,size_t,int) ;
 char* FUNC_17 (size_t*,char const*) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;
 struct archive *VAR_6;
 struct archive_entry *VAR_7;

 FUNC_14(VAR_3);
 VAR_4 = FUNC_17(&VAR_5, VAR_3);


 FUNC_10((VAR_6 = FUNC_7()) != ((void*)0));
 FUNC_12(VAR_6, VAR_2, FUNC_9(VAR_6));
 FUNC_12(VAR_6, VAR_2, FUNC_16(VAR_6, VAR_4, VAR_5, 1));

 FUNC_12(VAR_6, VAR_2, FUNC_8(VAR_6, &VAR_7));
 FUNC_13("file0", FUNC_2(VAR_7));
 FUNC_11(VAR_0 | 0644, FUNC_1(VAR_7));
 FUNC_11(FUNC_0(VAR_7), 0);
 FUNC_12(VAR_6, FUNC_6(VAR_6), 0);

 FUNC_12(VAR_6, VAR_2, FUNC_8(VAR_6, &VAR_7));
 FUNC_13("build.sh", FUNC_2(VAR_7));
 FUNC_11(VAR_0 | 0755, FUNC_1(VAR_7));
 FUNC_11(23, FUNC_3(VAR_7));
 FUNC_11(FUNC_0(VAR_7), 0);
 FUNC_12(VAR_6, FUNC_6(VAR_6), 0);

 FUNC_12(VAR_6, VAR_1, FUNC_8(VAR_6, &VAR_7));
 FUNC_12(VAR_6, FUNC_6(VAR_6), 0);
 FUNC_11(FUNC_0(VAR_7), 0);
 FUNC_12(VAR_6, VAR_2, FUNC_4(VAR_6));
 FUNC_12(VAR_6, VAR_2, FUNC_5(VAR_6));

 FUNC_15(VAR_4);
}
