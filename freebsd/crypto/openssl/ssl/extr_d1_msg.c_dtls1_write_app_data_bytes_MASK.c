
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* handshake_func ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SSL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int,void const*,size_t,size_t*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(SSL *VAR_4, int VAR_5, const void *VAR_6, size_t VAR_7,
                               size_t *VAR_8)
{
    int VAR_9;

    if (FUNC_0(VAR_4) && !FUNC_3(VAR_4)) {
        VAR_9 = VAR_4->handshake_func(VAR_4);
        if (VAR_9 < 0)
            return VAR_9;
        if (VAR_9 == 0) {
            FUNC_1(VAR_1,
                   VAR_3);
            return -1;
        }
    }

    if (VAR_7 > VAR_0) {
        FUNC_1(VAR_1, VAR_2);
        return -1;
    }

    return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
