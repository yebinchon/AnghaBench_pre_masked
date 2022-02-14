
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {scalar_t__ sgd_addr; int * sgd_table; } ;
struct via_dma_op {int dummy; } ;
struct via_chinfo {scalar_t__ sgd_addr; int * sgd_table; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct via_info *VAR_1, struct via_chinfo *VAR_2, int VAR_3)
{
 VAR_2->sgd_table = &VAR_1->sgd_table[VAR_3 * VAR_0];
 VAR_2->sgd_addr = VAR_1->sgd_addr + VAR_3 * VAR_0 *
     sizeof(struct via_dma_op);
}
