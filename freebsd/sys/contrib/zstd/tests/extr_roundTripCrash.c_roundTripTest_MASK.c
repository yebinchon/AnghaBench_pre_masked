
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,size_t) ;
 unsigned int FUNC_1 (void const*,size_t const,int ) ;
 size_t FUNC_2 (void*,size_t,void const*,size_t,int const) ;
 size_t FUNC_3 (void*,size_t,void*,size_t const) ;
 char* FUNC_4 (size_t const) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int FUNC_6 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_7(void* VAR_1, size_t VAR_2,
                            void* VAR_3, size_t VAR_4,
                      const void* VAR_5, size_t VAR_6)
{
    static const int VAR_7 = 19;
    size_t const VAR_8 = FUNC_0(128, VAR_6);
    unsigned const VAR_9 = FUNC_1(VAR_5, VAR_8, 0);
    int const VAR_10 = VAR_9 % VAR_7;
    size_t const VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
    if (FUNC_5(VAR_11)) {
        FUNC_6(VAR_0, "Compression error : %s \n", FUNC_4(VAR_11));
        return VAR_11;
    }
    return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_11);
}
