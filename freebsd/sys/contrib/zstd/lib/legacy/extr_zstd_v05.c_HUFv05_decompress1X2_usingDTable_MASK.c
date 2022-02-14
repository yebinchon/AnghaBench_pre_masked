
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int U16 ;
typedef int HUFv05_DEltX2 ;
typedef int BYTE ;
typedef int BITv05_DStream_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int * const,int const* const,int const) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;

size_t FUNC_5(
          void* VAR_2, size_t VAR_3,
    const void* VAR_4, size_t VAR_5,
    const U16* VAR_6)
{
    BYTE* VAR_7 = (BYTE*)VAR_2;
    BYTE* const VAR_8 = VAR_7 + VAR_3;
    const U32 VAR_9 = VAR_6[0];
    const void* VAR_10 = VAR_6;
    const HUFv05_DEltX2* const VAR_11 = ((const HUFv05_DEltX2*)VAR_10)+1;
    BITv05_DStream_t VAR_12;

    if (VAR_3 <= VAR_5) return FUNC_2(VAR_1);
    { size_t const VAR_13 = FUNC_1(&VAR_12, VAR_4, VAR_5);
      if (FUNC_4(VAR_13)) return VAR_13; }

    FUNC_3(VAR_7, &VAR_12, VAR_8, VAR_11, VAR_9);


    if (!FUNC_0(&VAR_12)) return FUNC_2(VAR_0);

    return VAR_3;
}
