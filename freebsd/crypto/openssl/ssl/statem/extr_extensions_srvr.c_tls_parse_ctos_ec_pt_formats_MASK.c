
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int peer_ecpointformats_len; int peer_ecpointformats; } ;
struct TYPE_6__ {TYPE_1__ ext; int hit; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;

int FUNC_4(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7,
                                 X509 *VAR_8, size_t VAR_9)
{
    PACKET VAR_10;

    if (!FUNC_0(VAR_6, &VAR_10)
        || FUNC_2(&VAR_10) == 0) {
        FUNC_3(VAR_5, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }

    if (!VAR_5->hit) {
        if (!FUNC_1(&VAR_10,
                           &VAR_5->ext.peer_ecpointformats,
                           &VAR_5->ext.peer_ecpointformats_len)) {
            FUNC_3(VAR_5, VAR_2,
                     VAR_3, VAR_0);
            return 0;
        }
    }

    return 1;
}
