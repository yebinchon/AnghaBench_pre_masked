
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int blake2b_state ;
struct TYPE_5__ {scalar_t__ digest_length; scalar_t__ key_length; int fanout; int depth; scalar_t__* reserved; scalar_t__* salt; scalar_t__* personal; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; } ;
typedef TYPE_1__ blake2b_param ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_5 (int *,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,void const*,scalar_t__ const) ;
 int FUNC_7 (scalar_t__*,int ,int) ;
 int FUNC_8 (scalar_t__*,int) ;
 int FUNC_9 () ;

int
FUNC_10(blake2b_state *VAR_3, const uint8_t VAR_4,
                               const void *VAR_5, const uint8_t VAR_6,
                               const void *VAR_7, const void *VAR_8)
{
    blake2b_param VAR_9[1];

    if ((!VAR_4) || (VAR_4 > VAR_2)) {
        FUNC_9();
    }
    if (!VAR_5 || !VAR_6 || VAR_6 > VAR_1) {
        FUNC_9();
    }
    VAR_9->digest_length = VAR_4;
    VAR_9->key_length = VAR_6;
    VAR_9->fanout = 1;
    VAR_9->depth = 1;
    FUNC_0(VAR_9->leaf_length, 0);
    FUNC_1(VAR_9->node_offset, 0);
    VAR_9->node_depth = 0;
    VAR_9->inner_length = 0;
    FUNC_7(VAR_9->reserved, 0, sizeof(VAR_9->reserved));
    if (VAR_7 != ((void*)0)) {
        FUNC_4(VAR_9, (const uint8_t *) VAR_7);
    } else {
        FUNC_7(VAR_9->salt, 0, sizeof(VAR_9->salt));
    }
    if (VAR_8 != ((void*)0)) {
        FUNC_3(VAR_9, (const uint8_t *) VAR_8);
    } else {
        FUNC_7(VAR_9->personal, 0, sizeof(VAR_9->personal));
    }

    if (FUNC_2(VAR_3, VAR_9) < 0) {
        FUNC_9();
    }
    {
        uint8_t VAR_10[VAR_0];
        FUNC_7(VAR_10, 0, VAR_0);
        FUNC_6(VAR_10, VAR_5, VAR_6);
        FUNC_5(VAR_3, VAR_10, VAR_0);
        FUNC_8(VAR_10, VAR_0);
    }
    return 0;
}
