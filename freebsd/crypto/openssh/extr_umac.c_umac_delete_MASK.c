
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umac_ctx {scalar_t__ free_ptr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct umac_ctx*,scalar_t__) ;
 int FUNC_1 (struct umac_ctx*) ;

int FUNC_2(struct umac_ctx *VAR_1)

{
    if (VAR_1) {
        if (VAR_0)
            VAR_1 = (struct umac_ctx *)VAR_1->free_ptr;
        FUNC_0(VAR_1, sizeof(*VAR_1) + VAR_0);
        FUNC_1(VAR_1);
    }
    return (1);
}
