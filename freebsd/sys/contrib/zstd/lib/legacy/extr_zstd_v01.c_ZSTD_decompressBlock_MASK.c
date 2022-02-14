
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;


 size_t FUNC_0 (void*,void*,size_t,int const*,size_t,int const*,size_t) ;
 size_t FUNC_1 (void*,void*,size_t,int const**,size_t*,void const*,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static size_t FUNC_3(
                            void* VAR_0,
                            void* VAR_1, size_t VAR_2,
                      const void* VAR_3, size_t VAR_4)
{

    const BYTE* VAR_5 = (const BYTE*)VAR_3;
    const BYTE* VAR_6 = ((void*)0);
    size_t VAR_7 = 0;
    size_t VAR_8;


    VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6, &VAR_7, VAR_3, VAR_4);
    if (FUNC_2(VAR_8)) return VAR_8;
    VAR_5 += VAR_8;
    VAR_4 -= VAR_8;

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_4, VAR_6, VAR_7);
}
