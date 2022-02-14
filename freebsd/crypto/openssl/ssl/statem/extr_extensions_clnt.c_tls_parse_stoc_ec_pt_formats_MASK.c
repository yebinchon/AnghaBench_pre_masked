
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {size_t peer_ecpointformats_len; int * peer_ecpointformats; } ;
struct TYPE_6__ {TYPE_1__ ext; int hit; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;

int FUNC_6(SSL *VAR_6, PACKET *VAR_7, unsigned int VAR_8,
                                 X509 *VAR_9, size_t VAR_10)
{
    size_t VAR_11;
    PACKET VAR_12;

    if (!FUNC_2(VAR_7, &VAR_12)) {
        FUNC_5(VAR_6, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }
    if (!VAR_6->hit) {
        VAR_11 = FUNC_4(&VAR_12);
        if (VAR_11 == 0) {
            FUNC_5(VAR_6, VAR_1,
                     VAR_3, VAR_5);
            return 0;
        }

        VAR_6->ext.peer_ecpointformats_len = 0;
        FUNC_0(VAR_6->ext.peer_ecpointformats);
        VAR_6->ext.peer_ecpointformats = FUNC_1(VAR_11);
        if (VAR_6->ext.peer_ecpointformats == ((void*)0)) {
            FUNC_5(VAR_6, VAR_2,
                     VAR_3, VAR_0);
            return 0;
        }

        VAR_6->ext.peer_ecpointformats_len = VAR_11;

        if (!FUNC_3(&VAR_12,
                               VAR_6->ext.peer_ecpointformats,
                               VAR_11)) {
            FUNC_5(VAR_6, VAR_2,
                     VAR_3, VAR_0);
            return 0;
        }
    }

    return 1;
}
