
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int const* FUNC_1 () ;
 int const* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (unsigned char*,size_t) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (int const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_7(const EVP_MD *VAR_3,
                        const unsigned char *VAR_4, size_t VAR_5,
                        const unsigned char *VAR_6, size_t VAR_7,
                        unsigned char *VAR_8, size_t VAR_9)
{

    if (FUNC_0(VAR_3) == VAR_2) {
        size_t VAR_10;
        unsigned char *VAR_11;
        if (!FUNC_6(FUNC_1(), VAR_4, VAR_5/2 + (VAR_5 & 1),
                         VAR_6, VAR_7, VAR_8, VAR_9))
            return 0;

        if ((VAR_11 = FUNC_5(VAR_9)) == ((void*)0)) {
            FUNC_3(VAR_1, VAR_0);
            return 0;
        }
        if (!FUNC_6(FUNC_2(), VAR_4 + VAR_5/2, VAR_5/2 + (VAR_5 & 1),
                         VAR_6, VAR_7, VAR_11, VAR_9)) {
            FUNC_4(VAR_11, VAR_9);
            return 0;
        }
        for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
            VAR_8[VAR_10] ^= VAR_11[VAR_10];
        FUNC_4(VAR_11, VAR_9);
        return 1;
    }
    if (!FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
        return 0;

    return 1;
}
