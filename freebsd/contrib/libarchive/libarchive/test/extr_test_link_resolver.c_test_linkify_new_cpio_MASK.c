
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry_linkresolver {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry_linkresolver*,struct archive_entry**,struct archive_entry**) ;
 int FUNC_2 (struct archive_entry_linkresolver*) ;
 struct archive_entry_linkresolver* FUNC_3 () ;
 int FUNC_4 (struct archive_entry_linkresolver*,int ) ;
 struct archive_entry* FUNC_5 () ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*,int) ;
 int FUNC_8 (struct archive_entry*,int) ;
 int FUNC_9 (struct archive_entry*,int) ;
 int FUNC_10 (struct archive_entry*,char*) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static void FUNC_16(void)
{
 struct archive_entry *VAR_1, *VAR_2;
 struct archive_entry_linkresolver *VAR_3;


 FUNC_13(((void*)0) != (VAR_3 = FUNC_3()));
 FUNC_4(VAR_3,
     VAR_0);


 FUNC_13(((void*)0) != (VAR_1 = FUNC_5()));
 FUNC_10(VAR_1, "test1");
 FUNC_8(VAR_1, 1);
 FUNC_7(VAR_1, 2);
 FUNC_9(VAR_1, 1);
 FUNC_11(VAR_1, 10);
 FUNC_1(VAR_3, &VAR_1, &VAR_2);


 FUNC_13(VAR_2 == ((void*)0));
 FUNC_14(10, FUNC_12(VAR_1));
 FUNC_15("test1", FUNC_6(VAR_1));


 FUNC_10(VAR_1, "test2");
 FUNC_9(VAR_1, 3);
 FUNC_8(VAR_1, 2);
 FUNC_1(VAR_3, &VAR_1, &VAR_2);


 FUNC_13(VAR_1 == ((void*)0));
 FUNC_13(VAR_2 == ((void*)0));


 FUNC_13(((void*)0) != (VAR_1 = FUNC_5()));
 FUNC_10(VAR_1, "test3");
 FUNC_8(VAR_1, 2);
 FUNC_7(VAR_1, 2);
 FUNC_9(VAR_1, 2);
 FUNC_11(VAR_1, 10);
 FUNC_1(VAR_3, &VAR_1, &VAR_2);


 FUNC_15("test2", FUNC_6(VAR_1));
 FUNC_14(0, FUNC_12(VAR_1));
 FUNC_0(VAR_1);
 FUNC_13(((void*)0) == VAR_2);
 FUNC_0(VAR_2);


 FUNC_13(((void*)0) != (VAR_1 = FUNC_5()));
 FUNC_10(VAR_1, "test4");
 FUNC_8(VAR_1, 2);
 FUNC_7(VAR_1, 2);
 FUNC_9(VAR_1, 3);
 FUNC_11(VAR_1, 10);
 FUNC_1(VAR_3, &VAR_1, &VAR_2);


 FUNC_15("test3", FUNC_6(VAR_1));
 FUNC_14(0, FUNC_12(VAR_1));


 FUNC_15("test4", FUNC_6(VAR_2));
 FUNC_14(10, FUNC_12(VAR_2));

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_2(VAR_3);
}
