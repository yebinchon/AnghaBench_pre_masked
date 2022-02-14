
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry_linkresolver {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry_linkresolver*,struct archive_entry**,struct archive_entry**) ;
 int FUNC_3 (struct archive_entry_linkresolver*) ;
 struct archive_entry_linkresolver* FUNC_4 () ;
 int FUNC_5 (struct archive_entry_linkresolver*,int ) ;
 struct archive_entry* FUNC_6 () ;
 int FUNC_7 (struct archive_entry*) ;
 int FUNC_8 (struct archive_entry*,int) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (struct archive_entry*,int *) ;
 int FUNC_11 (struct archive_entry*,int) ;
 int FUNC_12 (struct archive_entry*,int) ;
 int FUNC_13 (struct archive_entry*,char*) ;
 int FUNC_14 (struct archive_entry*,int) ;
 int FUNC_15 (struct archive_entry*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (char*,int ) ;

__attribute__((used)) static void FUNC_19(void)
{
 struct archive_entry *VAR_2, *VAR_3;
 struct archive_entry_linkresolver *VAR_4;


 FUNC_16(((void*)0) != (VAR_4 = FUNC_4()));
 FUNC_5(VAR_4,
     VAR_1);


 FUNC_16(((void*)0) != (VAR_2 = FUNC_6()));
 FUNC_13(VAR_2, "test1");
 FUNC_11(VAR_2, 1);
 FUNC_8(VAR_2, 2);
 FUNC_12(VAR_2, 1);
 FUNC_14(VAR_2, 10);
 FUNC_2(VAR_4, &VAR_2, &VAR_3);


 FUNC_16(VAR_3 == ((void*)0));
 FUNC_17(10, FUNC_15(VAR_2));
 FUNC_18("test1", FUNC_7(VAR_2));


 FUNC_13(VAR_2, "test2");
 FUNC_12(VAR_2, 2);
 FUNC_11(VAR_2, 2);
 FUNC_2(VAR_4, &VAR_2, &VAR_3);

 FUNC_16(VAR_3 == ((void*)0));
 FUNC_18("test2", FUNC_7(VAR_2));
 FUNC_18(((void*)0), FUNC_1(VAR_2));
 FUNC_17(10, FUNC_15(VAR_2));


 FUNC_2(VAR_4, &VAR_2, &VAR_3);
 FUNC_16(VAR_3 == ((void*)0));
 FUNC_18("test2", FUNC_7(VAR_2));
 FUNC_18("test2", FUNC_1(VAR_2));
 FUNC_17(0, FUNC_15(VAR_2));



 FUNC_13(VAR_2, "test3");
 FUNC_12(VAR_2, 2);
 FUNC_9(VAR_2, VAR_0);
 FUNC_11(VAR_2, 3);
 FUNC_10(VAR_2, ((void*)0));
 FUNC_2(VAR_4, &VAR_2, &VAR_3);

 FUNC_16(VAR_3 == ((void*)0));
 FUNC_18("test3", FUNC_7(VAR_2));
 FUNC_18(((void*)0), FUNC_1(VAR_2));


 FUNC_2(VAR_4, &VAR_2, &VAR_3);
 FUNC_16(VAR_3 == ((void*)0));
 FUNC_18("test3", FUNC_7(VAR_2));
 FUNC_18(((void*)0), FUNC_1(VAR_2));

 FUNC_0(VAR_2);
 FUNC_3(VAR_4);
}
