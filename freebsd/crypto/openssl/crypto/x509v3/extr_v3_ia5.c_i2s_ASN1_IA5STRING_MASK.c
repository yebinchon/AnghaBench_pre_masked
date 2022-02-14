
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ ASN1_IA5STRING ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int) ;

char *FUNC_3(X509V3_EXT_METHOD *VAR_2, ASN1_IA5STRING *VAR_3)
{
    char *VAR_4;

    if (!VAR_3 || !VAR_3->length)
        return ((void*)0);
    if ((VAR_4 = FUNC_0(VAR_3->length + 1)) == ((void*)0)) {
        FUNC_1(VAR_1, VAR_0);
        return ((void*)0);
    }
    FUNC_2(VAR_4, VAR_3->data, VAR_3->length);
    VAR_4[VAR_3->length] = 0;
    return VAR_4;
}
