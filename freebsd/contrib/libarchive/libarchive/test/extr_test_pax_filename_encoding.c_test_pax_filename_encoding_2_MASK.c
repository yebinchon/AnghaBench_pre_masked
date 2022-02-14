
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive_entry*,char*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (struct archive_entry*) ;
 struct archive_entry* FUNC_8 () ;
 int FUNC_9 (struct archive_entry*) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 int FUNC_11 (struct archive_entry*) ;
 int FUNC_12 (struct archive_entry*) ;
 int FUNC_13 (struct archive*) ;
 int FUNC_14 (struct archive*) ;
 struct archive* FUNC_15 () ;
 int FUNC_16 (struct archive*,struct archive_entry**) ;
 int FUNC_17 (struct archive*,char*,size_t) ;
 int FUNC_18 (struct archive*) ;
 int FUNC_19 (struct archive*) ;
 int FUNC_20 (struct archive*) ;
 int FUNC_21 (struct archive*) ;
 int FUNC_22 (struct archive*,struct archive_entry*) ;
 struct archive* FUNC_23 () ;
 int FUNC_24 (struct archive*,char*,int,size_t*) ;
 int FUNC_25 (struct archive*,int ) ;
 int FUNC_26 (struct archive*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (struct archive*,int ,int ) ;
 int FUNC_30 (char*,int ) ;
 int FUNC_31 (char*) ;
 int * FUNC_32 (int ,char*) ;
 int FUNC_33 (char*) ;

__attribute__((used)) static void
FUNC_34(void)
{
 char VAR_5[] = "abc\314\214mno\374xyz";
 struct archive *VAR_6;
 struct archive_entry *VAR_7;
 char VAR_8[65536];
 char VAR_9[] = "abc\314\214mno\374xyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     "/abc\314\214mno\374xyz/abcdefghijklmnopqrstuvwxyz"
     ;
 size_t VAR_10;






 if (((void*)0) == FUNC_32(VAR_4, "en_US.UTF-8")) {
  FUNC_33("invalid encoding tests require a suitable locale;"
      " en_US.UTF-8 not available on this system");
  return;
 }

 FUNC_27((VAR_6 = FUNC_23()) != ((void*)0));
 FUNC_29(VAR_6, 0, FUNC_26(VAR_6));
 FUNC_29(VAR_6, 0, FUNC_19(VAR_6));
 FUNC_29(VAR_6, 0, FUNC_25(VAR_6, 0));
 FUNC_28(0,
     FUNC_24(VAR_6, VAR_8, sizeof(VAR_8), &VAR_10));

 FUNC_27((VAR_7 = FUNC_8()) != ((void*)0));

 FUNC_2(VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_5);
 FUNC_1(VAR_7, VAR_5);
 FUNC_10(VAR_7, VAR_1);
 FUNC_31("This should generate a warning for nonconvertible names.");
 FUNC_28(VAR_3, FUNC_22(VAR_6, VAR_7));
 FUNC_5(VAR_7);

 FUNC_27((VAR_7 = FUNC_8()) != ((void*)0));

 FUNC_2(VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_5);
 FUNC_3(VAR_7, VAR_5);
 FUNC_10(VAR_7, VAR_0);
 FUNC_31("This should generate a warning for nonconvertible names.");
 FUNC_28(VAR_3, FUNC_22(VAR_6, VAR_7));
 FUNC_5(VAR_7);

 FUNC_27((VAR_7 = FUNC_8()) != ((void*)0));

 FUNC_2(VAR_7, VAR_9);
 FUNC_10(VAR_7, VAR_1);
 FUNC_31("This should generate a warning for nonconvertible names.");
 FUNC_28(VAR_3, FUNC_22(VAR_6, VAR_7));
 FUNC_5(VAR_7);

 FUNC_29(VAR_6, VAR_2, FUNC_20(VAR_6));
 FUNC_28(VAR_2, FUNC_21(VAR_6));





 FUNC_27((VAR_6 = FUNC_15()) != ((void*)0));
 FUNC_28(0, FUNC_18(VAR_6));
 FUNC_28(0, FUNC_17(VAR_6, VAR_8, VAR_10));

 FUNC_28(0, FUNC_16(VAR_6, &VAR_7));
 FUNC_30(VAR_5, FUNC_9(VAR_7));
 FUNC_30(VAR_5, FUNC_6(VAR_7));
 FUNC_30(VAR_5, FUNC_12(VAR_7));
 FUNC_30(VAR_5, FUNC_7(VAR_7));

 FUNC_28(0, FUNC_16(VAR_6, &VAR_7));
 FUNC_30(VAR_5, FUNC_9(VAR_7));
 FUNC_30(VAR_5, FUNC_6(VAR_7));
 FUNC_30(VAR_5, FUNC_12(VAR_7));
 FUNC_30(VAR_5, FUNC_11(VAR_7));

 FUNC_28(0, FUNC_16(VAR_6, &VAR_7));
 FUNC_30(VAR_9, FUNC_9(VAR_7));

 FUNC_29(VAR_6, VAR_2, FUNC_13(VAR_6));
 FUNC_28(VAR_2, FUNC_14(VAR_6));
}
