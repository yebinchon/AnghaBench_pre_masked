
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int ASN1_OCTET_STRING ;


 int ** FUNC_0 (int *) ;

int FUNC_1(CMS_ContentInfo *VAR_0)
{
    ASN1_OCTET_STRING **VAR_1;
    VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1)
        return -1;
    if (*VAR_1)
        return 0;
    return 1;
}
