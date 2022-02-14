
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int) ;

BN_GENCB *FUNC_2(void)
{
    BN_GENCB *VAR_2;

    if ((VAR_2 = FUNC_1(sizeof(*VAR_2))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    return VAR_2;
}
