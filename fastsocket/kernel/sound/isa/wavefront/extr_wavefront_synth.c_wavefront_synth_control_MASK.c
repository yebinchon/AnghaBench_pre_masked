
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wavefront_patch_info ;
struct TYPE_10__ {int* rbuf; int* wbuf; int status; int cmd; } ;
typedef TYPE_1__ wavefront_control ;
typedef int u32 ;
struct TYPE_11__ {int interrupts_are_midi; int rom_samples_rdonly; int* sample_status; int debug; int freemem; int control_port; } ;
typedef TYPE_2__ snd_wavefront_t ;
struct TYPE_12__ {TYPE_2__ wavefront; } ;
typedef TYPE_3__ snd_wavefront_card_t ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,unsigned char*,int) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_2__*,int ,int*,int*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_12 (snd_wavefront_card_t *VAR_6,
    wavefront_control *VAR_7)

{
 snd_wavefront_t *VAR_8 = &VAR_6->wavefront;
 unsigned char VAR_9[2];
 int VAR_10;

 FUNC_0 (VAR_1, "synth control with "
  "cmd 0x%x\n", VAR_7->cmd);



 switch (VAR_7->cmd) {

 case 141:
  FUNC_7 ("interrupts disabled.\n");
  FUNC_5 (0x80|0x20, VAR_8->control_port);
  VAR_8->interrupts_are_midi = 1;
  return 0;

 case 140:
  FUNC_7 ("interrupts enabled.\n");
  FUNC_5 (0x80|0x40|0x20, VAR_8->control_port);
  VAR_8->interrupts_are_midi = 1;
  return 0;

 case 138:
  VAR_7->rbuf[0] = VAR_8->interrupts_are_midi;
  return 0;

 case 136:
  VAR_8->rom_samples_rdonly = VAR_7->wbuf[0];
  VAR_7->status = 0;
  return 0;

 case 139:
  VAR_10 = VAR_7->wbuf[0] | (VAR_7->wbuf[1] << 7);
  if (VAR_10 <0 || VAR_10 >= VAR_3) {
   FUNC_7 ("invalid slot ID %d\n",
    VAR_10);
   VAR_7->status = VAR_0;
   return -VAR_0;
  }
  VAR_7->rbuf[0] = VAR_8->sample_status[VAR_10];
  VAR_7->status = 0;
  return 0;

 case 142:
  VAR_8->debug = VAR_7->wbuf[0];
  FUNC_7 ("debug = 0x%x\n", VAR_8->debug);
  return 0;

 case 133:
  FUNC_4 (*((u32 *) VAR_7->wbuf), VAR_9, 2);
  FUNC_3 (VAR_7->wbuf, VAR_9, 2);
  break;

 case 134:



  VAR_7->status = FUNC_11
   (VAR_8, (wavefront_patch_info *) VAR_7->rbuf);
  return 0;

 case 131:
  FUNC_7 ("support for sample alias upload "
   "being considered.\n");
  VAR_7->status = VAR_0;
  return -VAR_0;
 }

 VAR_7->status = FUNC_8 (VAR_8, VAR_7->cmd, VAR_7->rbuf, VAR_7->wbuf);







 if (VAR_7->status == 0) {
  switch (VAR_7->cmd) {





  case 137:
   VAR_8->freemem = FUNC_2 (VAR_7->rbuf, 4);
   break;

  case 133:
   FUNC_1 (VAR_7->rbuf, VAR_7->rbuf, VAR_4);
   break;

  case 132:
   FUNC_1 (VAR_7->rbuf, VAR_7->rbuf, VAR_5);
   break;

  case 135:
   FUNC_1 (VAR_7->rbuf, VAR_7->rbuf, VAR_2 - 1);
   break;

  case 130:
   FUNC_6 (VAR_7->rbuf);
   break;

  case 131:
   FUNC_7 ("support for "
        "sample aliases still "
        "being considered.\n");
   break;

  case 129:
   FUNC_9 (VAR_6);
   break;

  case 128:
   FUNC_10 (VAR_6);
   break;
  }
 }

 return 0;
}
