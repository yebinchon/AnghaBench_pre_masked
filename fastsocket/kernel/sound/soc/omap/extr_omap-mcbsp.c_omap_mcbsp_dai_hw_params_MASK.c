
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int id; TYPE_2__* dma_data; int private_data; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct omap_mcbsp_reg_cfg {int srgr1; int srgr2; int xcr1; int xcr2; int rcr1; int rcr2; } ;
struct omap_mcbsp_data {int bus_id; int configured; unsigned int fmt; struct omap_mcbsp_reg_cfg regs; } ;
struct TYPE_4__ {char* name; int dma_req; unsigned long port_addr; int sync_mode; int set_threshold; } ;
struct TYPE_3__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;



 unsigned int VAR_7 ;

 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int** VAR_9 ;
 unsigned long** VAR_10 ;
 unsigned long** VAR_11 ;
 unsigned long** VAR_12 ;
 int** VAR_13 ;
 unsigned long** VAR_14 ;
 int FUNC_14 (int,struct omap_mcbsp_reg_cfg*) ;
 TYPE_2__** VAR_15 ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_16 ;
 int FUNC_16 (struct snd_pcm_hw_params*) ;
 int FUNC_17 (struct snd_pcm_hw_params*) ;
 struct omap_mcbsp_data* FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct snd_pcm_substream *VAR_17,
        struct snd_pcm_hw_params *VAR_18,
        struct snd_soc_dai *VAR_19)
{
 struct snd_soc_pcm_runtime *VAR_20 = VAR_17->private_data;
 struct snd_soc_dai *VAR_21 = VAR_20->dai->cpu_dai;
 struct omap_mcbsp_data *VAR_22 = FUNC_18(VAR_21->private_data);
 struct omap_mcbsp_reg_cfg *VAR_23 = &VAR_22->regs;
 int VAR_24, VAR_25 = VAR_22->bus_id, VAR_26 = VAR_21->id;
 int VAR_27, VAR_28, VAR_29, VAR_30 = VAR_3;
 unsigned long VAR_31;
 unsigned int VAR_32;

 if (FUNC_10()) {
  VAR_24 = VAR_9[VAR_25][VAR_17->stream];
  VAR_31 = VAR_10[VAR_25][VAR_17->stream];
 } else if (FUNC_11()) {
  VAR_24 = VAR_13[VAR_25][VAR_17->stream];
  VAR_31 = VAR_11[VAR_25][VAR_17->stream];
 } else if (FUNC_12()) {
  VAR_24 = VAR_13[VAR_25][VAR_17->stream];
  VAR_31 = VAR_12[VAR_25][VAR_17->stream];
 } else if (FUNC_13()) {
  VAR_24 = VAR_13[VAR_25][VAR_17->stream];
  VAR_31 = VAR_14[VAR_25][VAR_17->stream];
  VAR_15[VAR_26][VAR_17->stream].set_threshold =
      VAR_16;

  if (FUNC_15(VAR_25) ==
      VAR_2)
   VAR_30 = VAR_4;
 } else {
  return -VAR_1;
 }
 VAR_15[VAR_26][VAR_17->stream].name =
  VAR_17->stream ? "Audio Capture" : "Audio Playback";
 VAR_15[VAR_26][VAR_17->stream].dma_req = VAR_24;
 VAR_15[VAR_26][VAR_17->stream].port_addr = VAR_31;
 VAR_15[VAR_26][VAR_17->stream].sync_mode = VAR_30;
 VAR_21->dma_data = &VAR_15[VAR_26][VAR_17->stream];

 if (VAR_22->configured) {

  return 0;
 }

 VAR_32 = VAR_22->fmt & VAR_7;
 VAR_29 = VAR_28 = FUNC_16(VAR_18);
 switch (VAR_28) {
 case 2:
  if (VAR_32 == 128) {

   VAR_23->rcr2 |= VAR_6;
   VAR_23->xcr2 |= VAR_8;

   VAR_29--;
   VAR_23->rcr2 |= FUNC_3(VAR_29 - 1);
   VAR_23->xcr2 |= FUNC_7(VAR_29 - 1);
  }
 case 1:
 case 4:

  VAR_23->rcr1 |= FUNC_2(VAR_29 - 1);
  VAR_23->xcr1 |= FUNC_6(VAR_29 - 1);
  break;
 default:

  return -VAR_0;
 }

 switch (FUNC_17(VAR_18)) {
 case 131:

  VAR_27 = 16;
  VAR_23->rcr2 |= FUNC_5(VAR_5);
  VAR_23->rcr1 |= FUNC_4(VAR_5);
  VAR_23->xcr2 |= FUNC_9(VAR_5);
  VAR_23->xcr1 |= FUNC_8(VAR_5);
  break;
 default:

  return -VAR_0;
 }


 switch (VAR_32) {
 case 128:
  VAR_23->srgr2 |= FUNC_0(VAR_27 * VAR_28 - 1);
  VAR_23->srgr1 |= FUNC_1(VAR_27 - 1);
  break;
 case 130:
 case 129:
  VAR_23->srgr2 |= FUNC_0(VAR_27 * VAR_28 - 1);
  VAR_23->srgr1 |= FUNC_1(0);
  break;
 }

 FUNC_14(VAR_25, &VAR_22->regs);
 VAR_22->configured = 1;

 return 0;
}
