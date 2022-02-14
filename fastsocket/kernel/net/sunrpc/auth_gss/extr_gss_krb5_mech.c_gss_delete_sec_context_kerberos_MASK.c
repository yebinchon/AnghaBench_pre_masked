
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct krb5_ctx* data; } ;
struct krb5_ctx {TYPE_1__ mech_used; int initiator_enc_aux; int acceptor_enc_aux; int initiator_enc; int acceptor_enc; int enc; int seq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct krb5_ctx*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0) {
 struct krb5_ctx *VAR_1 = VAR_0;

 FUNC_0(VAR_1->seq);
 FUNC_0(VAR_1->enc);
 FUNC_0(VAR_1->acceptor_enc);
 FUNC_0(VAR_1->initiator_enc);
 FUNC_0(VAR_1->acceptor_enc_aux);
 FUNC_0(VAR_1->initiator_enc_aux);
 FUNC_1(VAR_1->mech_used.data);
 FUNC_1(VAR_1);
}
