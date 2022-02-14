
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct emu_sc_info {scalar_t__ mode; scalar_t__ enable_ir; int ** midi; int ** pcm; scalar_t__ broken_digital; scalar_t__ is_ca0108; scalar_t__ is_ca0102; scalar_t__ is_emu10k2; scalar_t__ is_emu10k1; scalar_t__ has_71; scalar_t__ has_51; scalar_t__ has_ac97; int code_size; int routing_code_end; TYPE_1__* rm; } ;
struct TYPE_2__ {int num_gprs; int num_used; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct emu_sc_info *VAR_2, struct sbuf *VAR_3)
{
 int VAR_4;

 FUNC_5(VAR_3, "FreeBSD EMU10Kx Audio Driver\n");
 FUNC_5(VAR_3, "\nHardware resource usage:\n");
 FUNC_5(VAR_3, "DSP General Purpose Registers: %d used, %d total\n", VAR_2->rm->num_used, VAR_2->rm->num_gprs);
 FUNC_5(VAR_3, "DSP Instruction Registers: %d used, %d total\n", VAR_2->routing_code_end, VAR_2->code_size);
 FUNC_5(VAR_3, "Card supports");
 if (VAR_2->has_ac97) {
  FUNC_5(VAR_3, " AC97 codec");
 } else {
  FUNC_5(VAR_3, " NO AC97 codec");
 }
 if (VAR_2->has_51) {
  if (VAR_2->has_71)
   FUNC_5(VAR_3, " and 7.1 output");
  else
   FUNC_5(VAR_3, " and 5.1 output");
 }
 if (VAR_2->is_emu10k1)
  FUNC_5(VAR_3, ", SBLive! DSP code");
 if (VAR_2->is_emu10k2)
  FUNC_5(VAR_3, ", Audigy DSP code");
 if (VAR_2->is_ca0102)
  FUNC_5(VAR_3, ", Audigy DSP code with Audigy2 hacks");
 if (VAR_2->is_ca0108)
  FUNC_5(VAR_3, ", Audigy DSP code with Audigy2Value hacks");
 FUNC_5(VAR_3, "\n");
 if (VAR_2->broken_digital)
  FUNC_5(VAR_3, "Digital mode unsupported\n");
 FUNC_5(VAR_3, "\nInstalled devices:\n");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_2->pcm[VAR_4] != ((void*)0))
   if (FUNC_2(VAR_2->pcm[VAR_4])) {
    FUNC_5(VAR_3, "%s on %s\n", FUNC_0(VAR_2->pcm[VAR_4]), FUNC_1(VAR_2->pcm[VAR_4]));
   }
 if (VAR_2->midi[0] != ((void*)0))
  if (FUNC_2(VAR_2->midi[0])) {
   FUNC_5(VAR_3, "EMU10Kx MIDI Interface\n");
   FUNC_5(VAR_3, "\tOn-card connector on %s\n", FUNC_1(VAR_2->midi[0]));
  }
 if (VAR_2->midi[1] != ((void*)0))
  if (FUNC_2(VAR_2->midi[1])) {
   FUNC_5(VAR_3, "\tOn-Drive connector on %s\n", FUNC_1(VAR_2->midi[1]));
  }
 if (VAR_2->midi[0] != ((void*)0))
  if (FUNC_2(VAR_2->midi[0])) {
   FUNC_5(VAR_3, "\tIR receiver MIDI events %s\n", VAR_2->enable_ir ? "enabled" : "disabled");
  }
 FUNC_5(VAR_3, "Card is in %s mode\n", (VAR_2->mode == VAR_0) ? "analog" : "digital");

 FUNC_3(VAR_3);
 return (FUNC_4(VAR_3));
}
