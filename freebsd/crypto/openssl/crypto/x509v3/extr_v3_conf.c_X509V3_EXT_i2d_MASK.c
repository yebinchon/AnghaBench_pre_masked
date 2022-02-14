
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int X509V3_EXT_METHOD ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int const*,int,int,void*) ;

X509_EXTENSION *FUNC_3(int VAR_2, int VAR_3, void *VAR_4)
{
    const X509V3_EXT_METHOD *VAR_5;

    if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return ((void*)0);
    }
    return FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
}
