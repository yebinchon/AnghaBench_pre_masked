
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_runtime {int rate; } ;
struct ak4114 {unsigned char rcs0; int rcs1; TYPE_1__* capture_substream; int (* change_callback ) (struct ak4114*,unsigned char,unsigned char) ;int lock; int qcrc_errors; int ccrc_errors; int v_bit_errors; int parity_errors; } ;
struct TYPE_5__ {struct snd_pcm_runtime* runtime; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ak4114*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (struct ak4114*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,unsigned long) ;
 int FUNC_6 (TYPE_1__*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ak4114*,unsigned char,unsigned char) ;

int FUNC_10(struct ak4114 *VAR_15, unsigned int VAR_16)
{
 struct snd_pcm_runtime *VAR_17 = VAR_15->capture_substream ? VAR_15->capture_substream->runtime : ((void*)0);
 unsigned long VAR_18;
 int VAR_19 = 0;
 unsigned char VAR_20, VAR_21;
 unsigned char VAR_22, VAR_23;

 VAR_21 = FUNC_2(VAR_15, VAR_11);
 if (VAR_16 & VAR_4)
  goto __rate;
 VAR_20 = FUNC_2(VAR_15, VAR_10);
 FUNC_7(&VAR_15->lock, VAR_18);
 if (VAR_20 & VAR_6)
  VAR_15->parity_errors++;
 if (VAR_21 & VAR_13)
  VAR_15->v_bit_errors++;
 if (VAR_21 & VAR_2)
  VAR_15->ccrc_errors++;
 if (VAR_21 & VAR_8)
  VAR_15->qcrc_errors++;
 VAR_22 = (VAR_15->rcs0 & (VAR_9 | VAR_5 | VAR_7 | VAR_0 | VAR_1 | VAR_12)) ^
                     (VAR_20 & (VAR_9 | VAR_5 | VAR_7 | VAR_0 | VAR_1 | VAR_12));
 VAR_23 = (VAR_15->rcs1 & 0xf0) ^ (VAR_21 & 0xf0);
 VAR_15->rcs0 = VAR_20 & ~(VAR_9 | VAR_5);
 VAR_15->rcs1 = VAR_21;
 FUNC_8(&VAR_15->lock, VAR_18);

 FUNC_0(VAR_15, VAR_20, VAR_21, VAR_22, VAR_23);
 if (VAR_15->change_callback && (VAR_22 | VAR_23) != 0)
  VAR_15->change_callback(VAR_15, VAR_22, VAR_23);

      __rate:

 VAR_19 = FUNC_1(VAR_21);
 if (!(VAR_16 & VAR_3) && VAR_17 && VAR_17->rate != VAR_19) {
  FUNC_5(VAR_15->capture_substream, VAR_18);
  if (FUNC_3(VAR_15->capture_substream)) {

   FUNC_4(VAR_15->capture_substream, VAR_14);
   VAR_19 = 1;
  }
  FUNC_6(VAR_15->capture_substream, VAR_18);
 }
 return VAR_19;
}
