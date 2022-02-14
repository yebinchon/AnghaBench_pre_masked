
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;

EC_POINT *FUNC_3(const EC_POINT *VAR_0, const EC_GROUP *VAR_1)
{
    EC_POINT *VAR_2;
    int VAR_3;

    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 == ((void*)0))
        return ((void*)0);
    VAR_3 = FUNC_0(VAR_2, VAR_0);
    if (!VAR_3) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
