
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int FUNC_0 (int const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,unsigned int*) ;

__attribute__((used)) static unsigned char *FUNC_1(const EVP_MD *VAR_0,
                                   const unsigned char *VAR_1, size_t VAR_2,
                                   const unsigned char *VAR_3, size_t VAR_4,
                                   unsigned char *VAR_5, size_t *VAR_6)
{
    unsigned int VAR_7;

    if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7))
        return ((void*)0);

    *VAR_6 = VAR_7;
    return VAR_5;
}
