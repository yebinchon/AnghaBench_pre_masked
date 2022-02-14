
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct atiixp_info {scalar_t__ polling; } ;
struct atiixp_dma_op {int dummy; } ;
struct atiixp_chinfo {int blksz; int blkcnt; scalar_t__ sgd_addr; TYPE_1__* sgd_table; int buffer; struct atiixp_info* parent; } ;
struct TYPE_2__ {void* next; void* size; void* status; void* addr; } ;


 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct atiixp_chinfo *VAR_0)
{
 struct atiixp_info *VAR_1 = VAR_0->parent;
 uint32_t VAR_2, VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = FUNC_2(VAR_0->buffer);

 if (VAR_1->polling != 0) {
  VAR_3 = VAR_0->blksz * VAR_0->blkcnt;
  VAR_4 = 1;
 } else {
  VAR_3 = VAR_0->blksz;
  VAR_4 = VAR_0->blkcnt;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_0->sgd_table[VAR_5].addr = FUNC_1(VAR_2 + (VAR_5 * VAR_3));
  VAR_0->sgd_table[VAR_5].status = FUNC_0(0);
  VAR_0->sgd_table[VAR_5].size = FUNC_0(VAR_3 >> 2);
  VAR_0->sgd_table[VAR_5].next = FUNC_1((uint32_t)VAR_0->sgd_addr +
      (((VAR_5 + 1) % VAR_4) * sizeof(struct atiixp_dma_op)));
 }
}
