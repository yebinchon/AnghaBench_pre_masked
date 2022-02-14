
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obj_txt ;
typedef int BIO ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,int,int const*,int ) ;

int FUNC_2(BIO *VAR_0, const ASN1_OBJECT *VAR_1)
{
    char VAR_2[128];

    FUNC_1(VAR_2, sizeof(VAR_2), VAR_1, 0);
    FUNC_0(VAR_0, "%s\n", VAR_2);

    return 1;
}
