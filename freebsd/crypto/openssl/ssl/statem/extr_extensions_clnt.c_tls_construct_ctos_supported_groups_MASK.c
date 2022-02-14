
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**,size_t*) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;

EXT_RETURN FUNC_7(SSL *VAR_8, WPACKET *VAR_9,
                                               unsigned int VAR_10, X509 *VAR_11,
                                               size_t VAR_12)
{
    const uint16_t *VAR_13 = ((void*)0);
    size_t VAR_14 = 0, VAR_15;

    if (!FUNC_6(VAR_8))
        return VAR_2;





    FUNC_4(VAR_8, &VAR_13, &VAR_14);

    if (!FUNC_2(VAR_9, VAR_7)

            || !FUNC_3(VAR_9)
            || !FUNC_3(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
        uint16_t VAR_16 = VAR_13[VAR_15];

        if (FUNC_5(VAR_8, VAR_16, VAR_6)) {
            if (!FUNC_2(VAR_9, VAR_16)) {
                    FUNC_0(VAR_8, VAR_4,
                             VAR_5,
                             VAR_0);
                    return VAR_1;
                }
        }
    }
    if (!FUNC_1(VAR_9) || !FUNC_1(VAR_9)) {
        FUNC_0(VAR_8, VAR_4,
                 VAR_5,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
