
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dmabuf {scalar_t__ count; scalar_t__ dmasize; scalar_t__ nextIn; scalar_t__ dma_fragsize; scalar_t__ rawbuf; int wait; int total_bytes; int dmanr; int error; } ;
struct au1550_state {int lock; struct dmabuf dma_adc; } ;


 int FUNC_0 (int ,void*,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct au1550_state*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(int VAR_0, void *VAR_1)
{
 struct au1550_state *VAR_2 = (struct au1550_state *)VAR_1;
 struct dmabuf *VAR_3 = &VAR_2->dma_adc;
 u32 VAR_4;
 char *VAR_5;

 FUNC_3(&VAR_2->lock);



 FUNC_0(VAR_3->dmanr, (void *)(&VAR_5), &VAR_4);

 if ((VAR_3->count + VAR_4) > VAR_3->dmasize) {


  FUNC_4(&VAR_2->lock);
  FUNC_5(VAR_2);
  VAR_3->error++;
  FUNC_2("adc overrun");
  return;
 }



 FUNC_1(VAR_3->dmanr, VAR_3->nextIn, VAR_3->dma_fragsize);

 VAR_3->nextIn += VAR_3->dma_fragsize;
 if (VAR_3->nextIn >= VAR_3->rawbuf + VAR_3->dmasize)
  VAR_3->nextIn -= VAR_3->dmasize;

 VAR_3->count += VAR_4;
 VAR_3->total_bytes += VAR_4;



 if (FUNC_6(&VAR_3->wait))
  FUNC_7(&VAR_3->wait);

 FUNC_4(&VAR_2->lock);
}
