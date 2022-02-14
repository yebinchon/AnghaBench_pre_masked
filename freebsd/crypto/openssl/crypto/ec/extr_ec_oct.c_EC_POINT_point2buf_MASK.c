
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int point_conversion_form_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 int VAR_0 ;
 size_t FUNC_0 (int const*,int const*,int ,unsigned char*,size_t,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;

size_t FUNC_4(const EC_GROUP *VAR_2, const EC_POINT *VAR_3,
                          point_conversion_form_t VAR_4,
                          unsigned char **VAR_5, BN_CTX *VAR_6)
{
    size_t VAR_7;
    unsigned char *VAR_8;

    VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0), 0, ((void*)0));
    if (VAR_7 == 0)
        return 0;
    if ((VAR_8 = FUNC_3(VAR_7)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }
    VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_8, VAR_7, VAR_6);
    if (VAR_7 == 0) {
        FUNC_2(VAR_8);
        return 0;
    }
    *VAR_5 = VAR_8;
    return VAR_7;
}
