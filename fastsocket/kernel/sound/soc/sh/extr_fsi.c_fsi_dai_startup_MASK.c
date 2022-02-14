
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct fsi_priv {int chan; int fifo_max; int dma_chan; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_11 ;


 scalar_t__ VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char const*,int,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct fsi_priv*,int) ;
 struct fsi_priv* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct fsi_priv*) ;
 int FUNC_11 (struct fsi_priv*,int) ;
 int FUNC_12 (struct fsi_priv*,int) ;
 int FUNC_13 (struct fsi_priv*,int ,int,int) ;
 int FUNC_14 (struct fsi_priv*,int,int) ;
 TYPE_1__* VAR_13 ;

__attribute__((used)) static int FUNC_15(struct snd_pcm_substream *VAR_14,
      struct snd_soc_dai *VAR_15)
{
 struct fsi_priv *VAR_16 = FUNC_9(VAR_14);
 const char *VAR_17;
 u32 VAR_18 = FUNC_10(VAR_16);
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22 = (VAR_14->stream == VAR_12);
 int VAR_23;
 int VAR_24 = 0;

 FUNC_5(VAR_13->clk);


 VAR_21 = VAR_22 ? (1 << 0) : (1 << 4);
 VAR_23 = FUNC_12(VAR_16, VAR_22);
 if (VAR_23)
  FUNC_13(VAR_16, VAR_0, VAR_21, VAR_21);
 else
  FUNC_13(VAR_16, VAR_0, VAR_21, 0);


 VAR_21 = 0;
 switch (VAR_11 & VAR_18) {
 case 129:
  VAR_21 = 1 << 12;
  break;
 case 137:
  VAR_21 = 1 << 8;
  break;
 case 128:
  VAR_21 = 1 << 4;
  break;
 case 136:
  VAR_21 = 1 << 0;
  break;
 }
 FUNC_14(VAR_16, VAR_1, VAR_21);


 VAR_21 = 0;
 VAR_20 = VAR_22 ? VAR_9 : VAR_8;
 VAR_19 = VAR_22 ? FUNC_4(VAR_18) : FUNC_3(VAR_18);
 switch (VAR_19) {
 case 134:
  VAR_17 = "MONO";
  VAR_21 = FUNC_0(VAR_3);
  VAR_16->chan = 1;
  break;
 case 133:
  VAR_17 = "MONO Delay";
  VAR_21 = FUNC_0(VAR_4);
  VAR_16->chan = 1;
  break;
 case 132:
  VAR_17 = "PCM";
  VAR_21 = FUNC_0(VAR_5);
  VAR_16->chan = 2;
  break;
 case 135:
  VAR_17 = "I2S";
  VAR_21 = FUNC_0(VAR_2);
  VAR_16->chan = 2;
  break;
 case 131:
  VAR_17 = "TDM";
  VAR_21 = FUNC_0(VAR_6) | (VAR_16->chan - 1);
  VAR_16->chan = VAR_22 ?
   FUNC_2(VAR_18) : FUNC_1(VAR_18);
  break;
 case 130:
  VAR_17 = "TDM Delay";
  VAR_21 = FUNC_0(VAR_7) | (VAR_16->chan - 1);
  VAR_16->chan = VAR_22 ?
   FUNC_2(VAR_18) : FUNC_1(VAR_18);
  break;
 default:
  FUNC_7(VAR_15->dev, "unknown format.\n");
  return -VAR_10;
 }

 switch (VAR_16->chan) {
 case 1:
  VAR_16->fifo_max = 256;
  break;
 case 2:
  VAR_16->fifo_max = 128;
  break;
 case 3:
 case 4:
  VAR_16->fifo_max = 64;
  break;
 case 5:
 case 6:
 case 7:
 case 8:
  VAR_16->fifo_max = 32;
  break;
 default:
  FUNC_7(VAR_15->dev, "channel size error.\n");
  return -VAR_10;
 }

 FUNC_14(VAR_16, VAR_20, VAR_21);
 FUNC_6(VAR_15->dev, "use %s format (%d channel) use %d DMAC\n",
  VAR_17, VAR_16->chan, VAR_16->dma_chan);




 if (VAR_23)
  FUNC_8(VAR_16, 1);


 FUNC_11(VAR_16, VAR_22);

 return VAR_24;
}
