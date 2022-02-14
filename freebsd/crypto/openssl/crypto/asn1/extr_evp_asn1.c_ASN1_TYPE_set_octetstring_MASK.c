
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_TYPE ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int VAR_0 ;

int FUNC_4(ASN1_TYPE *VAR_1, unsigned char *VAR_2, int VAR_3)
{
    ASN1_STRING *VAR_4;

    if ((VAR_4 = FUNC_1()) == ((void*)0))
        return 0;
    if (!FUNC_2(VAR_4, VAR_2, VAR_3)) {
        FUNC_0(VAR_4);
        return 0;
    }
    FUNC_3(VAR_1, VAR_0, VAR_4);
    return 1;
}
