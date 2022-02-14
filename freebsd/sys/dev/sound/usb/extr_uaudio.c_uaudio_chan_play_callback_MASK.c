
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uaudio_chan {scalar_t__ running; scalar_t__ start; scalar_t__ end; scalar_t__ num_alt; int jitter_curr; int jitter_rem; size_t cur_alt; int intr_counter; int intr_frames; int frames_per_second; int* bytes_per_frame; int sample_curr; int sample_rem; int cur; TYPE_2__* usb_alt; int * xfer; int pcm_mtx; int pcm_ch; TYPE_1__* priv_sc; } ;
typedef int int64_t ;
struct TYPE_4__ {int sample_rate; int sample_size; } ;
struct TYPE_3__ {struct uaudio_chan sc_rec_chan; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uaudio_chan*,size_t) ;
 int FUNC_7 (struct usb_page_cache*,int,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int,int) ;
 int FUNC_13 (struct usb_xfer*,int) ;
 struct uaudio_chan* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct uaudio_chan *VAR_4 = FUNC_14(VAR_2);
 struct uaudio_chan *VAR_5;
 struct usb_page_cache *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_4->running == 0 || VAR_4->start == VAR_4->end) {
  FUNC_0("not running or no buffer!\n");
  return;
 }


 if (VAR_4->priv_sc->sc_rec_chan.num_alt > 0)
  VAR_5 = &VAR_4->priv_sc->sc_rec_chan;
 else
  VAR_5 = ((void*)0);

 FUNC_15(VAR_2, &VAR_13, &VAR_14, ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_2)) {
 case 129:
tr_setup:
  if (VAR_5 != ((void*)0)) {

   FUNC_4(VAR_5->pcm_mtx);
   VAR_5->jitter_curr = 0;
   VAR_5->jitter_rem = 0;
   FUNC_5(VAR_5->pcm_mtx);
  }


  VAR_4->jitter_curr = 0;
  VAR_4->jitter_rem = 0;


 case 128:
  if (VAR_13 < VAR_14) {
   FUNC_0("short transfer, "
       "%d of %d bytes\n", VAR_13, VAR_14);
  }
  FUNC_3(VAR_4->pcm_ch);





  if (VAR_5 != ((void*)0) &&
      FUNC_6(VAR_4, VAR_4->cur_alt) != 0) {
   FUNC_4(VAR_5->pcm_mtx);
   if (VAR_5->cur_alt < VAR_5->num_alt) {
    int64_t VAR_15;
    int64_t VAR_16;


    VAR_15 = VAR_4->usb_alt[VAR_4->cur_alt].sample_rate;
    VAR_15 = (VAR_15 * VAR_5->jitter_curr) +
        VAR_4->jitter_rem;


    VAR_5->jitter_curr = 0;
    VAR_5->jitter_rem = 0;


    VAR_16 = VAR_5->usb_alt[VAR_5->cur_alt].sample_rate;
    VAR_4->jitter_curr += VAR_15 / VAR_16;
    VAR_4->jitter_rem = VAR_15 % VAR_16;
   }
   FUNC_5(VAR_5->pcm_mtx);
  }


  VAR_4->intr_counter += VAR_4->intr_frames;
  if (VAR_4->intr_counter >= VAR_4->frames_per_second) {
   VAR_4->intr_counter -= VAR_4->frames_per_second;
   FUNC_8(VAR_4->xfer[VAR_0]);
  }

  VAR_7 = FUNC_11(VAR_2);

  if (VAR_4->bytes_per_frame[1] > VAR_7) {
   FUNC_0("bytes per transfer, %d, "
       "exceeds maximum, %d!\n",
       VAR_4->bytes_per_frame[1],
       VAR_7);
   break;
  }

  VAR_9 = VAR_4->intr_frames;


  FUNC_13(VAR_2, VAR_9);


  VAR_12 = VAR_4->usb_alt[VAR_4->cur_alt].sample_size;


  VAR_8 = 0;


  for (VAR_10 = 0; VAR_10 != VAR_9; VAR_10++) {
   uint32_t VAR_17;

   VAR_4->sample_curr += VAR_4->sample_rem;
   if (VAR_4->sample_curr >= VAR_4->frames_per_second) {
    VAR_4->sample_curr -= VAR_4->frames_per_second;
    VAR_17 = VAR_4->bytes_per_frame[1];
   } else {
    VAR_17 = VAR_4->bytes_per_frame[0];
   }


   if (VAR_4->jitter_curr > 0 &&
       (VAR_17 + VAR_12) <= VAR_7) {
    FUNC_1(6, "sending one sample more\n");
    VAR_4->jitter_curr--;
    VAR_17 += VAR_12;
   } else if (VAR_4->jitter_curr < 0 &&
       VAR_17 >= VAR_12) {
    FUNC_1(6, "sending one sample less\n");
    VAR_4->jitter_curr++;
    VAR_17 -= VAR_12;
   }
   FUNC_12(VAR_2, VAR_10, VAR_17);
   VAR_8 += VAR_17;
  }

  FUNC_1(6, "transferring %d bytes\n", VAR_8);

  VAR_11 = 0;

  VAR_6 = FUNC_10(VAR_2, 0);
  while (VAR_8 > 0) {

   VAR_10 = (VAR_4->end - VAR_4->cur);
   if (VAR_10 > VAR_8)
    VAR_10 = VAR_8;

   FUNC_7(VAR_6, VAR_11, VAR_4->cur, VAR_10);

   VAR_8 -= VAR_10;
   VAR_4->cur += VAR_10;
   VAR_11 += VAR_10;

   if (VAR_4->cur >= VAR_4->end)
    VAR_4->cur = VAR_4->start;
  }
  FUNC_9(VAR_2);
  break;

 default:
  if (VAR_3 != VAR_1)
   goto tr_setup;
  break;
 }
}
