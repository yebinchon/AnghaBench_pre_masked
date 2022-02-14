
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_riptide {int lock; struct cmdif* cif; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int channels; unsigned int format; unsigned int rate; int period_size; int buffer_size; } ;
struct sgd {void* dwSegLen; void* dwStat_Ctl; void* dwSegPtrPhys; void* dwNextLink; } ;
struct TYPE_4__ {unsigned int addr; scalar_t__ area; } ;
struct TYPE_3__ {unsigned char* noconv; unsigned char* mono; unsigned char* stereo; } ;
struct pcmhw {unsigned int id; unsigned int size; unsigned int pages; unsigned char* lbuspath; unsigned int rate; scalar_t__ format; unsigned int channels; int intdec; int mixer; int source; struct sgd* sgdbuf; TYPE_2__ sgdlist; TYPE_1__ paths; } ;
struct cmdif {int dummy; } ;
typedef scalar_t__ snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct cmdif*,int ,unsigned char*,int *,int ) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (struct cmdif*,int ,unsigned char*) ;
 struct pcmhw* FUNC_4 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_5 (struct cmdif*,int ,unsigned int,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_6 (struct cmdif*,int ,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*,unsigned int) ;
 struct snd_riptide* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (char*,unsigned int,...) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_8)
{
 struct snd_riptide *VAR_9 = FUNC_9(VAR_8);
 struct snd_pcm_runtime *VAR_10 = VAR_8->runtime;
 struct pcmhw *VAR_11 = FUNC_4(VAR_8);
 struct cmdif *VAR_12 = VAR_9->cif;
 unsigned char *VAR_13 = ((void*)0);
 unsigned int VAR_14, VAR_15;
 int VAR_16 = 0;
 snd_pcm_format_t VAR_17;

 if (FUNC_7(!VAR_12 || !VAR_11))
  return -VAR_0;

 FUNC_10("prepare id %d ch: %d f:0x%x r:%d\n", VAR_11->id,
      VAR_10->channels, VAR_10->format, VAR_10->rate);

 FUNC_11(&VAR_9->lock);
 VAR_15 = VAR_10->channels;
 VAR_17 = VAR_10->format;
 VAR_14 = VAR_10->rate;
 switch (VAR_15) {
 case 1:
  if (VAR_14 == 48000 && VAR_17 == VAR_7)
   VAR_13 = VAR_11->paths.noconv;
  else
   VAR_13 = VAR_11->paths.mono;
  break;
 case 2:
  if (VAR_14 == 48000 && VAR_17 == VAR_7)
   VAR_13 = VAR_11->paths.noconv;
  else
   VAR_13 = VAR_11->paths.stereo;
  break;
 }
 FUNC_10("use sgdlist at 0x%p\n",
      VAR_11->sgdlist.area);
 if (VAR_11->sgdlist.area) {
  unsigned int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
  struct sgd *VAR_25, *VAR_26 = ((void*)0);

  VAR_20 = FUNC_2(VAR_10, VAR_10->buffer_size);
  VAR_24 = FUNC_2(VAR_10, VAR_10->period_size);
  VAR_22 = VAR_6;
  while ((VAR_20 + (VAR_22 >> 1) - 1) <= (VAR_22 << 7) && (VAR_22 << 1) > VAR_24)
   VAR_22 = VAR_22 >> 1;
  VAR_21 = (VAR_20 + VAR_22 - 1) / VAR_22;
  VAR_11->size = VAR_20;
  VAR_11->pages = VAR_21;
  FUNC_10
      ("create sgd size: 0x%x pages %d of size 0x%x for period 0x%x\n",
       VAR_20, VAR_21, VAR_22, VAR_24);
  VAR_23 = 0;
  VAR_19 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++) {
   unsigned int VAR_27, VAR_28;
   VAR_25 = &VAR_11->sgdbuf[VAR_18];
   if (VAR_26)
    VAR_26->dwNextLink = FUNC_1(VAR_11->sgdlist.addr +
           (VAR_18 *
            sizeof(struct
            sgd)));
   VAR_25->dwNextLink = FUNC_1(VAR_11->sgdlist.addr);
   VAR_27 = VAR_19 << VAR_5;
   VAR_28 = FUNC_8(VAR_8, VAR_27) + VAR_23;
   VAR_25->dwSegPtrPhys = FUNC_1(VAR_28);
   VAR_23 = (VAR_23 + VAR_22) % VAR_6;
   if (VAR_23 == 0)
    VAR_19++;
   VAR_25->dwSegLen = FUNC_1(VAR_22);
   VAR_25->dwStat_Ctl =
       FUNC_1(VAR_2 | VAR_4 |
     VAR_3);
   VAR_26 = VAR_25;
   VAR_20 -= VAR_22;
  }
  VAR_11->sgdbuf[VAR_18].dwSegLen = FUNC_1(VAR_20);
 }
 if (VAR_13 && VAR_13 != VAR_11->lbuspath) {
  if (VAR_11->lbuspath)
   FUNC_3(VAR_12, VAR_11->source, VAR_11->lbuspath);
  FUNC_0(VAR_12, VAR_11->source, VAR_13,
         &VAR_11->mixer, VAR_11->intdec);
  VAR_11->lbuspath = VAR_13;
  VAR_11->rate = 0;
 }
 if (VAR_11->rate != VAR_14 || VAR_11->format != VAR_17 ||
     VAR_11->channels != VAR_15) {
  VAR_11->rate = VAR_14;
  VAR_11->format = VAR_17;
  VAR_11->channels = VAR_15;
  if (FUNC_5
      (VAR_12, VAR_11->mixer, VAR_11->id, VAR_15, VAR_17)
      || FUNC_6(VAR_12, VAR_11->intdec, VAR_14))
   VAR_16 = -VAR_1;
 }
 FUNC_12(&VAR_9->lock);
 return VAR_16;
}
