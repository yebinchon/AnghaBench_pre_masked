
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fanout; int depth; int personal; int salt; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; scalar_t__ key_length; int digest_length; } ;
typedef TYPE_1__ BLAKE2S_PARAM ;
typedef int BLAKE2S_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(BLAKE2S_CTX *VAR_1)
{
    BLAKE2S_PARAM VAR_2[1];

    VAR_2->digest_length = VAR_0;
    VAR_2->key_length = 0;
    VAR_2->fanout = 1;
    VAR_2->depth = 1;
    FUNC_2(VAR_2->leaf_length, 0);
    FUNC_3(VAR_2->node_offset, 0);
    VAR_2->node_depth = 0;
    VAR_2->inner_length = 0;
    FUNC_1(VAR_2->salt, 0, sizeof(VAR_2->salt));
    FUNC_1(VAR_2->personal, 0, sizeof(VAR_2->personal));
    FUNC_0(VAR_1, VAR_2);
    return 1;
}
