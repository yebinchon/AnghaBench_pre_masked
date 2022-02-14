
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_sw_params {int start_threshold; int stop_threshold; int period_step; int avail_min; void* silence_size; void* silence_threshold; int tstamp_mode; } ;
struct snd_pcm_substream {scalar_t__ stream; int mmap_count; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int boundary; int buffer_size; int period_size; int dma_bytes; scalar_t__ dma_area; int format; } ;
struct snd_pcm_plugin {int dummy; } ;
struct snd_pcm_hw_params {int start_threshold; int stop_threshold; int period_step; int avail_min; void* silence_size; void* silence_threshold; int tstamp_mode; } ;
struct snd_mask {int dummy; } ;
typedef size_t ssize_t ;
typedef void* snd_pcm_uframes_t ;
struct TYPE_8__ {int rate; int channels; size_t period_bytes; int periods; size_t buffer_bytes; int prepare; int params_lock; int period_frames; scalar_t__ buffer_used; scalar_t__ params; int buffer; int format; scalar_t__ plugin_first; scalar_t__ trigger; } ;
struct TYPE_10__ {TYPE_3__ oss; } ;
struct TYPE_6__ {int direct; scalar_t__ nosilence; } ;
struct TYPE_7__ {TYPE_1__ setup; } ;
struct TYPE_9__ {TYPE_2__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct snd_pcm_sw_params*,int ,int,int ) ;
 int FUNC_1 (struct snd_pcm_sw_params*,int ,int,int ) ;
 int FUNC_2 (struct snd_pcm_sw_params*,int ) ;
 int FUNC_3 (struct snd_pcm_sw_params*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,int) ;
 struct snd_mask* FUNC_7 (struct snd_pcm_sw_params*,int ) ;
 int FUNC_8 (struct snd_pcm_sw_params*) ;
 struct snd_pcm_sw_params* FUNC_9 (int,int ) ;
 int FUNC_10 (struct snd_pcm_sw_params*,struct snd_pcm_sw_params*,int) ;
 int FUNC_11 (struct snd_pcm_sw_params*,int ,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_5__* FUNC_14 (struct snd_pcm_runtime*) ;
 TYPE_4__* FUNC_15 (struct snd_pcm_substream*) ;
 int FUNC_16 (struct snd_pcm_sw_params*) ;
 size_t FUNC_17 (struct snd_pcm_sw_params*) ;
 int FUNC_18 (struct snd_pcm_sw_params*) ;
 int FUNC_19 (struct snd_pcm_sw_params*) ;
 size_t FUNC_20 (struct snd_pcm_sw_params*) ;
 int FUNC_21 (struct snd_pcm_sw_params*) ;
 int FUNC_22 (struct snd_pcm_sw_params*) ;
 int FUNC_23 (char*,size_t,size_t,...) ;
 int FUNC_24 (struct snd_mask*) ;
 int FUNC_25 (struct snd_mask*,int) ;
 scalar_t__ FUNC_26 (struct snd_mask*,int) ;
 int FUNC_27 (struct snd_pcm_substream*,size_t) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ,scalar_t__,int ) ;
 int FUNC_30 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,int ,struct snd_mask*) ;
 int FUNC_31 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,int ,int,int *) ;
 int FUNC_32 (struct snd_pcm_substream*,int ,struct snd_pcm_sw_params*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int) ;
 int FUNC_35 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,struct snd_pcm_sw_params*) ;
 int FUNC_36 (struct snd_pcm_substream*) ;
 int FUNC_37 (struct snd_pcm_substream*,size_t) ;
 size_t FUNC_38 (struct snd_pcm_substream*,size_t) ;
 int FUNC_39 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,struct snd_pcm_sw_params*) ;
 int FUNC_40 (int,struct snd_mask*) ;
 int FUNC_41 (struct snd_pcm_substream*,size_t) ;
 int FUNC_42 (struct snd_pcm_plugin*) ;
 int FUNC_43 (struct snd_pcm_substream*,struct snd_pcm_sw_params*,struct snd_pcm_plugin**) ;
 int FUNC_44 (struct snd_pcm_plugin*) ;
 int FUNC_45 (char*,...) ;
 int FUNC_46 (int ) ;
 int FUNC_47 (size_t) ;

