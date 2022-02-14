
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ esm_size; int * esm_base; scalar_t__ esm_addr; int esm_tag; int esm_map; } ;
typedef TYPE_1__ efsys_mem_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

void
FUNC_3(efsys_mem_t *VAR_0)
{

 FUNC_1(VAR_0->esm_tag, VAR_0->esm_map);
 FUNC_2(VAR_0->esm_tag, VAR_0->esm_base, VAR_0->esm_map);
 FUNC_0(VAR_0->esm_tag);

 VAR_0->esm_addr = 0;
 VAR_0->esm_base = ((void*)0);
 VAR_0->esm_size = 0;
}
