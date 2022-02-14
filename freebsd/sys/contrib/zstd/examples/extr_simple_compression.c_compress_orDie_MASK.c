
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t const) ;
 size_t FUNC_1 (void* const,size_t const,void* const,size_t,int) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (void* const) ;
 void* FUNC_4 (char const*,size_t*) ;
 void* FUNC_5 (size_t const) ;
 int FUNC_6 (char*,char const*,unsigned int,unsigned int,char const*) ;
 int FUNC_7 (char const*,void* const,size_t const) ;

__attribute__((used)) static void FUNC_8(const char* VAR_0, const char* VAR_1)
{
    size_t VAR_2;
    void* const VAR_3 = FUNC_4(VAR_0, &VAR_2);
    size_t const VAR_4 = FUNC_2(VAR_2);
    void* const VAR_5 = FUNC_5(VAR_4);





    size_t const VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_3, VAR_2, 1);
    FUNC_0(VAR_6);

    FUNC_7(VAR_1, VAR_5, VAR_6);


    FUNC_6("%25s : %6u -> %7u - %s \n", VAR_0, (unsigned)VAR_2, (unsigned)VAR_6, VAR_1);

    FUNC_3(VAR_3);
    FUNC_3(VAR_5);
}
