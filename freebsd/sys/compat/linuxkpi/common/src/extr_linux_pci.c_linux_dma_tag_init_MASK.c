
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct linux_dma_priv {scalar_t__ dma_mask; scalar_t__ dmat; } ;
struct device {int bsddev; struct linux_dma_priv* dma_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,scalar_t__,int ,int *,int *,int ,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct device *VAR_2, u64 VAR_3)
{
 struct linux_dma_priv *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->dma_priv;

 if (VAR_4->dmat) {
  if (VAR_4->dma_mask == VAR_3)
   return (0);

  FUNC_1(VAR_4->dmat);
 }

 VAR_4->dma_mask = VAR_3;

 VAR_5 = FUNC_0(FUNC_2(VAR_2->bsddev),
     1, 0,
     VAR_3,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_1,
     1,
     VAR_1,
     0,
     ((void*)0), ((void*)0),
     &VAR_4->dmat);
 return (-VAR_5);
}
