
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_cache {scalar_t__ num_reg_blocks; scalar_t__ num_quar; scalar_t__ super; } ;


 int FUNC_0 (char*,char*,int,int) ;

void
FUNC_1(struct alloc_cache* VAR_0)
{
 FUNC_0("%salloc: %d in cache, %d blocks.", VAR_0->super?"":"sup",
  (int)VAR_0->num_quar, (int)VAR_0->num_reg_blocks);
}
