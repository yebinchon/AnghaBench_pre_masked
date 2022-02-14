
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ,int *,size_t,int const*,size_t const) ;
 size_t FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_3(const void* VAR_2, size_t VAR_3,
                                            void* VAR_4, size_t VAR_5,
                                            void* VAR_6)
{
    size_t VAR_7 = 0;
    const BYTE* VAR_8 = (const BYTE*)VAR_6;
    const BYTE* const VAR_9 = VAR_8 + VAR_0;
    BYTE* VAR_10 = (BYTE*)VAR_4;
    size_t VAR_11 = VAR_5;

    (void)VAR_2; (void)VAR_3;
    FUNC_0(VAR_1);
    while (VAR_8 < VAR_9) {
        size_t const VAR_12 = FUNC_2(VAR_1);
        size_t const VAR_13 = FUNC_1(VAR_1, VAR_10, VAR_11, VAR_8, VAR_12);
        VAR_8 += VAR_12;
        VAR_7 += VAR_13;
        VAR_10 += VAR_13;
        VAR_11 -= VAR_13;
    }

    return VAR_7;
}
