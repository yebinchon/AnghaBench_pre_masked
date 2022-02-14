
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t const) ;
 unsigned long long const VAR_0 ;
 unsigned long long const VAR_1 ;
 size_t FUNC_2 (void* const,unsigned long long const,void* const,size_t) ;
 unsigned long long FUNC_3 (void* const,size_t) ;
 int FUNC_4 (void* const) ;
 void* FUNC_5 (char const*,size_t*) ;
 void* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char const*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_8(const char* VAR_2)
{
    size_t VAR_3;
    void* const VAR_4 = FUNC_5(VAR_2, &VAR_3);






    unsigned long long const VAR_5 = FUNC_3(VAR_4, VAR_3);
    FUNC_0(VAR_5 != VAR_0, "%s: not compressed by zstd!", VAR_2);
    FUNC_0(VAR_5 != VAR_1, "%s: original size unknown!", VAR_2);

    void* const VAR_6 = FUNC_6((size_t)VAR_5);






    size_t const VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_4, VAR_3);
    FUNC_1(VAR_7);

    FUNC_0(VAR_7 == VAR_5, "Impossible because zstd will check this condition!");


    FUNC_7("%25s : %6u -> %7u \n", VAR_2, (unsigned)VAR_3, (unsigned)VAR_5);

    FUNC_4(VAR_6);
    FUNC_4(VAR_4);
}
