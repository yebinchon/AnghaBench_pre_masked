
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZDICT_legacy_params_t ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t const VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 size_t FUNC_2 (size_t const*,unsigned int) ;
 size_t FUNC_3 (void*,size_t,void*,size_t const*,unsigned int,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (void*,void const*,size_t const) ;
 int VAR_2 ;

size_t FUNC_7(void* VAR_3, size_t VAR_4,
                              const void* VAR_5, const size_t* VAR_6, unsigned VAR_7,
                              ZDICT_legacy_params_t VAR_8)
{
    size_t VAR_9;
    void* VAR_10;
    size_t const VAR_11 = FUNC_2(VAR_6, VAR_7);
    if (VAR_11 < VAR_1) return 0;

    VAR_10 = FUNC_5(VAR_11 + VAR_0);
    if (!VAR_10) return FUNC_0(VAR_2);

    FUNC_6(VAR_10, VAR_5, VAR_11);
    FUNC_1((char*)VAR_10 + VAR_11, VAR_0);

    VAR_9 =
        FUNC_3(VAR_3, VAR_4, VAR_10,
                                            VAR_6, VAR_7, VAR_8);
    FUNC_4(VAR_10);
    return VAR_9;
}
