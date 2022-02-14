
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef int EVP_MD ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (char const*,int,unsigned char const*,int,int,int const*,int,unsigned char*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2,
                                   const unsigned char *VAR_3, int VAR_4,
                                   int VAR_5, int VAR_6, unsigned char *VAR_7,
                                   const EVP_MD *VAR_8)
{
    unsigned char VAR_9[96];

    if (VAR_6 != VAR_0) {
        return 0;
    }

    if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                           VAR_8, sizeof(VAR_9), VAR_9)) {
        return 0;
    }
    FUNC_2(VAR_7, VAR_9 + sizeof(VAR_9) - VAR_0, VAR_0);
    FUNC_0(VAR_9, sizeof(VAR_9));
    return 1;
}
