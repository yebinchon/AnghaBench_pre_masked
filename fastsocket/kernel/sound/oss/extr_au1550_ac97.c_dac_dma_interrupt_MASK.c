
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmabuf {scalar_t__ count; scalar_t__ fragsize; scalar_t__ nextOut; scalar_t__ rawbuf; scalar_t__ dmasize; int wait; int dma_qcount; scalar_t__ dma_fragsize; int total_bytes; int dmanr; } ;
struct au1550_state {int lock; struct dmabuf dma_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(int VAR_4, void *VAR_5)
{
 struct au1550_state *VAR_6 = (struct au1550_state *) VAR_5;
 struct dmabuf *VAR_7 = &VAR_6->dma_dac;
 u32 VAR_8;

 FUNC_4(&VAR_6->lock);

 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 & (VAR_2 | VAR_1 | VAR_0))
  FUNC_3("AC97C status = 0x%08x\n", VAR_8);
 VAR_7->dma_qcount--;

 if (VAR_7->count >= VAR_7->fragsize) {
  if (FUNC_0(VAR_7->dmanr, VAR_7->nextOut,
       VAR_7->fragsize) == 0) {
   FUNC_2("qcount < 2 and no ring room!");
  }
  VAR_7->nextOut += VAR_7->fragsize;
  if (VAR_7->nextOut >= VAR_7->rawbuf + VAR_7->dmasize)
   VAR_7->nextOut -= VAR_7->dmasize;
  VAR_7->count -= VAR_7->fragsize;
  VAR_7->total_bytes += VAR_7->dma_fragsize;
  VAR_7->dma_qcount++;
 }


 if (FUNC_6(&VAR_7->wait))
  FUNC_7(&VAR_7->wait);

 FUNC_5(&VAR_6->lock);
}
