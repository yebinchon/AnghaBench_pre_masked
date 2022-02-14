
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ATTRIBUTE ;
struct TYPE_3__ {int attrib; } ;
typedef TYPE_1__ PKCS12_SAFEBAG ;
typedef int EVP_PKEY ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(PKCS12_SAFEBAG *VAR_0, EVP_PKEY *VAR_1, int VAR_2)
{
    int VAR_3;
    X509_ATTRIBUTE *VAR_4;
    VAR_3 = FUNC_1(VAR_1, VAR_2, -1);
    if (VAR_3 < 0)
        return 1;
    VAR_4 = FUNC_0(VAR_1, VAR_3);
    if (!FUNC_2(&VAR_0->attrib, VAR_4))
        return 0;
    return 1;
}
