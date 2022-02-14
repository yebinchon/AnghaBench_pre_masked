
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 struct archive_entry* FUNC_1 () ;
 int FUNC_2 (struct archive_entry*,int) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive*) ;
 int FUNC_6 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_7 () ;
 int FUNC_8 (struct archive*,char*,int,size_t*) ;
 int FUNC_9 (struct archive*,char*,char*,int *) ;
 int FUNC_10 (struct archive*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct archive*,int ,int ) ;

__attribute__((used)) static void
FUNC_14(uint64_t VAR_2, int VAR_3)
{
 struct archive *VAR_4;
 struct archive_entry *VAR_5;
 char VAR_6[256];
 size_t VAR_7;


 FUNC_11((VAR_4 = FUNC_7()) != ((void*)0));
 FUNC_13(VAR_4, VAR_1, FUNC_10(VAR_4));

 FUNC_13(VAR_4, VAR_1,
     FUNC_9(VAR_4, "zip", "zip64", ((void*)0)));
 FUNC_13(VAR_4, VAR_1,
     FUNC_8(VAR_4, VAR_6, sizeof(VAR_6), &VAR_7));

 FUNC_11((VAR_5 = FUNC_1()) != ((void*)0));
 FUNC_3(VAR_5, "test");
 FUNC_2(VAR_5, VAR_0 | 0644);
 FUNC_4(VAR_5, VAR_2);
 FUNC_12(VAR_3, FUNC_6(VAR_4, VAR_5));

 FUNC_0(VAR_5);


 FUNC_13(VAR_4, VAR_1, FUNC_5(VAR_4));
}
