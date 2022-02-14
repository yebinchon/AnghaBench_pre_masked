
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sample_number; int sample_msb; } ;
typedef TYPE_1__ wavefront_patch ;
struct TYPE_6__ {int* patch_status; int* sample_status; } ;
typedef TYPE_2__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_2 (snd_wavefront_t *VAR_5)

{
 unsigned char VAR_6[VAR_2];
 unsigned char VAR_7[2];
 wavefront_patch *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_7[0] = VAR_9 & 0x7f;
  VAR_7[1] = VAR_9 >> 7;

  if ((VAR_10 = FUNC_1 (VAR_5, VAR_0, VAR_6,
     VAR_7)) == 0) {

   VAR_5->patch_status[VAR_9] |= VAR_3;
   VAR_8 = (wavefront_patch *) VAR_6;
   VAR_5->sample_status
    [VAR_8->sample_number|(VAR_8->sample_msb<<7)] |=
    VAR_4;

  } else if (VAR_10 == 3) {
   VAR_5->patch_status[VAR_9] = 0;
  } else {
   FUNC_0 ("upload patch "
        "error 0x%x\n", VAR_10);
   VAR_5->patch_status[VAR_9] = 0;
   return 1;
  }
 }



 for (VAR_9 = 0, VAR_11 = 0, VAR_12 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_5->patch_status[VAR_9] & VAR_3) {
   VAR_11++;
  }
  if (VAR_5->patch_status[VAR_9] & VAR_4) {
   VAR_12++;
  }

 }
 FUNC_0 ("%d patch slots filled, %d in use\n", VAR_11, VAR_12);

 return (0);
}
