
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iplen; int ip; } ;
typedef TYPE_1__ X509_VERIFY_PARAM ;


 int FUNC_0 (char**,int *,char*,size_t) ;

int FUNC_1(X509_VERIFY_PARAM *VAR_0,
                              const unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_2 != 0 && VAR_2 != 4 && VAR_2 != 16)
        return 0;
    return FUNC_0((char **)&VAR_0->ip, &VAR_0->iplen,
                               (char *)VAR_1, VAR_2);
}
