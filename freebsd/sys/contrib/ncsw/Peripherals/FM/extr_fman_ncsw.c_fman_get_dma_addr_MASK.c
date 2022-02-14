
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct fman_dma_regs {int fmdmtah; int fmdmtal; } ;


 scalar_t__ FUNC_0 (int *) ;

uint64_t FUNC_1(struct fman_dma_regs *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = (uint64_t)FUNC_0(&VAR_0->fmdmtal);
 VAR_1 |= ((uint64_t)(FUNC_0(&VAR_0->fmdmtah)) << 32);

 return VAR_1;
}
