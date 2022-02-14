
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* layer; } ;
typedef TYPE_2__ wavefront_program ;
struct TYPE_8__ {int* prog_status; int* patch_status; } ;
typedef TYPE_3__ snd_wavefront_t ;
struct TYPE_6__ {size_t patch_number; scalar_t__ mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_3__*,int ,unsigned char*,unsigned char*) ;

__attribute__((used)) static int
FUNC_3 (snd_wavefront_t *VAR_5)

{
 unsigned char VAR_6[VAR_3];
 wavefront_program VAR_7;
 unsigned char VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = VAR_9;

  if ((VAR_10 = FUNC_2 (VAR_5, VAR_0, VAR_6,
     &VAR_8)) == 0) {

   VAR_5->prog_status[VAR_9] |= VAR_4;

   FUNC_0 (VAR_6, (unsigned char *) &VAR_7,
         VAR_3);

   for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
    if (VAR_7.layer[VAR_11].mute) {
     VAR_5->patch_status
      [VAR_7.layer[VAR_11].patch_number] |=
      VAR_4;
    }
   }
  } else if (VAR_10 == 1) {
   VAR_5->prog_status[VAR_9] = 0;
  } else {
   FUNC_1 ("upload program "
        "error 0x%x\n", VAR_10);
   VAR_5->prog_status[VAR_9] = 0;
  }
 }

 for (VAR_9 = 0, VAR_12 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_5->prog_status[VAR_9]) {
   VAR_12++;
  }
 }

 FUNC_1 ("%d programs slots in use\n", VAR_12);

 return (0);
}
