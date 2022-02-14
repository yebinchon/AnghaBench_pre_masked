
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ivlabel ;
typedef int SSL ;
typedef int EVP_MD ;


 int FUNC_0 (int *,int const*,unsigned char const*,unsigned char const*,int,int *,int ,unsigned char*,size_t,int) ;

int FUNC_1(SSL *VAR_0, const EVP_MD *VAR_1, const unsigned char *VAR_2,
                    unsigned char *VAR_3, size_t VAR_4)
{



  static const unsigned char VAR_5[] = "iv";


    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, sizeof(VAR_5) - 1,
                             ((void*)0), 0, VAR_3, VAR_4, 1);
}
