
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TS_resp_ctx {int dummy; } ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct TS_resp_ctx*,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ASN1_INTEGER *FUNC_4(struct TS_resp_ctx *VAR_3, void *VAR_4)
{
    ASN1_INTEGER *VAR_5 = FUNC_0();

    if (VAR_5 == ((void*)0))
        goto err;
    if (!FUNC_1(VAR_5, 1))
        goto err;
    return VAR_5;

 err:
    FUNC_3(VAR_1, VAR_0);
    FUNC_2(VAR_3, VAR_2,
                                "Error during serial number generation.");
    return ((void*)0);
}
