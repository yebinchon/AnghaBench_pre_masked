
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int cmd_defns; int load_pubkey; int load_privkey; int ctrl; int finish; int init; int destroy; int pkey_meths; int digests; int ciphers; int rand_meth; int ec_meth; int dh_meth; int dsa_meth; int rsa_meth; int name; int id; } ;
typedef TYPE_1__ ENGINE ;



__attribute__((used)) static void FUNC_0(ENGINE *VAR_0, const ENGINE *VAR_1)
{
    VAR_0->id = VAR_1->id;
    VAR_0->name = VAR_1->name;

    VAR_0->rsa_meth = VAR_1->rsa_meth;


    VAR_0->dsa_meth = VAR_1->dsa_meth;


    VAR_0->dh_meth = VAR_1->dh_meth;


    VAR_0->ec_meth = VAR_1->ec_meth;

    VAR_0->rand_meth = VAR_1->rand_meth;
    VAR_0->ciphers = VAR_1->ciphers;
    VAR_0->digests = VAR_1->digests;
    VAR_0->pkey_meths = VAR_1->pkey_meths;
    VAR_0->destroy = VAR_1->destroy;
    VAR_0->init = VAR_1->init;
    VAR_0->finish = VAR_1->finish;
    VAR_0->ctrl = VAR_1->ctrl;
    VAR_0->load_privkey = VAR_1->load_privkey;
    VAR_0->load_pubkey = VAR_1->load_pubkey;
    VAR_0->cmd_defns = VAR_1->cmd_defns;
    VAR_0->flags = VAR_1->flags;
}
