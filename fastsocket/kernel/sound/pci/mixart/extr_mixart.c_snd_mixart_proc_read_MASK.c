
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_mixart {int chip_idx; TYPE_1__* mgr; } ;
struct snd_info_entry {struct snd_mixart* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {int dsp_loaded; int board_type; } ;





 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct snd_info_entry *VAR_5,
                                 struct snd_info_buffer *VAR_6)
{
 struct snd_mixart *VAR_7 = VAR_5->private_data;
 u32 VAR_8;

 FUNC_2(VAR_6, "Digigram miXart (alsa card %d)\n\n", VAR_7->chip_idx);


 if (VAR_7->mgr->dsp_loaded & ( 1 << VAR_0)) {
  FUNC_2(VAR_6, "- hardware -\n");
  switch (VAR_7->mgr->board_type ) {
  case 128 : FUNC_2(VAR_6, "\tmiXart8 (no daughter board)\n\n"); break;
  case 130 : FUNC_2(VAR_6, "\tmiXart8 AES/EBU\n\n"); break;
  case 129 : FUNC_2(VAR_6, "\tmiXart8 Cobranet\n\n"); break;
  default: FUNC_2(VAR_6, "\tUNKNOWN!\n\n"); break;
  }

  FUNC_2(VAR_6, "- system load -\n");



  VAR_8 = FUNC_1( FUNC_0( VAR_7->mgr, VAR_4));

  if (VAR_8) {
   u32 VAR_9 = 100 * FUNC_1( FUNC_0( VAR_7->mgr, VAR_2)) / VAR_8;
   u32 VAR_10 = 100 * FUNC_1( FUNC_0( VAR_7->mgr, VAR_3)) / VAR_8;
   u32 VAR_11 = 100 * FUNC_1( FUNC_0( VAR_7->mgr, VAR_1)) / VAR_8;

   FUNC_2(VAR_6, "\tstreaming          : %d\n", VAR_10);
   FUNC_2(VAR_6, "\tmailbox            : %d\n", VAR_9);
   FUNC_2(VAR_6, "\tinterrups handling : %d\n\n", VAR_11);
  }
 }
}
