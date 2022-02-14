
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int WPACKET ;
typedef int SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;

EXT_RETURN FUNC_2(SSL *VAR_6, WPACKET *VAR_7, unsigned int VAR_8,
                                  X509 *VAR_9, size_t VAR_10)
{
    if (!FUNC_1(VAR_7, VAR_5)
            || !FUNC_1(VAR_7, 0)) {
        FUNC_0(VAR_6, VAR_3, VAR_4,
                 VAR_0);
        return VAR_1;
    }

    return VAR_2;
}
