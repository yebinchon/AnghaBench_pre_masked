
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CMS_ContentInfo ;
typedef int ASN1_OCTET_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(CMS_ContentInfo *VAR_2)
{
    ASN1_OCTET_STRING **VAR_3 = FUNC_0(VAR_2);
    if (!VAR_3 || !*VAR_3) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    return 1;
}
