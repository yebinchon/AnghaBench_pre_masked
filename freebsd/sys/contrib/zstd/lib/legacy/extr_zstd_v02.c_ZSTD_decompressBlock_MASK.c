
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 size_t FUNC_0 (void*,void const*,size_t) ;
 size_t FUNC_1 (void*,void*,size_t,int const*,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static size_t FUNC_3(
                            void* VAR_0,
                            void* VAR_1, size_t VAR_2,
                      const void* VAR_3, size_t VAR_4)
{

    const BYTE* VAR_5 = (const BYTE*)VAR_3;


    size_t VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_4);
    if (FUNC_2(VAR_6)) return VAR_6;
    VAR_5 += VAR_6;
    VAR_4 -= VAR_6;

    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4);
}
