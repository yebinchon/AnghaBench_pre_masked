
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnsc_env {int dummy; } ;
struct comm_reply {int is_dnscrypted; int nmkey; int client_nonce; int * dnsc_cert; struct comm_point* c; } ;
struct comm_point {int buffer; int dnscrypt; } ;


 int VAR_0 ;
 int FUNC_0 (struct comm_reply*) ;
 int * FUNC_1 (struct dnsc_env*,int ) ;
 scalar_t__ FUNC_2 (struct dnsc_env*,int *,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(struct dnsc_env* VAR_1,
                           struct comm_reply* VAR_2)
{
    struct comm_point* VAR_3 = VAR_2->c;

    VAR_2->is_dnscrypted = 0;
    if( !VAR_3->dnscrypt ) {
        return 1;
    }


    FUNC_4(VAR_0, "handle request called on DNSCrypt socket");
    if ((VAR_2->dnsc_cert = FUNC_1(VAR_1, VAR_3->buffer)) != ((void*)0)) {
        if(FUNC_2(VAR_1,
                                   VAR_2->dnsc_cert,
                                   VAR_2->client_nonce,
                                   VAR_2->nmkey,
                                   VAR_3->buffer) != 0){
            FUNC_4(VAR_0, "dnscrypt: Failed to uncurve");
            FUNC_0(VAR_2);
            return 0;
        }
        VAR_2->is_dnscrypted = 1;
        FUNC_3(VAR_3->buffer);
    }
    return 1;
}
