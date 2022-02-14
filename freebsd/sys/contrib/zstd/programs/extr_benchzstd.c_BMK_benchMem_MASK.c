
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_compressionParameters ;
typedef int BMK_benchOutcome_t ;
typedef int BMK_advancedParams_t ;


 int FUNC_0 (void const*,size_t,int *,int ,size_t const*,unsigned int,int,int const*,void const*,size_t,int,char const*,int const*) ;
 int FUNC_1 () ;

BMK_benchOutcome_t FUNC_2(const void* VAR_0, size_t VAR_1,
                        const size_t* VAR_2, unsigned VAR_3,
                        int VAR_4, const ZSTD_compressionParameters* VAR_5,
                        const void* VAR_6, size_t VAR_7,
                        int VAR_8, const char* VAR_9) {

    BMK_advancedParams_t const VAR_10 = FUNC_1();
    return FUNC_0(VAR_0, VAR_1,
                                ((void*)0), 0,
                                VAR_2, VAR_3,
                                VAR_4, VAR_5,
                                VAR_6, VAR_7,
                                VAR_8, VAR_9, &VAR_10);
}
