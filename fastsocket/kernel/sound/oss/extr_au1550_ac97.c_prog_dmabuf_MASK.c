
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {unsigned int sample_rate; int ready; int mapped; int buforder; int cnt_factor; int sample_size; int num_channels; int src_factor; int user_bytes_per_sample; int dma_bytes_per_sample; int ossfragshift; int fragshift; int subdivision; int fragsize; int dma_fragsize; unsigned int numfrag; int ossmaxfrags; int dmasize; scalar_t__ rawbuf; scalar_t__ nextOut; scalar_t__ nextIn; scalar_t__ dma_qcount; scalar_t__ count; } ;
struct au1550_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static int
FUNC_4(struct au1550_state *VAR_3, struct dmabuf *VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7 = VAR_4->sample_rate;

 if (!VAR_4->rawbuf) {
  VAR_4->ready = VAR_4->mapped = 0;
  VAR_4->buforder = 5;
  VAR_4->rawbuf = FUNC_0((VAR_2 << VAR_4->buforder), VAR_1);
  if (!VAR_4->rawbuf)
   return -VAR_0;
 }

 VAR_4->cnt_factor = 1;
 if (VAR_4->sample_size == 8)
  VAR_4->cnt_factor *= 2;
 if (VAR_4->num_channels == 1)
  VAR_4->cnt_factor *= 2;
 VAR_4->cnt_factor *= VAR_4->src_factor;

 VAR_4->count = 0;
 VAR_4->dma_qcount = 0;
 VAR_4->nextIn = VAR_4->nextOut = VAR_4->rawbuf;

 VAR_4->user_bytes_per_sample = (VAR_4->sample_size>>3) * VAR_4->num_channels;
 VAR_4->dma_bytes_per_sample = 2 * ((VAR_4->num_channels == 1) ?
     2 : VAR_4->num_channels);

 VAR_5 = VAR_7 * VAR_4->user_bytes_per_sample;
 VAR_6 = VAR_2 << VAR_4->buforder;
 if (VAR_4->ossfragshift) {
  if ((1000 << VAR_4->ossfragshift) < VAR_5)
   VAR_4->fragshift = FUNC_1(VAR_5/1000);
  else
   VAR_4->fragshift = VAR_4->ossfragshift;
 } else {
  VAR_4->fragshift = FUNC_1(VAR_5 / 100 /
        (VAR_4->subdivision ? VAR_4->subdivision : 1));
  if (VAR_4->fragshift < 3)
   VAR_4->fragshift = 3;
 }

 VAR_4->fragsize = 1 << VAR_4->fragshift;
 VAR_4->dma_fragsize = VAR_4->fragsize * VAR_4->cnt_factor;
 VAR_4->numfrag = VAR_6 / VAR_4->dma_fragsize;

 while (VAR_4->numfrag < 4 && VAR_4->fragshift > 3) {
  VAR_4->fragshift--;
  VAR_4->fragsize = 1 << VAR_4->fragshift;
  VAR_4->dma_fragsize = VAR_4->fragsize * VAR_4->cnt_factor;
  VAR_4->numfrag = VAR_6 / VAR_4->dma_fragsize;
 }

 if (VAR_4->ossmaxfrags >= 4 && VAR_4->ossmaxfrags < VAR_4->numfrag)
  VAR_4->numfrag = VAR_4->ossmaxfrags;

 VAR_4->dmasize = VAR_4->dma_fragsize * VAR_4->numfrag;
 FUNC_2(VAR_4->rawbuf, 0, VAR_6);

 FUNC_3("prog_dmabuf: rate=%d, samplesize=%d, channels=%d\n",
     VAR_7, VAR_4->sample_size, VAR_4->num_channels);
 FUNC_3("prog_dmabuf: fragsize=%d, cnt_factor=%d, dma_fragsize=%d\n",
     VAR_4->fragsize, VAR_4->cnt_factor, VAR_4->dma_fragsize);
 FUNC_3("prog_dmabuf: numfrag=%d, dmasize=%d\n", VAR_4->numfrag, VAR_4->dmasize);

 VAR_4->ready = 1;
 return 0;
}
