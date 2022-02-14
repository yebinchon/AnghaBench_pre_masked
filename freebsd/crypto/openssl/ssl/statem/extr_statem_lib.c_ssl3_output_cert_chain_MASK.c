
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;
typedef int SSL ;
typedef int CERT_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;

unsigned long FUNC_4(SSL *VAR_3, WPACKET *VAR_4, CERT_PKEY *VAR_5)
{
    if (!FUNC_2(VAR_4)) {
        FUNC_0(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    if (!FUNC_3(VAR_3, VAR_4, VAR_5))
        return 0;

    if (!FUNC_1(VAR_4)) {
        FUNC_0(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    return 1;
}
