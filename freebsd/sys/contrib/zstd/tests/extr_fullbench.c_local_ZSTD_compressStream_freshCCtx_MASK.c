
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CCtx ;


 int * FUNC_0 () ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (void const*,size_t,void*,size_t,void*) ;

__attribute__((used)) static size_t
FUNC_4(const void* VAR_0, size_t VAR_1,
                          void* VAR_2, size_t VAR_3,
                          void* VAR_4)
{
    ZSTD_CCtx* const VAR_5 = FUNC_0();
    size_t VAR_6;
    FUNC_2(VAR_5 != ((void*)0));

    VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_1(VAR_5);

    return VAR_6;
}
