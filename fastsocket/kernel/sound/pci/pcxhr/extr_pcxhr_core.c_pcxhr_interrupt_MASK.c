
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcxhr {int nb_streams_capt; int nb_streams_play; int * playback_stream; int * capture_stream; } ;
struct pcxhr_mgr {int dsp_time_last; int granularity; int timer_toggle; int num_cards; unsigned int src_it_dsp; int lock; int msg_taskq; struct snd_pcxhr** chip; int dsp_time_err; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct pcxhr_mgr*,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct pcxhr_mgr*,int *,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct pcxhr_mgr *VAR_14 = VAR_13;
 unsigned int VAR_15;
 int VAR_16, VAR_17;
 struct snd_pcxhr *VAR_18;

 FUNC_4(&VAR_14->lock);

 VAR_15 = FUNC_0(VAR_14, VAR_9);
 if (! (VAR_15 & VAR_5)) {
  FUNC_5(&VAR_14->lock);

  return VAR_1;
 }


 VAR_15 = FUNC_0(VAR_14, VAR_10);
 FUNC_1(VAR_14, VAR_10, VAR_15);


 if (VAR_15 & VAR_8) {
  int VAR_19 = VAR_15 & VAR_8;

  int VAR_20 =
   FUNC_0(VAR_14, VAR_11) & VAR_3;
  int VAR_21 = VAR_20 - VAR_14->dsp_time_last;

  if ((VAR_21 < 0) &&
      (VAR_14->dsp_time_last != VAR_2)) {
   FUNC_3("ERROR DSP TIME old(%d) new(%d) -> "
        "resynchronize all streams\n",
        VAR_14->dsp_time_last, VAR_20);
   VAR_14->dsp_time_err++;
  }
  VAR_14->dsp_time_last = VAR_20;

  if (VAR_19 == VAR_14->timer_toggle) {
   FUNC_3("ERROR TIMER TOGGLE\n");
   VAR_14->dsp_time_err++;
  }
  VAR_14->timer_toggle = VAR_19;

  VAR_15 &= ~VAR_8;
  for (VAR_16 = 0; VAR_16 < VAR_14->num_cards; VAR_16++) {
   VAR_18 = VAR_14->chip[VAR_16];
   for (VAR_17 = 0; VAR_17 < VAR_18->nb_streams_capt; VAR_17++)
    FUNC_2(VAR_14,
      &VAR_18->capture_stream[VAR_17],
      VAR_21);
  }
  for (VAR_16 = 0; VAR_16 < VAR_14->num_cards; VAR_16++) {
   VAR_18 = VAR_14->chip[VAR_16];
   for (VAR_17 = 0; VAR_17 < VAR_18->nb_streams_play; VAR_17++)
    FUNC_2(VAR_14,
      &VAR_18->playback_stream[VAR_17],
      VAR_21);
  }
 }

 if (VAR_15 & VAR_7) {
  if (VAR_15 & VAR_6) {




   VAR_14->dsp_time_last = VAR_2;
  }
  VAR_14->src_it_dsp = VAR_15;
  FUNC_6(&VAR_14->msg_taskq);
 }




 FUNC_5(&VAR_14->lock);
 return VAR_0;
}
