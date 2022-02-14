
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {int dma_fragsize; int dmanr; scalar_t__ stopped; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct dmabuf *VAR_0)
{
 if (VAR_0->stopped)
  return 0;

 return VAR_0->dma_fragsize - FUNC_0(VAR_0->dmanr);
}
