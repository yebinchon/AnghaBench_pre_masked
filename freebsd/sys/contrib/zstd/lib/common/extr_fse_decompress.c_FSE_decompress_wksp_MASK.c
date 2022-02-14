
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FSE_DTable ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,short*,unsigned int,unsigned int) ;
 size_t FUNC_3 (void*,size_t,int const*,size_t,int *) ;
 scalar_t__ FUNC_4 (size_t const) ;
 size_t FUNC_5 (short*,unsigned int*,unsigned int*,int const* const,size_t) ;
 int VAR_1 ;

size_t FUNC_6(void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5, FSE_DTable* VAR_6, unsigned VAR_7)
{
    const BYTE* const VAR_8 = (const BYTE*)VAR_4;
    const BYTE* VAR_9 = VAR_8;
    short VAR_10[VAR_0+1];
    unsigned VAR_11;
    unsigned VAR_12 = VAR_0;


    size_t const VAR_13 = FUNC_5 (VAR_10, &VAR_12, &VAR_11, VAR_8, VAR_5);
    if (FUNC_4(VAR_13)) return VAR_13;

    if (VAR_11 > VAR_7) return FUNC_1(VAR_1);
    VAR_9 += VAR_13;
    VAR_5 -= VAR_13;

    FUNC_0( FUNC_2 (VAR_6, VAR_10, VAR_12, VAR_11) );

    return FUNC_3 (VAR_2, VAR_3, VAR_9, VAR_5, VAR_6);
}
