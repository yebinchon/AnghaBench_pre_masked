
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_0 ;
 size_t FUNC_2 (int*,size_t,int const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_3(void* VAR_3,
                                      void* VAR_4, size_t VAR_5,
                                const void* VAR_6, size_t VAR_7)
{
    BYTE* VAR_8 = (BYTE*)VAR_4;
    BYTE* const VAR_9 = VAR_8 + VAR_5;
    const BYTE* VAR_10 = (const BYTE*)VAR_6;
    size_t VAR_11;
    size_t VAR_12;


    if (VAR_7 <= 3) return FUNC_0(VAR_1);

    VAR_12 = VAR_10[1] + (VAR_10[0]<<8);
    VAR_12 += ((VAR_10[-3] >> 3) & 7) << 16;
    VAR_8 = VAR_9 - VAR_12;

    (void)VAR_3;
    if (VAR_12 > VAR_5) return FUNC_0(VAR_2);
    VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_10+2, VAR_7-2);
    if (FUNC_1(VAR_11)) return FUNC_0(VAR_0);
    return VAR_12;
}
