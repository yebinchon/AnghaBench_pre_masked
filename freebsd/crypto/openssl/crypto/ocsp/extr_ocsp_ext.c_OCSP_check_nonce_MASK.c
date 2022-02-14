
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_EXTENSION ;
typedef int OCSP_REQUEST ;
typedef int OCSP_BASICRESP ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(OCSP_REQUEST *VAR_1, OCSP_BASICRESP *VAR_2)
{
    int VAR_3, VAR_4;
    X509_EXTENSION *VAR_5, *VAR_6;
    VAR_3 = FUNC_4(VAR_1, VAR_0, -1);
    VAR_4 = FUNC_2(VAR_2, VAR_0, -1);

    if ((VAR_3 < 0) && (VAR_4 < 0))
        return 2;

    if ((VAR_3 >= 0) && (VAR_4 < 0))
        return -1;

    if ((VAR_3 < 0) && (VAR_4 >= 0))
        return 3;



    VAR_5 = FUNC_3(VAR_1, VAR_3);
    VAR_6 = FUNC_1(VAR_2, VAR_4);
    if (FUNC_0(FUNC_5(VAR_5),
                              FUNC_5(VAR_6)))
        return 0;
    return 1;
}
