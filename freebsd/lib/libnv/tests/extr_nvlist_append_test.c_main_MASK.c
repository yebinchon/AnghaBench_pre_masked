
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int* FUNC_11 (int *,char*,size_t*) ;
 int FUNC_12 (int *,char*) ;
 int ** FUNC_13 (int *,char*,size_t*) ;
 char const* const FUNC_14 (int const* const,char*) ;
 char** FUNC_15 (int *,char*,size_t*) ;
 int FUNC_16 (int *,char*,int **,size_t) ;
 int ** FUNC_17 (int *,char*,size_t*) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (char const* const,char*) ;

int
FUNC_20(void)
{
 const bool *VAR_0;
 const char * const *VAR_1;
 const nvlist_t * const *VAR_2;
 nvlist_t *VAR_3, *VAR_4, *VAR_5, **VAR_6;
 unsigned int VAR_7;
 size_t VAR_8;

 FUNC_18("1..32\n");

 VAR_3 = FUNC_6(0);

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_3(VAR_3, "nvl/bool", VAR_7 % 2 == 0);

 FUNC_0(FUNC_9(VAR_3) == 0);
 FUNC_0(!FUNC_8(VAR_3));
 FUNC_0(FUNC_10(VAR_3, "nvl/bool"));

 VAR_0 = FUNC_11(VAR_3, "nvl/bool", &VAR_8);
 FUNC_0(VAR_8 == 16);
 FUNC_0(VAR_0 != ((void*)0));
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  FUNC_0(VAR_0[VAR_7] == (VAR_7 % 2 == 0));


 FUNC_5(VAR_3, "nvl/string", "a");
 FUNC_5(VAR_3, "nvl/string", "abc");
 VAR_1 = FUNC_15(VAR_3, "nvl/string", &VAR_8);
 FUNC_0(VAR_8 == 2);
 FUNC_0(FUNC_19(VAR_1[0], "a") == 0);
 FUNC_0(FUNC_19(VAR_1[1], "abc") == 0);


 VAR_4 = FUNC_6(0);
 FUNC_2(VAR_4, "key1", "test1");
 FUNC_4(VAR_3, "nvl/nvl", VAR_4);
 FUNC_7(VAR_4);

 VAR_5 = FUNC_6(0);
 FUNC_2(VAR_5, "key2", "test2");
 FUNC_4(VAR_3, "nvl/nvl", VAR_5);
 FUNC_7(VAR_5);

 VAR_2 = FUNC_13(VAR_3, "nvl/nvl", &VAR_8);
 FUNC_0(VAR_8 == 2);
 FUNC_0(FUNC_19(FUNC_14(VAR_2[0], "key1"), "test1") == 0);
 FUNC_0(FUNC_19(FUNC_14(VAR_2[1], "key2"), "test2") == 0);

 VAR_4 = FUNC_6(0);
 FUNC_1(VAR_4, "key1", 10);
 FUNC_4(VAR_3, "nvl/nvl_array", VAR_4);
 FUNC_7(VAR_4);

 VAR_5 = FUNC_6(0);
 FUNC_1(VAR_5, "key1", 20);
 FUNC_4(VAR_3, "nvl/nvl_array", VAR_5);
 FUNC_7(VAR_5);

 VAR_6 = FUNC_17(VAR_3, "nvl/nvl_array", &VAR_8);
 FUNC_0(FUNC_12(VAR_6[0], "key1") == 10);
 FUNC_0(FUNC_12(VAR_6[1], "key1") == 20);
 FUNC_0(FUNC_9(VAR_6[0]) == 0);
 FUNC_0(FUNC_9(VAR_6[1]) == 0);

 FUNC_16(VAR_3, "nvl/nvl_new_array", VAR_6, VAR_8);
 FUNC_0(FUNC_9(VAR_3) == 0);

 FUNC_7(VAR_3);

 return (0);
}
