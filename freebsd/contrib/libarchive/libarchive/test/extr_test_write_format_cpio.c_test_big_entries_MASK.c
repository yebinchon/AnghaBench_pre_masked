
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
typedef struct archive archive ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*) ;
 struct archive_entry* FUNC_2 () ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int * FUNC_5 (struct archive*) ;
 scalar_t__ FUNC_6 (struct archive*) ;
 int FUNC_7 (struct archive*) ;
 int FUNC_8 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_9 () ;
 scalar_t__ FUNC_10 (struct archive*,char*,size_t,size_t*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (char*) ;
 char* FUNC_15 (size_t) ;
 int FUNC_16 (struct archive*) ;

__attribute__((used)) static void
FUNC_17(int (*VAR_2)(struct archive *), int64_t VAR_3, int VAR_4)
{
 struct archive_entry *VAR_5;
 struct archive *VAR_6;
 size_t VAR_7 = 1000000;
 size_t VAR_8;
 char *VAR_9;

 VAR_9 = FUNC_15(VAR_7);


 FUNC_11((VAR_6 = FUNC_9()) != ((void*)0));
 FUNC_12(0 == (*VAR_2)(VAR_6));
 FUNC_12(0 == FUNC_6(VAR_6));
 FUNC_12(0 == FUNC_10(VAR_6, VAR_9, VAR_7, &VAR_8));

 FUNC_11((VAR_5 = FUNC_2()) != ((void*)0));
 FUNC_0(VAR_5, "file");
 FUNC_4(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_0);
 FUNC_13(VAR_4, FUNC_8(VAR_6, VAR_5));
 if (VAR_4 != VAR_1)
  FUNC_11(FUNC_5(VAR_6) != ((void*)0));

 FUNC_1(VAR_5);
 FUNC_7(VAR_6);
 FUNC_14(VAR_9);
}
