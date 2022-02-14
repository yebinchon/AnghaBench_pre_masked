
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ flags; int * cmd_defns; int * load_pubkey; int * load_privkey; int * ctrl; int * finish; int * init; int * destroy; int * digests; int * ciphers; int * rand_meth; int * dh_meth; int * dsa_meth; int * rsa_meth; int * name; int * id; } ;
typedef TYPE_1__ ENGINE ;



void FUNC_0(ENGINE *VAR_0)
{
    VAR_0->id = ((void*)0);
    VAR_0->name = ((void*)0);
    VAR_0->rsa_meth = ((void*)0);
    VAR_0->dsa_meth = ((void*)0);
    VAR_0->dh_meth = ((void*)0);
    VAR_0->rand_meth = ((void*)0);
    VAR_0->ciphers = ((void*)0);
    VAR_0->digests = ((void*)0);
    VAR_0->destroy = ((void*)0);
    VAR_0->init = ((void*)0);
    VAR_0->finish = ((void*)0);
    VAR_0->ctrl = ((void*)0);
    VAR_0->load_privkey = ((void*)0);
    VAR_0->load_pubkey = ((void*)0);
    VAR_0->cmd_defns = ((void*)0);
    VAR_0->flags = 0;
}
