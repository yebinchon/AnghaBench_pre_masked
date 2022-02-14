
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TS_RESP_CTX ;
typedef int ASN1_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_1 ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static ASN1_INTEGER *FUNC_4(TS_RESP_CTX *VAR_2, void *VAR_3)
{
    const char *VAR_4 = (const char *)VAR_3;
    ASN1_INTEGER *VAR_5 = FUNC_2(VAR_4);

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_2, VAR_1,
                                    "Error during serial number "
                                    "generation.");
        FUNC_0(VAR_2, VAR_0);
    } else {
        FUNC_3(VAR_4, VAR_5);
    }

    return VAR_5;
}
