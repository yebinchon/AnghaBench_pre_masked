
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_reply {int max_udp_size; TYPE_1__* c; int nmkey; int client_nonce; int dnsc_cert; int is_dnscrypted; } ;
struct TYPE_2__ {scalar_t__ type; int dnscrypt_buffer; int buffer; int dnscrypt; } ;


 int VAR_0 ;
 int FUNC_0 (struct comm_reply*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

int
FUNC_4(struct comm_reply *VAR_2)
{
    if(!VAR_2->c->dnscrypt) {
        return 1;
    }
    FUNC_2(VAR_2->c->dnscrypt_buffer, VAR_2->c->buffer);
    if(!VAR_2->is_dnscrypted) {
        return 1;
    }
 if(FUNC_1(VAR_2->dnsc_cert,
                             VAR_2->client_nonce,
                             VAR_2->nmkey,
                             VAR_2->c->dnscrypt_buffer,
                             VAR_2->c->type == VAR_1,
                             VAR_2->max_udp_size) != 0){
  FUNC_3(VAR_0, "dnscrypt: Failed to curve cached missed answer");
  FUNC_0(VAR_2);
  return 0;
 }
    return 1;
}
