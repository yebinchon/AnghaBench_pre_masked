
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_4__ {int key_update; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(SSL *VAR_4, WPACKET *VAR_5)
{
    if (!FUNC_1(VAR_5, VAR_4->key_update)) {
        FUNC_0(VAR_4, VAR_1, VAR_2,
                 VAR_0);
        return 0;
    }

    VAR_4->key_update = VAR_3;
    return 1;
}
