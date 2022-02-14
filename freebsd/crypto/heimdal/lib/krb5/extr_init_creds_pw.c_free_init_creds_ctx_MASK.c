
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* krb5_init_creds_context ;
typedef int krb5_context ;
struct TYPE_7__ {struct TYPE_7__* ppaid; int as_req; int error; int enc_part; int as_rep; int md; int cred; int req_buffer; struct TYPE_7__* password; struct TYPE_7__* keytab_data; struct TYPE_7__* in_tkt_service; struct TYPE_7__* pre_auth_types; struct TYPE_7__* etypes; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(krb5_context VAR_0, krb5_init_creds_context VAR_1)
{
    if (VAR_1->etypes)
 FUNC_0(VAR_1->etypes);
    if (VAR_1->pre_auth_types)
 FUNC_0 (VAR_1->pre_auth_types);
    if (VAR_1->in_tkt_service)
 FUNC_0(VAR_1->in_tkt_service);
    if (VAR_1->keytab_data)
 FUNC_0(VAR_1->keytab_data);
    if (VAR_1->password) {
 FUNC_9(VAR_1->password, 0, FUNC_10(VAR_1->password));
 FUNC_0(VAR_1->password);
    }
    FUNC_7(&VAR_1->req_buffer);
    FUNC_8(VAR_0, &VAR_1->cred);
    FUNC_5(&VAR_1->md);
    FUNC_1(&VAR_1->as_rep);
    FUNC_3(&VAR_1->enc_part);
    FUNC_4(&VAR_1->error);
    FUNC_2(&VAR_1->as_req);
    if (VAR_1->ppaid) {
 FUNC_6(VAR_0, VAR_1->ppaid);
 FUNC_0(VAR_1->ppaid);
    }
    FUNC_9(VAR_1, 0, sizeof(*VAR_1));
}
