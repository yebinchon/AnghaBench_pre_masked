
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_DDict ;
typedef int ZSTD_DCtx ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t const) ;
 unsigned long long const VAR_0 ;
 unsigned long long const VAR_1 ;
 int * FUNC_2 () ;
 size_t FUNC_3 (int * const,void* const,unsigned long long const,void* const,size_t,int const*) ;
 int FUNC_4 (int * const) ;
 unsigned int FUNC_5 (int const*) ;
 unsigned int FUNC_6 (void* const,size_t) ;
 unsigned long long FUNC_7 (void* const,size_t) ;
 int FUNC_8 (void* const) ;
 void* FUNC_9 (char const*,size_t*) ;
 void* FUNC_10 (size_t) ;
 int FUNC_11 (char*,char const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_12(const char* VAR_2, const ZSTD_DDict* VAR_3)
{
    size_t VAR_4;
    void* const VAR_5 = FUNC_9(VAR_2, &VAR_4);






    unsigned long long const VAR_6 = FUNC_7(VAR_5, VAR_4);
    FUNC_0(VAR_6 != VAR_0, "%s: not compressed by zstd!", VAR_2);
    FUNC_0(VAR_6 != VAR_1, "%s: original size unknown!", VAR_2);
    void* const VAR_7 = FUNC_10((size_t)VAR_6);






    unsigned const VAR_8 = FUNC_5(VAR_3);
    unsigned const VAR_9 = FUNC_6(VAR_5, VAR_4);
    FUNC_0(VAR_9 == VAR_8,
          "DictID mismatch: expected %u got %u",
          VAR_8,
          VAR_9);






    ZSTD_DCtx* const VAR_10 = FUNC_2();
    FUNC_0(VAR_10 != ((void*)0), "ZSTD_createDCtx() failed!");
    size_t const VAR_11 = FUNC_3(VAR_10, VAR_7, VAR_6, VAR_5, VAR_4, VAR_3);
    FUNC_1(VAR_11);

    FUNC_0(VAR_11 == VAR_6, "Impossible because zstd will check this condition!");


    FUNC_11("%25s : %6u -> %7u \n", VAR_2, (unsigned)VAR_4, (unsigned)VAR_6);

    FUNC_4(VAR_10);
    FUNC_8(VAR_7);
    FUNC_8(VAR_5);
}
