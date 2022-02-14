
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prk ;
typedef int EVP_MD ;


 int VAR_0 ;
 unsigned char* FUNC_0 (int const*,unsigned char*,size_t,unsigned char const*,size_t,unsigned char*,size_t) ;
 int FUNC_1 (int const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,size_t*) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static unsigned char *FUNC_3(const EVP_MD *VAR_1,
                           const unsigned char *VAR_2, size_t VAR_3,
                           const unsigned char *VAR_4, size_t VAR_5,
                           const unsigned char *VAR_6, size_t VAR_7,
                           unsigned char *VAR_8, size_t VAR_9)
{
    unsigned char VAR_10[VAR_0];
    unsigned char *VAR_11;
    size_t VAR_12;

    if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_10, &VAR_12))
        return ((void*)0);

    VAR_11 = FUNC_0(VAR_1, VAR_10, VAR_12, VAR_6, VAR_7, VAR_8, VAR_9);
    FUNC_2(VAR_10, sizeof(VAR_10));

    return VAR_11;
}
