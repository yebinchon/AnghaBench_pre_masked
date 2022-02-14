
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct linux_dma_priv {int dmat; int ptree; } ;
struct linux_dma_obj {int dma_addr; int dmamap; } ;
struct device {struct linux_dma_priv* dma_priv; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (struct linux_dma_priv*) ;
 int FUNC_1 (struct linux_dma_priv*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,struct linux_dma_obj*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int ,int ,size_t,int ,TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (int ,int ,size_t) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 struct linux_dma_obj* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct linux_dma_obj*) ;

dma_addr_t
FUNC_11(struct device *VAR_3, vm_paddr_t VAR_4, size_t VAR_5)
{
 struct linux_dma_priv *VAR_6;
 struct linux_dma_obj *VAR_7;
 int VAR_8, VAR_9;
 bus_dma_segment_t VAR_10;

 VAR_6 = VAR_3->dma_priv;







 if (FUNC_5(VAR_6->dmat, VAR_4, VAR_5))
  return (VAR_4);

 VAR_7 = FUNC_9(VAR_2, VAR_1);
 if (VAR_7 == ((void*)0)) {
  return (0);
 }

 FUNC_0(VAR_6);
 if (FUNC_6(VAR_6->dmat, 0, &VAR_7->dmamap) != 0) {
  FUNC_1(VAR_6);
  FUNC_10(VAR_2, VAR_7);
  return (0);
 }

 VAR_9 = -1;
 if (FUNC_4(VAR_6->dmat, VAR_7->dmamap, VAR_4, VAR_5,
     VAR_0, &VAR_10, &VAR_9) != 0) {
  FUNC_7(VAR_6->dmat, VAR_7->dmamap);
  FUNC_1(VAR_6);
  FUNC_10(VAR_2, VAR_7);
  return (0);
 }

 FUNC_2(++VAR_9 == 1, ("More than one segment (nseg=%d)", VAR_9));
 VAR_7->dma_addr = VAR_10.ds_addr;

 VAR_8 = FUNC_3(&VAR_6->ptree, VAR_7);
 if (VAR_8 != 0) {
  FUNC_8(VAR_6->dmat, VAR_7->dmamap);
  FUNC_7(VAR_6->dmat, VAR_7->dmamap);
  FUNC_1(VAR_6);
  FUNC_10(VAR_2, VAR_7);
  return (0);
 }
 FUNC_1(VAR_6);
 return (VAR_7->dma_addr);
}
