
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;
typedef int ECPKPARAMETERS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,unsigned char const**,long) ;

EC_GROUP *FUNC_5(EC_GROUP **VAR_3, const unsigned char **VAR_4, long VAR_5)
{
    EC_GROUP *VAR_6 = ((void*)0);
    ECPKPARAMETERS *VAR_7 = ((void*)0);
    const unsigned char *VAR_8 = *VAR_4;

    if ((VAR_7 = FUNC_4(((void*)0), &VAR_8, VAR_5)) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_1);
        FUNC_0(VAR_7);
        return ((void*)0);
    }

    if ((VAR_6 = FUNC_2(VAR_7)) == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        FUNC_0(VAR_7);
        return ((void*)0);
    }

    if (VAR_3) {
        FUNC_1(*VAR_3);
        *VAR_3 = VAR_6;
    }

    FUNC_0(VAR_7);
    *VAR_4 = VAR_8;
    return VAR_6;
}
