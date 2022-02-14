
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const* const,char*) ;
 int FUNC_4 (int ,char*,char const* const) ;
 scalar_t__ FUNC_5 (int const*,int,size_t,int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_7(const void* VAR_2, size_t VAR_3, const char* const VAR_4)
{

    const BYTE* VAR_5 = (const BYTE*)VAR_2;
    FILE* VAR_6;
    if (VAR_4) {
        VAR_6 = FUNC_3(VAR_4, "wb");
    } else {
        VAR_6 = VAR_1;
    }
    if (!VAR_6) {
        FUNC_4(VAR_0, "Failed to open file at %s: ", VAR_4);
        FUNC_6(((void*)0));
        FUNC_0(1);
    }

    { size_t VAR_7 = VAR_3;
        size_t VAR_8 = 0;
        while (VAR_8 < VAR_7) {
            VAR_8 += FUNC_5(VAR_5 + VAR_8, 1, VAR_7 - VAR_8, VAR_6);
            if (FUNC_2(VAR_6)) {
                FUNC_4(VAR_0, "Failed to write to file at %s: ", VAR_4);
                FUNC_6(((void*)0));
                FUNC_0(1);
            }
        }
    }

    if (VAR_4) {
        FUNC_1(VAR_6);
    }
}
