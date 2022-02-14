
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {int pci; int playback_dma_buf; int capture_dma_buf; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hdsp *VAR_0)
{
 FUNC_0(&VAR_0->capture_dma_buf, VAR_0->pci);
 FUNC_0(&VAR_0->playback_dma_buf, VAR_0->pci);
}
