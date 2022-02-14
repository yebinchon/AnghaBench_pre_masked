
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*,char*,int) ;
 void* FUNC_4 (int const*) ;
 int const* FUNC_5 (int ) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*) ;
 int FUNC_8 (int const*,char*) ;
 int FUNC_9 (int const*,char*) ;
 int FUNC_10 (int const*,char*) ;
 int FUNC_11 (int const*,char*) ;
 void* FUNC_12 (int const*,char*,size_t*) ;
 int FUNC_13 (int const*,char*) ;
 void* FUNC_14 (int const*,char*) ;
 void* FUNC_15 (int const*,char*) ;
 int FUNC_16 (int const*,char*,void*,int) ;
 int FUNC_17 (int const*,char*,int) ;
 int FUNC_18 (int const*,char*,void*) ;
 int FUNC_19 (int const*,char*,void*) ;
 int FUNC_20 (char*) ;
 void* FUNC_21 (char*) ;

int
FUNC_22(void)
{
 const nvlist_t *VAR_1;
 nvlist_t *VAR_2;
 void *VAR_3;
 size_t VAR_4;
 int VAR_5;

 FUNC_20("1..52\n");

 VAR_2 = FUNC_5(0);

 FUNC_0(!FUNC_11(VAR_2, "nvlist/string/"));
 VAR_3 = FUNC_21("");
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_19(VAR_2, "nvlist/string/", VAR_3);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_11(VAR_2, "nvlist/string/"));
 FUNC_0(VAR_3 == FUNC_15(VAR_2, "nvlist/string/"));

 FUNC_0(!FUNC_11(VAR_2, "nvlist/string/x"));
 VAR_3 = FUNC_21("x");
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_19(VAR_2, "nvlist/string/x", VAR_3);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_11(VAR_2, "nvlist/string/x"));
 FUNC_0(VAR_3 == FUNC_15(VAR_2, "nvlist/string/x"));

 FUNC_0(!FUNC_11(VAR_2,
     "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 VAR_3 = FUNC_21("abcdefghijklmnopqrstuvwxyz");
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_19(VAR_2, "nvlist/string/abcdefghijklmnopqrstuvwxyz",
     VAR_3);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_11(VAR_2,
     "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(VAR_3 ==
     FUNC_15(VAR_2, "nvlist/string/abcdefghijklmnopqrstuvwxyz"));

 FUNC_0(!FUNC_9(VAR_2,
     "nvlist/descriptor/STDERR_FILENO"));
 VAR_5 = FUNC_1(VAR_0);
 FUNC_0(VAR_5 >= 0);
 FUNC_17(VAR_2, "nvlist/descriptor/STDERR_FILENO", VAR_5);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_9(VAR_2, "nvlist/descriptor/STDERR_FILENO"));
 FUNC_0(VAR_5 ==
     FUNC_13(VAR_2, "nvlist/descriptor/STDERR_FILENO"));

 FUNC_0(!FUNC_8(VAR_2, "nvlist/binary/x"));
 VAR_3 = FUNC_2(1);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_3(VAR_3, "x", 1);
 FUNC_16(VAR_2, "nvlist/binary/x", VAR_3, 1);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_8(VAR_2, "nvlist/binary/x"));
 FUNC_0(VAR_3 == FUNC_12(VAR_2, "nvlist/binary/x", ((void*)0)));
 FUNC_0(VAR_3 == FUNC_12(VAR_2, "nvlist/binary/x", &VAR_4));
 FUNC_0(VAR_4 == 1);

 FUNC_0(!FUNC_8(VAR_2,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));
 VAR_3 = FUNC_2(sizeof("abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_3(VAR_3, "abcdefghijklmnopqrstuvwxyz",
     sizeof("abcdefghijklmnopqrstuvwxyz"));
 FUNC_16(VAR_2, "nvlist/binary/abcdefghijklmnopqrstuvwxyz",
     VAR_3, sizeof("abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_8(VAR_2,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(VAR_3 == FUNC_12(VAR_2,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz", ((void*)0)));
 FUNC_0(VAR_3 == FUNC_12(VAR_2,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz", &VAR_4));
 FUNC_0(VAR_4 == sizeof("abcdefghijklmnopqrstuvwxyz"));

 FUNC_0(!FUNC_10(VAR_2, "nvlist/nvlist"));
 VAR_3 = FUNC_4(VAR_2);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_18(VAR_2, "nvlist/nvlist", VAR_3);
 FUNC_0(FUNC_7(VAR_2) == 0);
 FUNC_0(FUNC_10(VAR_2, "nvlist/nvlist"));
 FUNC_0(VAR_3 == FUNC_14(VAR_2, "nvlist/nvlist"));

 FUNC_0(FUNC_11(VAR_2, "nvlist/string/"));
 FUNC_0(FUNC_11(VAR_2, "nvlist/string/x"));
 FUNC_0(FUNC_11(VAR_2,
     "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_9(VAR_2, "nvlist/descriptor/STDERR_FILENO"));
 FUNC_0(FUNC_8(VAR_2, "nvlist/binary/x"));
 FUNC_0(FUNC_8(VAR_2,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_10(VAR_2, "nvlist/nvlist"));

 VAR_1 = FUNC_14(VAR_2, "nvlist/nvlist");
 FUNC_0(FUNC_11(VAR_1, "nvlist/string/"));
 FUNC_0(FUNC_11(VAR_1, "nvlist/string/x"));
 FUNC_0(FUNC_11(VAR_1,
     "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_9(VAR_1,
     "nvlist/descriptor/STDERR_FILENO"));
 FUNC_0(FUNC_8(VAR_1, "nvlist/binary/x"));
 FUNC_0(FUNC_8(VAR_1,
     "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));

 FUNC_6(VAR_2);

 return (0);
}
