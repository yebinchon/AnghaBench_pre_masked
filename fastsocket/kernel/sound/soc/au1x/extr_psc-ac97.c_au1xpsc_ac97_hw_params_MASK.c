
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {scalar_t__ msbits; } ;
struct au1xpsc_audio_data {scalar_t__ rate; unsigned long cfg; int lock; } ;


 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_4 (scalar_t__) ;
 unsigned long FUNC_5 (int) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct au1xpsc_audio_data* VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (unsigned long,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_13 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_10,
      struct snd_pcm_hw_params *VAR_11,
      struct snd_soc_dai *VAR_12)
{

 struct au1xpsc_audio_data *VAR_13 = VAR_9;
 unsigned long VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18 = FUNC_6(VAR_10);

 VAR_17 = FUNC_12(VAR_11);

 VAR_14 = VAR_15 = FUNC_7(FUNC_0(VAR_13));
 VAR_16 = FUNC_7(FUNC_1(VAR_13));


 if (VAR_16 & (VAR_8 | VAR_7)) {

  if ((FUNC_2(VAR_14) != VAR_11->msbits) ||
      (VAR_13->rate != FUNC_13(VAR_11)))
   return -VAR_0;
 } else {


  VAR_14 &= ~VAR_3;
  VAR_14 |= FUNC_4(VAR_11->msbits);


  if (VAR_18 == VAR_1) {
   VAR_14 &= ~VAR_5;
   VAR_14 |= FUNC_5(3);
   VAR_14 |= FUNC_5(4);
  } else {
   VAR_14 &= ~VAR_4;
   VAR_14 |= FUNC_3(3);
   VAR_14 |= FUNC_3(4);
  }


  if (!(VAR_14 ^ VAR_15))
   goto out;


  FUNC_10(&VAR_13->lock);


  FUNC_9(VAR_14 & ~VAR_2, FUNC_0(VAR_13));
  FUNC_8();


  while (FUNC_7(FUNC_1(VAR_13)) & VAR_6)
   asm volatile ("nop");


  FUNC_9(VAR_14, FUNC_0(VAR_13));
  FUNC_8();


  FUNC_9(VAR_14 | VAR_2, FUNC_0(VAR_13));
  FUNC_8();


  while (!(FUNC_7(FUNC_1(VAR_13)) & VAR_6))
   asm volatile ("nop");

  FUNC_11(&VAR_13->lock);

  VAR_13->cfg = VAR_14;
  VAR_13->rate = FUNC_13(VAR_11);
 }

out:
 return 0;
}
