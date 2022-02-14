
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const nvlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,char*,char*,int) ;
 int FUNC_2 (int const*,char*,int) ;
 int FUNC_3 (int const*,char*,int ) ;
 int FUNC_4 (int const*,char*) ;
 int FUNC_5 (int const*,char*,int) ;
 int FUNC_6 (int const*,char*,int const*) ;
 int FUNC_7 (int const*,char*,char*) ;
 int FUNC_8 (int const*,char*,char*,...) ;
 int const* FUNC_9 (int ) ;
 int FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 int FUNC_12 (int const*,char*) ;
 int FUNC_13 (int const*,char*) ;
 int FUNC_14 (int const*,char*) ;
 int FUNC_15 (int const*,char*) ;
 int FUNC_16 (int const*,char*) ;
 int FUNC_17 (int const*,char*) ;
 int FUNC_18 (int const*,char*) ;
 int const* FUNC_19 (int const*,char*) ;
 int FUNC_20 (char*) ;

int
FUNC_21(void)
{
 const nvlist_t *VAR_4;
 nvlist_t *VAR_5;

 FUNC_20("1..94\n");

 VAR_5 = FUNC_9(0);

 FUNC_0(!FUNC_15(VAR_5, "nvlist/null"));
 FUNC_4(VAR_5, "nvlist/null");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_15(VAR_5, "nvlist/null"));

 FUNC_0(!FUNC_13(VAR_5, "nvlist/bool/true"));
 FUNC_2(VAR_5, "nvlist/bool/true", 1);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_13(VAR_5, "nvlist/bool/true"));

 FUNC_0(!FUNC_13(VAR_5, "nvlist/bool/false"));
 FUNC_2(VAR_5, "nvlist/bool/false", 0);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_13(VAR_5, "nvlist/bool/false"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/0"));
 FUNC_5(VAR_5, "nvlist/number/0", 0);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/0"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/1"));
 FUNC_5(VAR_5, "nvlist/number/1", 1);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/1"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/-1"));
 FUNC_5(VAR_5, "nvlist/number/-1", -1);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/-1"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/UINT64_MAX"));
 FUNC_5(VAR_5, "nvlist/number/UINT64_MAX", VAR_3);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/UINT64_MAX"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/INT64_MIN"));
 FUNC_5(VAR_5, "nvlist/number/INT64_MIN", VAR_1);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/INT64_MIN"));

 FUNC_0(!FUNC_16(VAR_5, "nvlist/number/INT64_MAX"));
 FUNC_5(VAR_5, "nvlist/number/INT64_MAX", VAR_0);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/INT64_MAX"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/string/"));
 FUNC_7(VAR_5, "nvlist/string/", "");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/string/x"));
 FUNC_7(VAR_5, "nvlist/string/x", "x");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/x"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_7(VAR_5, "nvlist/string/abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/abcdefghijklmnopqrstuvwxyz"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/stringf/"));
 FUNC_8(VAR_5, "nvlist/stringf/", "%s", "");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/stringf/x"));
 FUNC_8(VAR_5, "nvlist/stringf/x", "%s", "x");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/x"));

 FUNC_0(!FUNC_18(VAR_5, "nvlist/stringf/666Xabc"));
 FUNC_8(VAR_5, "nvlist/stringf/666Xabc", "%d%c%s", 666, 'X', "abc");
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/666Xabc"));

 FUNC_0(!FUNC_14(VAR_5, "nvlist/descriptor/STDERR_FILENO"));
 FUNC_3(VAR_5, "nvlist/descriptor/STDERR_FILENO", VAR_2);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_14(VAR_5, "nvlist/descriptor/STDERR_FILENO"));

 FUNC_0(!FUNC_12(VAR_5, "nvlist/binary/x"));
 FUNC_1(VAR_5, "nvlist/binary/x", "x", 1);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_12(VAR_5, "nvlist/binary/x"));

 FUNC_0(!FUNC_12(VAR_5, "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));
 FUNC_1(VAR_5, "nvlist/binary/abcdefghijklmnopqrstuvwxyz", "abcdefghijklmnopqrstuvwxyz", sizeof("abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_12(VAR_5, "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));

 FUNC_0(!FUNC_17(VAR_5, "nvlist/nvlist"));
 FUNC_6(VAR_5, "nvlist/nvlist", VAR_5);
 FUNC_0(FUNC_11(VAR_5) == 0);
 FUNC_0(FUNC_17(VAR_5, "nvlist/nvlist"));

 FUNC_0(FUNC_15(VAR_5, "nvlist/null"));
 FUNC_0(FUNC_13(VAR_5, "nvlist/bool/true"));
 FUNC_0(FUNC_13(VAR_5, "nvlist/bool/false"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/0"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/1"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/-1"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/UINT64_MAX"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/INT64_MIN"));
 FUNC_0(FUNC_16(VAR_5, "nvlist/number/INT64_MAX"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/x"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/x"));
 FUNC_0(FUNC_18(VAR_5, "nvlist/stringf/666Xabc"));
 FUNC_0(FUNC_14(VAR_5, "nvlist/descriptor/STDERR_FILENO"));
 FUNC_0(FUNC_12(VAR_5, "nvlist/binary/x"));
 FUNC_0(FUNC_12(VAR_5, "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_17(VAR_5, "nvlist/nvlist"));

 VAR_4 = FUNC_19(VAR_5, "nvlist/nvlist");
 FUNC_0(FUNC_15(VAR_4, "nvlist/null"));
 FUNC_0(FUNC_13(VAR_4, "nvlist/bool/true"));
 FUNC_0(FUNC_13(VAR_4, "nvlist/bool/false"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/0"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/1"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/-1"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/UINT64_MAX"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/INT64_MIN"));
 FUNC_0(FUNC_16(VAR_4, "nvlist/number/INT64_MAX"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/string/"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/string/x"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/string/abcdefghijklmnopqrstuvwxyz"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/stringf/"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/stringf/x"));
 FUNC_0(FUNC_18(VAR_4, "nvlist/stringf/666Xabc"));
 FUNC_0(FUNC_14(VAR_4, "nvlist/descriptor/STDERR_FILENO"));
 FUNC_0(FUNC_12(VAR_4, "nvlist/binary/x"));
 FUNC_0(FUNC_12(VAR_4, "nvlist/binary/abcdefghijklmnopqrstuvwxyz"));

 FUNC_10(VAR_5);

 return (0);
}
