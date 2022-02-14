
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {int vmem; } ;
struct axidma_softc {int dummy; } ;
struct axidma_channel {int descs_num; int mem_size; int mem_paddr; int mem_vaddr; int descs_phys; int descs; struct xdma_channel* xchan; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct axidma_softc *VAR_1, struct axidma_channel *VAR_2)
{
 struct xdma_channel *VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->descs_num;
 VAR_3 = VAR_2->xchan;

 FUNC_0(VAR_2->descs, VAR_0);
 FUNC_0(VAR_2->descs_phys, VAR_0);

 FUNC_2(VAR_2->mem_vaddr, VAR_2->mem_size);
 FUNC_1(VAR_2->mem_vaddr, VAR_2->mem_size);
 FUNC_3(VAR_3->vmem, VAR_2->mem_paddr, VAR_2->mem_size);

 return (0);
}
