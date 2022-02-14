
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,char*,char const*) ;
 int * FUNC_1 (char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static ASN1_OBJECT *FUNC_2(const char *VAR_1)
{
    ASN1_OBJECT *VAR_2 = ((void*)0);

    if ((VAR_2 = FUNC_1(VAR_1, 0)) == ((void*)0))
        FUNC_0(VAR_0, "cannot convert %s to OID\n", VAR_1);

    return VAR_2;
}
