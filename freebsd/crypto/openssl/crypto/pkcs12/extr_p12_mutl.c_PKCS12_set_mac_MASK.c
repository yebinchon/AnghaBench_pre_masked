
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mac; } ;
struct TYPE_6__ {int dinfo; } ;
typedef TYPE_2__ PKCS12 ;
typedef int EVP_MD ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,unsigned char*,int,int const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int **) ;
 int FUNC_5 (TYPE_2__*,char const*,int,unsigned char*,unsigned int*,int ) ;

int FUNC_6(PKCS12 *VAR_7, const char *VAR_8, int VAR_9,
                   unsigned char *VAR_10, int VAR_11, int VAR_12,
                   const EVP_MD *VAR_13)
{
    unsigned char VAR_14[VAR_0];
    unsigned int VAR_15;
    ASN1_OCTET_STRING *VAR_16;

    if (!VAR_13)
        VAR_13 = FUNC_1();
    if (FUNC_2(VAR_7, VAR_12, VAR_10, VAR_11, VAR_13) == VAR_1) {
        FUNC_3(VAR_2, VAR_4);
        return 0;
    }



    if (!FUNC_5(VAR_7, VAR_8, VAR_9, VAR_14, &VAR_15,
                        VAR_6)) {
        FUNC_3(VAR_2, VAR_3);
        return 0;
    }
    FUNC_4(VAR_7->mac->dinfo, ((void*)0), &VAR_16);
    if (!FUNC_0(VAR_16, VAR_14, VAR_15)) {
        FUNC_3(VAR_2, VAR_5);
        return 0;
    }
    return 1;
}
