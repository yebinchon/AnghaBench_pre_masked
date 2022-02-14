
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_runtime {int rate; int sleep; } ;
struct ak4117 {unsigned char rcs0; int rcs1; unsigned char rcs2; TYPE_2__* substream; int (* change_callback ) (struct ak4117*,unsigned char,unsigned char) ;TYPE_1__** kctls; int card; int lock; int qcrc_errors; int ccrc_errors; int v_bit_errors; int parity_errors; } ;
struct TYPE_7__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int id; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (struct ak4117*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned long) ;
 int FUNC_6 (TYPE_2__*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ak4117*,unsigned char,unsigned char) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ak4117 *VAR_20, unsigned int VAR_21)
{
 struct snd_pcm_runtime *VAR_22 = VAR_20->substream ? VAR_20->substream->runtime : ((void*)0);
 unsigned long VAR_23;
 int VAR_24 = 0;
 unsigned char VAR_25, VAR_26, VAR_27;
 unsigned char VAR_28, VAR_29;

 VAR_26 = FUNC_1(VAR_20, VAR_13);
 if (VAR_21 & VAR_4)
  goto __rate;
 VAR_25 = FUNC_1(VAR_20, VAR_12);
 VAR_27 = FUNC_1(VAR_20, VAR_14);

 FUNC_7(&VAR_20->lock, VAR_23);
 if (VAR_25 & VAR_8)
  VAR_20->parity_errors++;
 if (VAR_25 & VAR_17)
  VAR_20->v_bit_errors++;
 if (VAR_27 & VAR_2)
  VAR_20->ccrc_errors++;
 if (VAR_27 & VAR_10)
  VAR_20->qcrc_errors++;
 VAR_28 = (VAR_20->rcs0 & (VAR_11 | VAR_5 | VAR_15 | VAR_0 | VAR_1 | VAR_16)) ^
                     (VAR_25 & (VAR_11 | VAR_5 | VAR_15 | VAR_0 | VAR_1 | VAR_16));
 VAR_29 = (VAR_20->rcs1 & (VAR_6 | VAR_7 | VAR_9 | 0x0f)) ^
              (VAR_26 & (VAR_6 | VAR_7 | VAR_9 | 0x0f));
 VAR_20->rcs0 = VAR_25 & ~(VAR_11 | VAR_5 | VAR_15);
 VAR_20->rcs1 = VAR_26;
 VAR_20->rcs2 = VAR_27;
 FUNC_8(&VAR_20->lock, VAR_23);

 if (VAR_25 & VAR_8)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[0]->id);
 if (VAR_25 & VAR_17)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[1]->id);
 if (VAR_27 & VAR_2)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[2]->id);
 if (VAR_27 & VAR_10)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[3]->id);


 if (VAR_29 & 0x0f)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[4]->id);

 if ((VAR_29 & VAR_9) | (VAR_28 & VAR_5))
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[6]->id);
 if (VAR_28 & VAR_11)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[8]->id);

 if (VAR_28 & VAR_0)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[9]->id);
 if (VAR_29 & VAR_7)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[10]->id);
 if (VAR_29 & VAR_6)
  FUNC_2(VAR_20->card, VAR_18, &VAR_20->kctls[11]->id);

 if (VAR_20->change_callback && (VAR_28 | VAR_29) != 0)
  VAR_20->change_callback(VAR_20, VAR_28, VAR_29);

      __rate:

 VAR_24 = FUNC_0(VAR_26);
 if (!(VAR_21 & VAR_3) && VAR_22 && VAR_22->rate != VAR_24) {
  FUNC_5(VAR_20->substream, VAR_23);
  if (FUNC_3(VAR_20->substream)) {

   FUNC_4(VAR_20->substream, VAR_19);
   FUNC_10(&VAR_22->sleep);
   VAR_24 = 1;
  }
  FUNC_6(VAR_20->substream, VAR_23);
 }
 return VAR_24;
}
