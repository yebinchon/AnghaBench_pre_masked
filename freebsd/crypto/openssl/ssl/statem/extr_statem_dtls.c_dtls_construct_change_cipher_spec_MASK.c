
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_6__ {scalar_t__ version; TYPE_1__* d1; } ;
struct TYPE_5__ {int handshake_write_seq; int next_handshake_write_seq; } ;
typedef TYPE_2__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(SSL *VAR_4, WPACKET *VAR_5)
{
    if (VAR_4->version == VAR_0) {
        VAR_4->d1->next_handshake_write_seq++;

        if (!FUNC_1(VAR_5, VAR_4->d1->handshake_write_seq)) {
            FUNC_0(VAR_4, VAR_2,
                     VAR_3,
                     VAR_1);
            return 0;
        }
    }

    return 1;
}
