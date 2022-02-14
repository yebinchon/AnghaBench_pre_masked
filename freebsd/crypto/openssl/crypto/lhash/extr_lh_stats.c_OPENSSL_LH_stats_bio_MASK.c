
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_hash_comps; int num_retrieve_miss; int num_retrieve; int num_no_delete; int num_delete; int num_replace; int num_insert; int num_comp_calls; int num_hash_calls; int num_contract_reallocs; int num_contracts; int num_expand_reallocs; int num_expands; int num_alloc_nodes; int num_nodes; int num_items; } ;
typedef TYPE_1__ OPENSSL_LHASH ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(const OPENSSL_LHASH *VAR_0, BIO *VAR_1)
{
    FUNC_0(VAR_1, "num_items             = %lu\n", VAR_0->num_items);
    FUNC_0(VAR_1, "num_nodes             = %u\n", VAR_0->num_nodes);
    FUNC_0(VAR_1, "num_alloc_nodes       = %u\n", VAR_0->num_alloc_nodes);
    FUNC_0(VAR_1, "num_expands           = %lu\n", VAR_0->num_expands);
    FUNC_0(VAR_1, "num_expand_reallocs   = %lu\n", VAR_0->num_expand_reallocs);
    FUNC_0(VAR_1, "num_contracts         = %lu\n", VAR_0->num_contracts);
    FUNC_0(VAR_1, "num_contract_reallocs = %lu\n", VAR_0->num_contract_reallocs);
    FUNC_0(VAR_1, "num_hash_calls        = %lu\n", VAR_0->num_hash_calls);
    FUNC_0(VAR_1, "num_comp_calls        = %lu\n", VAR_0->num_comp_calls);
    FUNC_0(VAR_1, "num_insert            = %lu\n", VAR_0->num_insert);
    FUNC_0(VAR_1, "num_replace           = %lu\n", VAR_0->num_replace);
    FUNC_0(VAR_1, "num_delete            = %lu\n", VAR_0->num_delete);
    FUNC_0(VAR_1, "num_no_delete         = %lu\n", VAR_0->num_no_delete);
    FUNC_0(VAR_1, "num_retrieve          = %lu\n", VAR_0->num_retrieve);
    FUNC_0(VAR_1, "num_retrieve_miss     = %lu\n", VAR_0->num_retrieve_miss);
    FUNC_0(VAR_1, "num_hash_comps        = %lu\n", VAR_0->num_hash_comps);
}
