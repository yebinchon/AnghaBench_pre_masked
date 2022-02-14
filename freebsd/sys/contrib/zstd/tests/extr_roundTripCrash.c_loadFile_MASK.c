
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int * const) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*) ;
 size_t FUNC_4 (void*,int,size_t,int * const) ;
 scalar_t__ FUNC_5 (char const*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(void* VAR_1, const char* VAR_2, size_t VAR_3)
{
    FILE* const VAR_4 = FUNC_2(VAR_2, "rb");
    if (FUNC_5(VAR_2)) {
        FUNC_3(VAR_0, "Ignoring %s directory \n", VAR_2);
        FUNC_0(2);
    }
    if (VAR_4==((void*)0)) {
        FUNC_3(VAR_0, "Impossible to open %s \n", VAR_2);
        FUNC_0(3);
    }
    { size_t const VAR_5 = FUNC_4(VAR_1, 1, VAR_3, VAR_4);
        if (VAR_5 != VAR_3) {
            FUNC_3(VAR_0, "Error reading %s \n", VAR_2);
            FUNC_0(5);
    } }
    FUNC_1(VAR_4);
}
