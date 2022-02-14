
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscape_info {int lock; scalar_t__ dma_allocated; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2)
{
 struct sscape_info *VAR_3 = VAR_1;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock,VAR_4);
 if (VAR_3->dma_allocated)
 {
  FUNC_0(VAR_0, 0x20);
  VAR_3->dma_allocated = 0;
 }
 FUNC_2(&VAR_3->lock,VAR_4);
 return;
}
