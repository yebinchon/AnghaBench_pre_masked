
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(void)
{
    FUNC_1(FUNC_2(FUNC_0("abc"), 0));
    FUNC_1(FUNC_2(FUNC_0("abc"), 1));
    FUNC_1(FUNC_2(FUNC_0("abc def ghi"), 0));
    FUNC_1(FUNC_2(FUNC_0("abc def ghi"), 1));
    FUNC_1(!FUNC_2(FUNC_0(" abc def ghi"), 0));
    FUNC_1(FUNC_2(FUNC_0(" abc def ghi"), 1));
    FUNC_1(!FUNC_2(FUNC_0("abc  def ghi"), 0));
    FUNC_1(FUNC_2(FUNC_0("abc  def ghi"), 1));
    FUNC_1(!FUNC_2(FUNC_0("abc def ghi "), 0));
    FUNC_1(FUNC_2(FUNC_0("abc def ghi "), 1));
    FUNC_1(!FUNC_2(FUNC_0(" "), 0));
    FUNC_1(FUNC_2(FUNC_0(" "), 1));
    FUNC_1(!FUNC_2(FUNC_0("\t"), 0));
    FUNC_1(!FUNC_2(FUNC_0("\t"), 1));
    FUNC_1(!FUNC_2(FUNC_0("\n"), 0));
    FUNC_1(!FUNC_2(FUNC_0("\n"), 1));
    FUNC_1(!FUNC_2(FUNC_0("\r"), 0));
    FUNC_1(!FUNC_2(FUNC_0("\r"), 1));
    FUNC_1(!FUNC_2(FUNC_0("abc\t def"), 1));
}
