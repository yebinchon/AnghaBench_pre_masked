
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uaudio_chan {scalar_t__ start; scalar_t__ end; int sample_curr; int sample_rem; int intr_frames; int* bytes_per_frame; int frames_per_second; size_t cur_alt; size_t set_alt; int cur; int jitter_curr; int pcm_ch; int running; TYPE_1__* usb_alt; } ;
struct TYPE_2__ {int sample_size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_page_cache*,int,int,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int,int) ;
 int FUNC_10 (struct usb_xfer*,int) ;
 struct uaudio_chan* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int*,int *,int *,int*) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct uaudio_chan *VAR_3 = FUNC_11(VAR_1);
 struct usb_page_cache *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_3->start == VAR_3->end) {
  FUNC_0("no buffer!\n");
  return;
 }

 FUNC_12(VAR_1, &VAR_10, ((void*)0), ((void*)0), &VAR_11);
 VAR_6 = FUNC_8(VAR_1);

 switch (FUNC_2(VAR_1)) {
 case 128:

  VAR_5 = 0;
  VAR_4 = FUNC_7(VAR_1, 0);


  VAR_3->sample_curr += (VAR_3->sample_rem * VAR_3->intr_frames);


  VAR_12 = (VAR_3->intr_frames * VAR_3->bytes_per_frame[0]) +
      ((VAR_3->sample_curr / VAR_3->frames_per_second) *
      (VAR_3->bytes_per_frame[1] - VAR_3->bytes_per_frame[0]));


  VAR_3->sample_curr %= VAR_3->frames_per_second;


  VAR_13 = VAR_3->usb_alt[VAR_3->cur_alt].sample_size;

  for (VAR_8 = 0; VAR_8 != VAR_11; VAR_8++) {
   uint32_t VAR_14 = VAR_5;

   VAR_9 = FUNC_6(VAR_1, VAR_8);


   VAR_9 = VAR_9 - (VAR_9 % VAR_13);


   VAR_12 -= VAR_9;


   if (VAR_3->running == 0 || VAR_3->cur_alt != VAR_3->set_alt)
    continue;


   while (VAR_9 > 0) {

    VAR_7 = (VAR_3->end - VAR_3->cur);

    if (VAR_7 > VAR_9)
     VAR_7 = VAR_9;

    FUNC_4(VAR_4, VAR_14, VAR_3->cur, VAR_7);

    VAR_9 -= VAR_7;
    VAR_14 += VAR_7;
    VAR_3->cur += VAR_7;

    if (VAR_3->cur >= VAR_3->end)
     VAR_3->cur = VAR_3->start;
   }

   VAR_5 += VAR_6;
  }


  VAR_3->jitter_curr -= (VAR_12 / VAR_13);


  VAR_11 = 2 * VAR_3->intr_frames;


  if (VAR_3->jitter_curr < -VAR_11)
   VAR_3->jitter_curr = -VAR_11;
  else if (VAR_3->jitter_curr > VAR_11)
   VAR_3->jitter_curr = VAR_11;

  FUNC_1(6, "transferred %d bytes, jitter %d samples\n",
      VAR_10, VAR_3->jitter_curr);

  if (VAR_3->running != 0)
   FUNC_3(VAR_3->pcm_ch);

 case 129:
tr_setup:
  VAR_11 = VAR_3->intr_frames;

  FUNC_10(VAR_1, VAR_11);
  for (VAR_8 = 0; VAR_8 != VAR_11; VAR_8++)
   FUNC_9(VAR_1, VAR_8, VAR_6);

  FUNC_5(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0)
   goto tr_setup;
  break;
 }
}