__attribute__((used)) static int FUNC_48(struct snd_pcm_substream *VAR_20)
{
 struct snd_pcm_runtime *VAR_21 = VAR_20->runtime;
 struct snd_pcm_hw_params *VAR_22, *VAR_23;
 struct snd_pcm_sw_params *VAR_24;
 ssize_t VAR_25, VAR_26;
 size_t VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30, VAR_31, VAR_32;
 struct snd_mask VAR_33;
 struct snd_mask VAR_34;

 if (FUNC_12(&FUNC_14(VAR_21)->oss.params_lock))
  return -VAR_0;
 VAR_24 = FUNC_9(sizeof(*VAR_24), VAR_3);
 VAR_22 = FUNC_9(sizeof(*VAR_22), VAR_3);
 VAR_23 = FUNC_9(sizeof(*VAR_23), VAR_3);
 if (!VAR_24 || !VAR_22 || !VAR_23) {
  FUNC_45("No memory\n");
  VAR_28 = -VAR_2;
  goto failure;
 }

 if (FUNC_4(&VAR_20->mmap_count))
  VAR_29 = 1;
 else
  VAR_29 = FUNC_15(VAR_20)->oss.setup.direct;

 FUNC_3(VAR_23);
 FUNC_2(VAR_23, VAR_11);
 FUNC_0(VAR_23, VAR_11, 2, 0);
 FUNC_24(&VAR_34);
 if (FUNC_4(&VAR_20->mmap_count))
  FUNC_25(&VAR_34, VAR_4);
 else {
  FUNC_25(&VAR_34, VAR_5);
  if (!VAR_29)
   FUNC_25(&VAR_34, VAR_6);
 }
 VAR_28 = FUNC_30(VAR_20, VAR_23, VAR_8, &VAR_34);
 if (VAR_28 < 0) {
  FUNC_45("No usable accesses\n");
  VAR_28 = -VAR_1;
  goto failure;
 }
 FUNC_6(VAR_20, VAR_23, FUNC_14(VAR_21)->oss.rate);
 FUNC_31(VAR_20, VAR_23, VAR_9, FUNC_14(VAR_21)->oss.channels, ((void*)0));

 VAR_30 = FUNC_33(FUNC_14(VAR_21)->oss.format);

 VAR_33 = *FUNC_7(VAR_23, VAR_10);
 if (VAR_29)
  VAR_31 = VAR_30;
 else
  VAR_31 = FUNC_40(VAR_30, &VAR_33);

 if (VAR_31 < 0 || !FUNC_26(&VAR_33, VAR_31)) {
  for (VAR_31 = 0; VAR_31 <= VAR_7; VAR_31++) {
   if (FUNC_26(&VAR_33, VAR_31) &&
       FUNC_34(VAR_31) >= 0)
    break;
  }
  if (VAR_31 > VAR_7) {
   FUNC_45("Cannot find a format!!!\n");
   VAR_28 = -VAR_1;
   goto failure;
  }
 }
 VAR_28 = FUNC_1(VAR_23, VAR_10, VAR_31, 0);
 if (VAR_28 < 0)
  goto failure;

 if (VAR_29) {
  FUNC_10(VAR_22, VAR_23, sizeof(*VAR_22));
 } else {
  FUNC_3(VAR_22);
  FUNC_1(VAR_22, VAR_8,
          VAR_5, 0);
  FUNC_1(VAR_22, VAR_10,
          FUNC_33(FUNC_14(VAR_21)->oss.format), 0);
  FUNC_1(VAR_22, VAR_9,
          FUNC_14(VAR_21)->oss.channels, 0);
  FUNC_1(VAR_22, VAR_13,
          FUNC_14(VAR_21)->oss.rate, 0);
  FUNC_23("client: access = %i, format = %i, channels = %i, rate = %i\n",
    FUNC_16(VAR_22), FUNC_19(VAR_22),
    FUNC_18(VAR_22), FUNC_22(VAR_22));
 }
 FUNC_23("slave: access = %i, format = %i, channels = %i, rate = %i\n",
   FUNC_16(VAR_23), FUNC_19(VAR_23),
   FUNC_18(VAR_23), FUNC_22(VAR_23));

 VAR_27 = FUNC_28(FUNC_19(VAR_22)) *
    FUNC_18(VAR_22) / 8;
 VAR_28 = FUNC_35(VAR_20, VAR_22, VAR_23);
 if (VAR_28 < 0)
  goto failure;

 VAR_32 = FUNC_41(VAR_20, FUNC_14(VAR_21)->oss.period_bytes / VAR_27);
 VAR_28 = FUNC_31(VAR_20, VAR_23, VAR_12, VAR_32, ((void*)0));
 if (VAR_28 < 0)
  goto failure;

 VAR_28 = FUNC_31(VAR_20, VAR_23, VAR_11,
         FUNC_14(VAR_21)->oss.periods, ((void*)0));
 if (VAR_28 < 0)
  goto failure;

 FUNC_32(VAR_20, VAR_14, ((void*)0));

 if ((VAR_28 = FUNC_32(VAR_20, VAR_15, VAR_23)) < 0) {
  FUNC_45("HW_PARAMS failed: %i\n", VAR_28);
  goto failure;
 }

 FUNC_11(VAR_24, 0, sizeof(*VAR_24));
 if (FUNC_14(VAR_21)->oss.trigger) {
  VAR_24->start_threshold = 1;
 } else {
  VAR_24->start_threshold = VAR_21->boundary;
 }
 if (FUNC_4(&VAR_20->mmap_count) ||
     VAR_20->stream == VAR_17)
  VAR_24->stop_threshold = VAR_21->boundary;
 else
  VAR_24->stop_threshold = VAR_21->buffer_size;
 VAR_24->tstamp_mode = VAR_19;
 VAR_24->period_step = 1;
 VAR_24->avail_min = VAR_20->stream == VAR_18 ?
  1 : VAR_21->period_size;
 if (FUNC_4(&VAR_20->mmap_count) ||
     FUNC_15(VAR_20)->oss.setup.nosilence) {
  VAR_24->silence_threshold = 0;
  VAR_24->silence_size = 0;
 } else {
  snd_pcm_uframes_t VAR_35;
  VAR_35 = VAR_21->period_size + 16;
  if (VAR_35 > VAR_21->buffer_size)
   VAR_35 = VAR_21->buffer_size;
  VAR_24->silence_threshold = VAR_35;
  VAR_24->silence_size = VAR_35;
 }

 if ((VAR_28 = FUNC_32(VAR_20, VAR_16, VAR_24)) < 0) {
  FUNC_45("SW_PARAMS failed: %i\n", VAR_28);
  goto failure;
 }

 FUNC_14(VAR_21)->oss.periods = FUNC_21(VAR_23);
 VAR_26 = FUNC_38(VAR_20, FUNC_20(VAR_23));
 if (VAR_26 < 0) {
  VAR_28 = -VAR_1;
  goto failure;
 }







 VAR_26 *= VAR_27;

 VAR_25 = VAR_26 * FUNC_14(VAR_21)->oss.periods;
 if (VAR_25 < 0) {
  VAR_28 = -VAR_1;
  goto failure;
 }

 FUNC_14(VAR_21)->oss.period_bytes = VAR_26;
 FUNC_14(VAR_21)->oss.buffer_bytes = VAR_25;

 FUNC_23("oss: period bytes = %i, buffer bytes = %i\n",
   FUNC_14(VAR_21)->oss.period_bytes,
   FUNC_14(VAR_21)->oss.buffer_bytes);
 FUNC_23("slave: period_size = %i, buffer_size = %i\n",
   FUNC_20(VAR_23),
   FUNC_17(VAR_23));

 FUNC_14(VAR_21)->oss.format = FUNC_34(FUNC_19(VAR_22));
 FUNC_14(VAR_21)->oss.channels = FUNC_18(VAR_22);
 FUNC_14(VAR_21)->oss.rate = FUNC_22(VAR_22);

 FUNC_46(FUNC_14(VAR_21)->oss.buffer);
 FUNC_14(VAR_21)->oss.buffer = FUNC_47(FUNC_14(VAR_21)->oss.period_bytes);
 if (!FUNC_14(VAR_21)->oss.buffer) {
  VAR_28 = -VAR_2;
  goto failure;
 }

 FUNC_14(VAR_21)->oss.params = 0;
 FUNC_14(VAR_21)->oss.prepare = 1;
 FUNC_14(VAR_21)->oss.buffer_used = 0;
 if (VAR_21->dma_area)
  FUNC_29(VAR_21->format, VAR_21->dma_area, FUNC_5(VAR_21, VAR_21->dma_bytes));

 FUNC_14(VAR_21)->oss.period_frames = FUNC_27(VAR_20, VAR_26);

 VAR_28 = 0;
failure:
 FUNC_8(VAR_24);
 FUNC_8(VAR_22);
 FUNC_8(VAR_23);
 FUNC_13(&FUNC_14(VAR_21)->oss.params_lock);
 return VAR_28;
}
