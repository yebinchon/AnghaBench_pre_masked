
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;

int FUNC_8(BIO *VAR_1, SSL *VAR_2)
{
    int VAR_3;
    if (!FUNC_4(VAR_2))
        FUNC_7(VAR_1, VAR_2);
    FUNC_5(VAR_1, VAR_2, 0);
    FUNC_5(VAR_1, VAR_2, 1);
    if (FUNC_2(VAR_2, &VAR_3) && VAR_3 != VAR_0)
        FUNC_0(VAR_1, "Peer signing digest: %s\n", FUNC_1(VAR_3));
    if (FUNC_3(VAR_2, &VAR_3))
        FUNC_0(VAR_1, "Peer signature type: %s\n", FUNC_6(VAR_3));
    return 1;
}
