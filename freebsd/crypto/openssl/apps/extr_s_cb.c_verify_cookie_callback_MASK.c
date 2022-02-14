
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,unsigned int) ;

int FUNC_2(SSL *VAR_2, const unsigned char *VAR_3,
                           unsigned int VAR_4)
{
    unsigned char VAR_5[VAR_0];
    unsigned int VAR_6;



    if (VAR_1
        && FUNC_0(VAR_2, VAR_5, &VAR_6)
        && VAR_4 == VAR_6
        && FUNC_1(VAR_5, VAR_3, VAR_6) == 0)
        return 1;

    return 0;
}
