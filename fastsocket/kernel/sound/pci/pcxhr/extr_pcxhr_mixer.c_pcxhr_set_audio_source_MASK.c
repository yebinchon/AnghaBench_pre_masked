
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {int chip_idx; int audio_capture_source; TYPE_2__* mgr; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_5__ {int capture_chips; TYPE_1__** chip; scalar_t__ board_aes_in_192k; } ;
struct TYPE_4__ {int audio_capture_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (struct pcxhr_rmh*,int ) ;
 int FUNC_1 (TYPE_2__*,struct pcxhr_rmh*) ;
 int FUNC_2 (TYPE_2__*,unsigned int,unsigned int,int*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcxhr* VAR_16)
{
 struct pcxhr_rmh VAR_17;
 unsigned int VAR_18, VAR_19;
 unsigned int VAR_20;
 int VAR_21, VAR_22;

 switch (VAR_16->chip_idx) {
 case 0 : VAR_18 = VAR_12; VAR_20 = VAR_3; break;
 case 1 : VAR_18 = VAR_13; VAR_20 = VAR_4; break;
 case 2 : VAR_18 = VAR_14; VAR_20 = VAR_5; break;
 case 3 : VAR_18 = VAR_15; VAR_20 = VAR_6; break;
 default: return -VAR_9;
 }
 if (VAR_16->audio_capture_source != 0) {
  VAR_19 = VAR_18;
 } else {
  VAR_19 = 0;
 }

 FUNC_2(VAR_16->mgr, VAR_18, VAR_19, &VAR_22);

 if (VAR_22) {
  FUNC_0(&VAR_17, VAR_2);
  VAR_17.cmd[0] |= (1 << VAR_16->chip_idx);
  VAR_21 = FUNC_1(VAR_16->mgr, &VAR_17);
  if (VAR_21)
   return VAR_21;
 }
 if (VAR_16->mgr->board_aes_in_192k) {
  int VAR_23;
  unsigned int VAR_24 = 0xC0;

  for (VAR_23 = 0; (VAR_23 < 4) && (VAR_23 < VAR_16->mgr->capture_chips); VAR_23++) {
   if (VAR_16->mgr->chip[VAR_23]->audio_capture_source == 2)
    VAR_24 |= (1 << (3 - VAR_23));
  }

  FUNC_0(&VAR_17, VAR_1);
  VAR_17.cmd_len = 2;
  VAR_17.cmd[0] |= VAR_10;
  VAR_17.cmd[1] = VAR_24;
  VAR_21 = FUNC_1(VAR_16->mgr, &VAR_17);
 } else {
  int VAR_25 = 0;
  if (VAR_16->audio_capture_source == 2)
   VAR_25 = 1;

  FUNC_0(&VAR_17, VAR_1);
  VAR_17.cmd_len = 3;
  VAR_17.cmd[0] |= VAR_11;
  VAR_17.cmd[1] = VAR_20;
  VAR_17.cmd[2] = ((VAR_8 & VAR_0) |
         (VAR_25 ? 0x41 : 0x54));
  VAR_21 = FUNC_1(VAR_16->mgr, &VAR_17);
  if (VAR_21)
   return VAR_21;
  VAR_17.cmd[2] = ((VAR_7 & VAR_0) |
         (VAR_25 ? 0x41 : 0x49));
  VAR_21 = FUNC_1(VAR_16->mgr, &VAR_17);
 }
 return VAR_21;
}
