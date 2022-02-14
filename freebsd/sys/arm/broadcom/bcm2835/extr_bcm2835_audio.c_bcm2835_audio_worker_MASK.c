
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bcm2835_audio_chinfo {scalar_t__ playback_state; int spd; int fmt; scalar_t__ available_space; int unsubmittedptr; int submitted_samples; int buffer; } ;
struct bcm2835_audio_info {scalar_t__ worker_state; scalar_t__ flags_pending; int volume; int dest; int worker_cv; struct bcm2835_audio_chinfo pch; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (struct bcm2835_audio_chinfo*) ;
 int FUNC_4 (struct bcm2835_audio_chinfo*) ;
 int FUNC_5 (struct bcm2835_audio_chinfo*) ;
 int FUNC_6 (struct bcm2835_audio_chinfo*) ;
 int FUNC_7 (struct bcm2835_audio_info*,int,int) ;
 int FUNC_8 (struct bcm2835_audio_info*,int,int) ;
 int FUNC_9 (struct bcm2835_audio_chinfo*,int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(void *VAR_8)
{
 struct bcm2835_audio_info *VAR_9 = (struct bcm2835_audio_info *)VAR_8;
 struct bcm2835_audio_chinfo *VAR_10 = &VAR_9->pch;
 uint32_t VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 uint8_t *VAR_19;

 VAR_10->playback_state = VAR_3;

 while (1) {
  if (VAR_9->worker_state != VAR_6)
   break;

  FUNC_0(VAR_9);




  while ((VAR_9->flags_pending == 0) &&
      FUNC_3(VAR_10)) {
   FUNC_11(&VAR_9->worker_cv, &VAR_9->lock);
  }
  VAR_15 = VAR_9->flags_pending;

  VAR_9->flags_pending = 0;
  FUNC_1(VAR_9);


  if (VAR_15 & VAR_0) {
   FUNC_0(VAR_9);
   VAR_11 = VAR_10->spd;
   VAR_12 = VAR_10->fmt;
   VAR_13 = VAR_9->volume;
   VAR_14 = VAR_9->dest;
   FUNC_1(VAR_9);
   if (VAR_10->playback_state == VAR_3)
    FUNC_8(VAR_9, VAR_12, VAR_11);
   FUNC_7(VAR_9, VAR_13, VAR_14);
  }


  if ((VAR_15 & VAR_2) &&
      (VAR_10->playback_state == VAR_4)) {
   FUNC_6(VAR_10);
   FUNC_0(VAR_9);
   FUNC_4(&VAR_9->pch);
   VAR_10->playback_state = VAR_3;
   FUNC_1(VAR_9);
   continue;
  }


  if ((VAR_15 & VAR_1) &&
      (VAR_10->playback_state == VAR_3)) {
   FUNC_0(VAR_9);
   VAR_10->playback_state = VAR_4;
   FUNC_1(VAR_9);
   FUNC_5(VAR_10);
  }

  if (VAR_10->playback_state == VAR_3)
   continue;

  if (FUNC_15(VAR_10->buffer) == 0)
   continue;

  VAR_16 = FUNC_15(VAR_10->buffer);
  VAR_17 = FUNC_17(VAR_10->buffer);
  VAR_18 = FUNC_16(VAR_10->buffer);

  FUNC_0(VAR_9);
  if (VAR_18 + VAR_16 > VAR_17)
   VAR_16 = VAR_17 - VAR_18;
  VAR_16 = FUNC_13(VAR_16, VAR_10->available_space);
  VAR_16 -= (VAR_16 % VAR_5);
  FUNC_1(VAR_9);

  if (VAR_16 < VAR_5)
   continue;

  VAR_19 = (uint8_t*)FUNC_14(VAR_10->buffer) + VAR_18;

  FUNC_9(VAR_10, VAR_19, VAR_16);
  FUNC_0(VAR_9);
  VAR_10->unsubmittedptr = (VAR_10->unsubmittedptr + VAR_16) % FUNC_17(VAR_10->buffer);
  VAR_10->available_space -= VAR_16;
  VAR_10->submitted_samples += VAR_16;
  FUNC_2(VAR_10->available_space >= 0, ("ch->available_space == %d\n", VAR_10->available_space));
  FUNC_1(VAR_9);
 }

 FUNC_0(VAR_9);
 VAR_9->worker_state = VAR_7;
 FUNC_10(&VAR_9->worker_cv);
 FUNC_1(VAR_9);

 FUNC_12(0);
}
