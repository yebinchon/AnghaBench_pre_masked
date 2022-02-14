
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int hit; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int ) ;

int FUNC_4(SSL *VAR_3, PACKET *VAR_4, unsigned int VAR_5, X509 *VAR_6,
                            size_t VAR_7)
{
    PACKET VAR_8;

    if (!FUNC_0(VAR_4, &VAR_8)
            || FUNC_1(&VAR_8) == 0) {
        FUNC_2(VAR_3, VAR_0,
                 VAR_1, VAR_2);
        return 0;
    }

    if (!VAR_3->hit && !FUNC_3(VAR_3, &VAR_8, 0)) {
        FUNC_2(VAR_3, VAR_0,
                 VAR_1, VAR_2);
        return 0;
    }

    return 1;
}
