
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HUFv07_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (void*,size_t,int const*,size_t,int *) ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (int *,void const*,size_t) ;
 int VAR_0 ;

size_t FUNC_4 (HUFv07_DTable* VAR_1, void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5)
{
    const BYTE* VAR_6 = (const BYTE*) VAR_4;

    size_t const VAR_7 = FUNC_3 (VAR_1, VAR_4, VAR_5);
    if (FUNC_2(VAR_7)) return VAR_7;
    if (VAR_7 >= VAR_5) return FUNC_0(VAR_0);
    VAR_6 += VAR_7; VAR_5 -= VAR_7;

    return FUNC_1 (VAR_2, VAR_3, VAR_6, VAR_5, VAR_1);
}
