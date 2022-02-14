
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {scalar_t__ nextIn; scalar_t__ dma_fragsize; scalar_t__ rawbuf; scalar_t__ dmasize; scalar_t__ stopped; int dmanr; int num_channels; } ;
struct au1550_state {struct dmabuf dma_adc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct au1550_state *VAR_3)
{
 struct dmabuf *VAR_4 = &VAR_3->dma_adc;
 int VAR_5;

 if (!VAR_4->stopped)
  return;



 for (VAR_5=0; VAR_5<2; VAR_5++) {
  FUNC_0(VAR_4->dmanr, VAR_4->nextIn, VAR_4->dma_fragsize);

  VAR_4->nextIn += VAR_4->dma_fragsize;
  if (VAR_4->nextIn >= VAR_4->rawbuf + VAR_4->dmasize)
   VAR_4->nextIn -= VAR_4->dmasize;
 }

 FUNC_4(VAR_4->num_channels);
 FUNC_1(VAR_4->dmanr);
 FUNC_3(VAR_1, VAR_0);
 FUNC_2();
 FUNC_3(VAR_2, VAR_0);
 FUNC_2();

 VAR_4->stopped = 0;
}
