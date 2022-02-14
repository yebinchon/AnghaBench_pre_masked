
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct echoaudio {TYPE_1__* comm_page; } ;
struct audioformat {int interleave; int bits_per_sample; int mono_to_stereo; scalar_t__ data_are_bigendian; } ;
struct TYPE_2__ {int * audio_format; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static void FUNC_2(struct echoaudio *VAR_14, u16 VAR_15,
        const struct audioformat *VAR_16)
{
 u16 VAR_17;

 VAR_17 = VAR_6;


 if (VAR_16->interleave > 2) {
  switch (VAR_16->bits_per_sample) {
  case 16:
   VAR_17 = VAR_11;
   break;
  case 24:
   VAR_17 = VAR_12;
   break;
  case 32:
   VAR_17 = VAR_13;
   break;
  }
  VAR_17 |= VAR_16->interleave;
 } else if (VAR_16->data_are_bigendian) {

  switch (VAR_16->interleave) {
  case 1:
   VAR_17 = VAR_0;
   break;





  }
 } else if (VAR_16->interleave == 1 &&
     VAR_16->bits_per_sample == 32 && !VAR_16->mono_to_stereo) {

  VAR_17 = VAR_1;
 } else {

  switch (VAR_16->bits_per_sample) {
  case 8:
   if (VAR_16->interleave == 2)
    VAR_17 = VAR_10;
   else
    VAR_17 = VAR_5;
   break;
  default:
  case 16:
   if (VAR_16->interleave == 2)
    VAR_17 = VAR_6;
   else
    VAR_17 = VAR_2;
   break;
  case 24:
   if (VAR_16->interleave == 2)
    VAR_17 = VAR_7;
   else
    VAR_17 = VAR_3;
   break;
  case 32:
   if (VAR_16->interleave == 2)
    VAR_17 = VAR_9;
   else
    VAR_17 = VAR_4;
   break;
  }
 }
 FUNC_0(("set_audio_format[%d] = %x\n", VAR_15, VAR_17));
 VAR_14->comm_page->audio_format[VAR_15] = FUNC_1(VAR_17);
}
