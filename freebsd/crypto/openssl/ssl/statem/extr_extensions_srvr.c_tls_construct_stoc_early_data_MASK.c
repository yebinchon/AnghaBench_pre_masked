
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {scalar_t__ early_data; } ;
struct TYPE_6__ {scalar_t__ max_early_data; TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;

EXT_RETURN FUNC_5(SSL *VAR_9, WPACKET *VAR_10,
                                         unsigned int VAR_11, X509 *VAR_12,
                                         size_t VAR_13)
{
    if (VAR_11 == VAR_6) {
        if (VAR_9->max_early_data == 0)
            return VAR_2;

        if (!FUNC_2(VAR_10, VAR_8)
                || !FUNC_4(VAR_10)
                || !FUNC_3(VAR_10, VAR_9->max_early_data)
                || !FUNC_1(VAR_10)) {
            FUNC_0(VAR_9, VAR_4,
                     VAR_7, VAR_0);
            return VAR_1;
        }

        return VAR_3;
    }

    if (VAR_9->ext.early_data != VAR_5)
        return VAR_2;

    if (!FUNC_2(VAR_10, VAR_8)
            || !FUNC_4(VAR_10)
            || !FUNC_1(VAR_10)) {
        FUNC_0(VAR_9, VAR_4, VAR_7,
                 VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
