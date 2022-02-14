
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ pitem ;
struct TYPE_10__ {int * packet; int rrec; int rbuf; int packet_length; } ;
struct TYPE_7__ {int * read_sequence; int rrec; int rbuf; int packet_length; int * packet; } ;
struct TYPE_9__ {TYPE_1__ rlayer; } ;
typedef int SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ DTLS1_RECORD_DATA ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_0, pitem *VAR_1)
{
    DTLS1_RECORD_DATA *VAR_2;

    VAR_2 = (DTLS1_RECORD_DATA *)VAR_1->data;

    FUNC_0(&VAR_0->rlayer.rbuf);

    VAR_0->rlayer.packet = VAR_2->packet;
    VAR_0->rlayer.packet_length = VAR_2->packet_length;
    FUNC_1(&VAR_0->rlayer.rbuf, &(VAR_2->rbuf), sizeof(SSL3_BUFFER));
    FUNC_1(&VAR_0->rlayer.rrec, &(VAR_2->rrec), sizeof(SSL3_RECORD));


    FUNC_1(&(VAR_0->rlayer.read_sequence[2]), &(VAR_2->packet[5]), 6);

    return 1;
}
