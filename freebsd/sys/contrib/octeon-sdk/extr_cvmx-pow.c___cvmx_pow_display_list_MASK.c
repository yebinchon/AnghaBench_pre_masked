
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,...) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, int VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4, uint64_t VAR_5)
{
    FUNC_1(VAR_0, VAR_1);
    FUNC_1(": ");
    if (VAR_2)
    {
        if (VAR_3)
            FUNC_1("One element index=%d(0x%x)\n", FUNC_0(VAR_4), FUNC_0(VAR_4));
        else
            FUNC_1("Multiple elements head=%d(0x%x) tail=%d(0x%x)\n", FUNC_0(VAR_4), FUNC_0(VAR_4), FUNC_0(VAR_5), FUNC_0(VAR_5));
    }
    else
        FUNC_1("Empty\n");
}
