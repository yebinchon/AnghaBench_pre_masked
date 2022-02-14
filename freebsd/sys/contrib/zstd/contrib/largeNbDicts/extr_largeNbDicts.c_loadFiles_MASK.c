
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U64 ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const* const) ;
 scalar_t__ FUNC_1 (char const* const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int * const) ;
 int * FUNC_4 (char const* const,char*) ;
 size_t FUNC_5 (char*,int,size_t,int * const) ;

__attribute__((used)) static int FUNC_6(void* VAR_1, size_t VAR_2,
                     size_t* VAR_3,
                     const char* const * VAR_4, unsigned VAR_5)
{
    size_t VAR_6 = 0, VAR_7 = 0;

    for (unsigned VAR_8=0; VAR_8<VAR_5; VAR_8++) {
        U64 VAR_9 = FUNC_0(VAR_4[VAR_8]);
        if (FUNC_1(VAR_4[VAR_8])) {
            VAR_3[VAR_8] = 0;
            continue;
        }
        if (VAR_9 == VAR_0) {
            VAR_3[VAR_8] = 0;
            continue;
        }

        FILE* const VAR_10 = FUNC_4(VAR_4[VAR_8], "rb");
        FUNC_2(VAR_10!=((void*)0));

        FUNC_2(VAR_6 <= VAR_2);
        FUNC_2(VAR_9 <= VAR_2 - VAR_6);

        { size_t const VAR_11 = FUNC_5(((char*)VAR_1)+VAR_6, 1, (size_t)VAR_9, VAR_10);
            FUNC_2(VAR_11 == VAR_9);
            VAR_6 += VAR_11;
        }
        VAR_3[VAR_8] = (size_t)VAR_9;
        VAR_7 += (size_t)VAR_9;
        FUNC_3(VAR_10);
    }

    FUNC_2(VAR_7 == VAR_2);
    return 0;
}
