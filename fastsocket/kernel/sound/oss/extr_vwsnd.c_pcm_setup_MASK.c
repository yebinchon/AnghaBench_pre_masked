
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int sw_samplefmt; int sample_size; unsigned int zero_word; int frame_size; int sw_channels; int hw_fragshift; int sw_fragshift; int sw_subdivshift; int hw_fragsize; int hw_fragcount; int sw_fragcount; int hwbuf_max; void* hwbuf_size; int swbuf_size; int swb_u_avail; int swb_i_avail; int flags; int sw_framerate; int hwbuf_paddr; int chan; void* swstate; int MSC_offset; int hwstate; scalar_t__ byte_count; scalar_t__ swb_i_idx; scalar_t__ swb_u_idx; int * swbuf; } ;
typedef TYPE_1__ vwsnd_port_t ;
struct TYPE_12__ {int lith; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct TYPE_13__ {int msc; } ;
typedef TYPE_3__ ustmsc_t ;







 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 () ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,int *,int *,int ,int ,int,int,int) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(vwsnd_dev_t *VAR_14,
       vwsnd_port_t *VAR_15,
       vwsnd_port_t *VAR_16)
{
 vwsnd_port_t *VAR_17 = VAR_15 ? VAR_15 : VAR_16;
 int VAR_18;
 unsigned int VAR_19;

 FUNC_1("(devc=0x%p, rport=0x%p, wport=0x%p)\n", VAR_14, VAR_15, VAR_16);

 FUNC_0(VAR_17 != ((void*)0));
 if (VAR_17->swbuf != ((void*)0))
  return 0;
 switch (VAR_17->sw_samplefmt) {
 case 131:
  VAR_18 = 1;
  VAR_19 = 0xFFFFFFFF ^ 0x80808080;
  break;

 case 132:
  VAR_18 = 1;
  VAR_19 = 0xD5D5D5D5 ^ 0x80808080;
  break;

 case 128:
  VAR_18 = 1;
  VAR_19 = 0x80808080;
  break;

 case 129:
  VAR_18 = 1;
  VAR_19 = 0x00000000;
  break;

 case 130:
  VAR_18 = 2;
  VAR_19 = 0x00000000;
  break;

 default:
  VAR_18 = 0;
  VAR_19 = 0;
  FUNC_0(0);
 }
 VAR_17->sample_size = VAR_18;
 VAR_17->zero_word = VAR_19;
 VAR_17->frame_size = VAR_17->sw_channels * VAR_17->sample_size;
 VAR_17->hw_fragshift = VAR_17->sw_fragshift - VAR_17->sw_subdivshift;
 VAR_17->hw_fragsize = 1 << VAR_17->hw_fragshift;
 VAR_17->hw_fragcount = VAR_17->sw_fragcount << VAR_17->sw_subdivshift;
 FUNC_0(VAR_17->hw_fragsize >= VAR_7);
 FUNC_0(VAR_17->hw_fragsize <= VAR_6);
 FUNC_0(VAR_17->hw_fragcount >= FUNC_5(VAR_17->hw_fragsize));
 FUNC_0(VAR_17->hw_fragcount <= FUNC_4(VAR_17->hw_fragsize));
 if (VAR_15) {
  int VAR_20, VAR_21;
  VAR_15->hwbuf_max = VAR_17->hwbuf_size - VAR_1;
  VAR_20 = VAR_15->hwbuf_max >> VAR_17->hw_fragshift;
  VAR_21 = VAR_17->hw_fragcount - VAR_20;
  if (VAR_21 < 2)
   VAR_21 = 2;
  VAR_15->swbuf_size = VAR_21 * VAR_17->hw_fragsize;
  FUNC_2("hwfrags = %d, swfrags = %d\n", VAR_20, VAR_21);
  FUNC_2("read hwbuf_max = %d, swbuf_size = %d\n",
       VAR_15->hwbuf_max, VAR_15->swbuf_size);
 }
 if (VAR_16) {
  int VAR_22, VAR_23;
  int VAR_24 = VAR_17->hw_fragcount * VAR_17->hw_fragsize;
  VAR_16->hwbuf_max = VAR_17->hwbuf_size - VAR_1;
  if (VAR_16->hwbuf_max > VAR_24)
   VAR_16->hwbuf_max = VAR_24;
  VAR_22 = VAR_16->hwbuf_max >> VAR_17->hw_fragshift;
  FUNC_2("hwfrags = %d\n", VAR_22);
  VAR_23 = VAR_17->hw_fragcount - VAR_22;
  if (VAR_23 < 2)
   VAR_23 = 2;
  VAR_16->swbuf_size = VAR_23 * VAR_17->hw_fragsize;
  FUNC_2("hwfrags = %d, swfrags = %d\n", VAR_22, VAR_23);
  FUNC_2("write hwbuf_max = %d, swbuf_size = %d\n",
       VAR_16->hwbuf_max, VAR_16->swbuf_size);
 }

 VAR_17->swb_u_idx = 0;
 VAR_17->swb_i_idx = 0;
 VAR_17->byte_count = 0;
 VAR_17->swbuf = FUNC_13(VAR_17->swbuf_size + VAR_8);
 if (!VAR_17->swbuf)
  return -VAR_2;
 if (VAR_15 && VAR_16) {
  FUNC_0(VAR_17 == VAR_15);
  FUNC_0(VAR_16->swbuf == ((void*)0));

  VAR_16->swbuf = FUNC_13(VAR_17->swbuf_size + VAR_8);
  if (!VAR_16->swbuf) {
   FUNC_12(VAR_17->swbuf);
   VAR_17->swbuf = ((void*)0);
   return -VAR_2;
  }
  VAR_16->sample_size = VAR_15->sample_size;
  VAR_16->zero_word = VAR_15->zero_word;
  VAR_16->frame_size = VAR_15->frame_size;
  VAR_16->hw_fragshift = VAR_15->hw_fragshift;
  VAR_16->hw_fragsize = VAR_15->hw_fragsize;
  VAR_16->hw_fragcount = VAR_15->hw_fragcount;
  VAR_16->swbuf_size = VAR_15->swbuf_size;
  VAR_16->hwbuf_max = VAR_15->hwbuf_max;
  VAR_16->swb_u_idx = VAR_15->swb_u_idx;
  VAR_16->swb_i_idx = VAR_15->swb_i_idx;
  VAR_16->byte_count = VAR_15->byte_count;
 }
 if (VAR_15) {
  VAR_15->swb_u_avail = 0;
  VAR_15->swb_i_avail = VAR_15->swbuf_size;
  VAR_15->swstate = VAR_10;
  FUNC_11(&VAR_15->chan,
        &VAR_12,
        &VAR_14->lith,
        VAR_15->hwbuf_paddr,
        VAR_4,
        VAR_15->hw_fragshift,
        VAR_15->sw_channels,
        VAR_15->sample_size);
  FUNC_6(&VAR_14->lith,
     VAR_15->sw_framerate,
     VAR_15->sw_samplefmt,
     VAR_15->sw_channels);
  FUNC_9(&VAR_14->lith, VAR_9);
  if (!(VAR_15->flags & VAR_0)) {
   ustmsc_t VAR_25;
   VAR_15->hwstate = VAR_5;
   FUNC_8(&VAR_15->chan);
   FUNC_10(&VAR_15->chan, &VAR_25);
   VAR_15->MSC_offset = VAR_25.msc;
  }
 }
 if (VAR_16) {
  if (VAR_16->hwbuf_max > VAR_16->swbuf_size)
   VAR_16->hwbuf_max = VAR_16->swbuf_size;
  VAR_16->flags &= ~VAR_3;
  VAR_16->swb_u_avail = VAR_16->swbuf_size;
  VAR_16->swb_i_avail = 0;
  VAR_16->swstate = VAR_10;
  FUNC_11(&VAR_16->chan,
        &VAR_13,
        &VAR_14->lith,
        VAR_16->hwbuf_paddr,
        VAR_4,
        VAR_16->hw_fragshift,
        VAR_16->sw_channels,
        VAR_16->sample_size);
  FUNC_7(&VAR_14->lith,
     VAR_16->sw_framerate,
     VAR_16->sw_samplefmt,
     VAR_16->sw_channels);
  FUNC_9(&VAR_14->lith, VAR_11);
 }
 FUNC_3();
 return 0;
}
