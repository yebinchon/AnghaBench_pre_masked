
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int X509 ;
typedef int WPACKET ;
typedef int SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int const*,size_t) ;
 size_t FUNC_6 (int *,int,int const**) ;

EXT_RETURN FUNC_7(SSL *VAR_7, WPACKET *VAR_8,
                                       unsigned int VAR_9, X509 *VAR_10,
                                       size_t VAR_11)
{
    size_t VAR_12;
    const uint16_t *VAR_13;

    if (!FUNC_0(VAR_7))
        return VAR_2;

    VAR_12 = FUNC_6(VAR_7, 1, &VAR_13);
    if (!FUNC_3(VAR_8, VAR_6)

            || !FUNC_4(VAR_8)

            || !FUNC_4(VAR_8)
            || !FUNC_5(VAR_7, VAR_8, VAR_13, VAR_12)
            || !FUNC_2(VAR_8)
            || !FUNC_2(VAR_8)) {
        FUNC_1(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
