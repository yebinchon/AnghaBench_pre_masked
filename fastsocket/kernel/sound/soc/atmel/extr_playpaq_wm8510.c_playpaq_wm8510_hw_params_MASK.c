
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssc_device {int dummy; } ;
struct ssc_clock_data {unsigned int cmr_div; unsigned int period; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {struct at32_ssc_info* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct at32_ssc_info {struct ssc_device* ssc; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct ssc_clock_data FUNC_2 (struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_3 (char*,unsigned int,unsigned int,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_6 (struct snd_soc_dai*,unsigned int const) ;
 int FUNC_7 (struct snd_soc_dai*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_16,
        struct snd_pcm_hw_params *VAR_17)
{
 struct snd_soc_pcm_runtime *VAR_18 = VAR_16->private_data;
 struct snd_soc_dai *VAR_19 = VAR_18->dai->codec_dai;
 struct snd_soc_dai *VAR_20 = VAR_18->dai->cpu_dai;
 struct at32_ssc_info *VAR_21 = VAR_20->private_data;
 struct ssc_device *VAR_22 = VAR_21->ssc;
 unsigned int VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 int VAR_26;






 const unsigned int VAR_27 = (VAR_6 |
      VAR_7 |
      VAR_4);







 if (VAR_22 == ((void*)0)) {
  FUNC_4("playpaq_wm8510_hw_params: ssc is NULL!\n");
  return -VAR_3;
 }





 switch (FUNC_1(VAR_17)) {
 case 48000:
  VAR_23 = 24576000;
  VAR_25 = VAR_12;
  VAR_24 = VAR_9;
  break;

 case 44100:
  VAR_23 = 22579200;
  VAR_25 = VAR_12;
  VAR_24 = VAR_9;
  break;

 case 22050:
  VAR_23 = 22579200;
  VAR_25 = VAR_13;
  VAR_24 = VAR_9;
  break;

 case 16000:
  VAR_23 = 24576000;
  VAR_25 = VAR_14;
  VAR_24 = VAR_9;
  break;

 case 11025:
  VAR_23 = 22579200;
  VAR_25 = VAR_15;
  VAR_24 = VAR_9;
  break;

 case 8000:
  VAR_23 = 24576000;
  VAR_25 = VAR_11;
  VAR_24 = VAR_9;
  break;

 default:
  FUNC_4("playpaq_wm8510: Unsupported sample rate %d\n",
      FUNC_1(VAR_17));
  return -VAR_3;
 }





 VAR_26 = FUNC_6(VAR_19, VAR_27);
 if (VAR_26 < 0) {
  FUNC_4("playpaq_wm8510: "
      "Failed to set CODEC DAI format (%d)\n",
      VAR_26);
  return VAR_26;
 }
 VAR_26 = FUNC_6(VAR_20, VAR_27);
 if (VAR_26 < 0) {
  FUNC_4("playpaq_wm8510: "
      "Failed to set CPU DAI format (%d)\n",
      VAR_26);
  return VAR_26;
 }
 FUNC_3("playpaq_wm8510: "
   "pll_in = %ld, pll_out = %u, bclk = %x, mclk = %x\n",
   FUNC_0(VAR_2), VAR_23, VAR_24, VAR_25);



 VAR_26 = FUNC_5(VAR_19, VAR_8, VAR_24);
 if (VAR_26 < 0) {
  FUNC_4
      ("playpaq_wm8510: Failed to set CODEC DAI BCLKDIV (%d)\n",
       VAR_26);
  return VAR_26;
 }



 VAR_26 = FUNC_7(VAR_19, 0,
      FUNC_0(VAR_2), VAR_23);
 if (VAR_26 < 0) {
  FUNC_4("playpaq_wm8510: Failed to set CODEC DAI PLL (%d)\n",
      VAR_26);
  return VAR_26;
 }


 VAR_26 = FUNC_5(VAR_19, VAR_10, VAR_25);
 if (VAR_26 < 0) {
  FUNC_4("playpaq_wm8510: Failed to set CODEC MCLKDIV (%d)\n",
      VAR_26);
  return VAR_26;
 }


 return 0;
}
