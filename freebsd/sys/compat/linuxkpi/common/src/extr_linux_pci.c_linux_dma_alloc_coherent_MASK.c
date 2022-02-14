
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
struct linux_dma_priv {scalar_t__ dma_mask; } ;
struct device {struct linux_dma_priv* dma_priv; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t,int,int ,scalar_t__,size_t,int ,int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (struct device*,int ,size_t) ;
 int FUNC_4 (void*) ;

void *
FUNC_5(struct device *VAR_5, size_t VAR_6,
    dma_addr_t *VAR_7, gfp_t VAR_8)
{
 struct linux_dma_priv *VAR_9;
 vm_paddr_t VAR_10;
 size_t VAR_11;
 void *VAR_12;

 if (VAR_5 == ((void*)0) || VAR_5->dma_priv == ((void*)0)) {
  *VAR_7 = 0;
  return (((void*)0));
 }
 VAR_9 = VAR_5->dma_priv;
 if (VAR_9->dma_mask)
  VAR_10 = VAR_9->dma_mask;
 else if (VAR_8 & VAR_2)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_0;
 VAR_11 = VAR_3 << FUNC_0(VAR_6);
 VAR_12 = (void *)FUNC_1(VAR_6, VAR_8, 0, VAR_10, VAR_11, 0,
     VAR_4);
 if (VAR_12 != ((void*)0)) {
  *VAR_7 = FUNC_3(VAR_5, FUNC_4(VAR_12), VAR_6);
  if (*VAR_7 == 0) {
   FUNC_2((vm_offset_t)VAR_12, VAR_6);
   VAR_12 = ((void*)0);
  }
 } else {
  *VAR_7 = 0;
 }
 return (VAR_12);
}
