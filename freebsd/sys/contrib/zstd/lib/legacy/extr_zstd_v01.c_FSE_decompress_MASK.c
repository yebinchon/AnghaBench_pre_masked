
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTable_max_t ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,short*,unsigned int,unsigned int) ;
 size_t FUNC_1 (void*,size_t,int const*,size_t,int ) ;
 scalar_t__ FUNC_2 (size_t) ;
 size_t FUNC_3 (short*,unsigned int*,unsigned int*,int const* const,size_t) ;

__attribute__((used)) static size_t FUNC_4(void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5)
{
    const BYTE* const VAR_6 = (const BYTE*)VAR_4;
    const BYTE* VAR_7 = VAR_6;
    short VAR_8[VAR_1+1];
    DTable_max_t VAR_9;
    unsigned VAR_10;
    unsigned VAR_11 = VAR_1;
    size_t VAR_12;

    if (VAR_5<2) return (size_t)-VAR_0;


    VAR_12 = FUNC_3 (VAR_8, &VAR_11, &VAR_10, VAR_6, VAR_5);
    if (FUNC_2(VAR_12)) return VAR_12;
    if (VAR_12 >= VAR_5) return (size_t)-VAR_0;
    VAR_7 += VAR_12;
    VAR_5 -= VAR_12;

    VAR_12 = FUNC_0 (VAR_9, VAR_8, VAR_11, VAR_10);
    if (FUNC_2(VAR_12)) return VAR_12;


    return FUNC_1 (VAR_2, VAR_3, VAR_7, VAR_5, VAR_9);
}
