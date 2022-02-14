
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_rme9652 {int thru_bits; int control_register; int hw_rev; int ss_channels; scalar_t__ passthru; scalar_t__ period_bytes; scalar_t__ iobase; int port; int irq; int playback_buffer; int capture_buffer; TYPE_1__* card; int card_name; } ;
struct snd_info_entry {scalar_t__ private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_rme9652*) ;
 unsigned int FUNC_4 (struct snd_rme9652*,int ) ;
 int FUNC_5 (struct snd_rme9652*) ;
 int FUNC_6 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct snd_info_entry *VAR_19, struct snd_info_buffer *VAR_20)
{
 struct snd_rme9652 *VAR_21 = (struct snd_rme9652 *) VAR_19->private_data;
 u32 VAR_22 = VAR_21->thru_bits;
 int VAR_23 = 0;
 int VAR_24;
 unsigned int VAR_25;
 int VAR_26;

 VAR_25 = FUNC_4(VAR_21, VAR_12);

 FUNC_6(VAR_20, "%s (Card #%d)\n", VAR_21->card_name, VAR_21->card->number + 1);
 FUNC_6(VAR_20, "Buffers: capture %p playback %p\n",
      VAR_21->capture_buffer, VAR_21->playback_buffer);
 FUNC_6(VAR_20, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_21->irq, VAR_21->port, (unsigned long)VAR_21->iobase);
 FUNC_6(VAR_20, "Control register: %x\n", VAR_21->control_register);

 FUNC_6(VAR_20, "\n");

 VAR_26 = 1 << (6 + FUNC_1(VAR_21->control_register &
          VAR_7));

 FUNC_6(VAR_20, "Latency: %d samples (2 periods of %lu bytes)\n",
      VAR_26, (unsigned long) VAR_21->period_bytes);
 FUNC_6(VAR_20, "Hardware pointer (frames): %ld\n",
      FUNC_3(VAR_21));
 FUNC_6(VAR_20, "Passthru: %s\n",
      VAR_21->passthru ? "yes" : "no");

 if ((VAR_21->control_register & (VAR_3 | VAR_17)) == 0) {
  FUNC_6(VAR_20, "Clock mode: autosync\n");
  VAR_23 = 1;
 } else if (VAR_21->control_register & VAR_17) {
  if (VAR_25 & VAR_18) {
   FUNC_6(VAR_20, "Clock mode: word clock\n");
  } else {
   FUNC_6(VAR_20, "Clock mode: word clock (no signal)\n");
  }
 } else {
  FUNC_6(VAR_20, "Clock mode: master\n");
 }

 if (VAR_23) {
  switch (VAR_21->control_register & VAR_5) {
  case 131:
   FUNC_6(VAR_20, "Pref. sync source: ADAT1\n");
   break;
  case 130:
   FUNC_6(VAR_20, "Pref. sync source: ADAT2\n");
   break;
  case 129:
   FUNC_6(VAR_20, "Pref. sync source: ADAT3\n");
   break;
  case 128:
   FUNC_6(VAR_20, "Pref. sync source: IEC958\n");
   break;
  default:
   FUNC_6(VAR_20, "Pref. sync source: ???\n");
  }
 }

 if (VAR_21->hw_rev >= 15)
  FUNC_6(VAR_20, "\nADAT1 Input source: %s\n",
       (VAR_21->control_register & VAR_0) ?
       "Internal" : "ADAT1 optical");

 FUNC_6(VAR_20, "\n");

 switch (FUNC_2(VAR_21->control_register &
     VAR_6)) {
 case 132:
  FUNC_6(VAR_20, "IEC958 input: ADAT1\n");
  break;
 case 134:
  FUNC_6(VAR_20, "IEC958 input: Coaxial\n");
  break;
 case 133:
  FUNC_6(VAR_20, "IEC958 input: Internal\n");
  break;
 default:
  FUNC_6(VAR_20, "IEC958 input: ???\n");
  break;
 }

 if (VAR_21->control_register & VAR_11) {
  FUNC_6(VAR_20, "IEC958 output: Coaxial & ADAT1\n");
 } else {
  FUNC_6(VAR_20, "IEC958 output: Coaxial only\n");
 }

 if (VAR_21->control_register & VAR_4) {
  FUNC_6(VAR_20, "IEC958 quality: Professional\n");
 } else {
  FUNC_6(VAR_20, "IEC958 quality: Consumer\n");
 }

 if (VAR_21->control_register & VAR_2) {
  FUNC_6(VAR_20, "IEC958 emphasis: on\n");
 } else {
  FUNC_6(VAR_20, "IEC958 emphasis: off\n");
 }

 if (VAR_21->control_register & VAR_1) {
  FUNC_6(VAR_20, "IEC958 Dolby: on\n");
 } else {
  FUNC_6(VAR_20, "IEC958 Dolby: off\n");
 }

 VAR_24 = FUNC_5(VAR_21);

 if (VAR_24 < 0) {
  FUNC_6(VAR_20,
       "IEC958 sample rate: error flag set\n");
 } else if (VAR_24 == 0) {
  FUNC_6(VAR_20, "IEC958 sample rate: undetermined\n");
 } else {
  FUNC_6(VAR_20, "IEC958 sample rate: %d\n", VAR_24);
 }

 FUNC_6(VAR_20, "\n");

 FUNC_6(VAR_20, "ADAT Sample rate: %dHz\n",
      FUNC_0(VAR_21));



 VAR_26 = VAR_25 & VAR_13;
 if (VAR_25 & VAR_8) {
  FUNC_6(VAR_20, "ADAT1: %s\n", VAR_26 ? "Sync" : "Lock");
 } else {
  FUNC_6(VAR_20, "ADAT1: No Lock\n");
 }

 VAR_26 = VAR_25 & VAR_14;
 if (VAR_25 & VAR_9) {
  FUNC_6(VAR_20, "ADAT2: %s\n", VAR_26 ? "Sync" : "Lock");
 } else {
  FUNC_6(VAR_20, "ADAT2: No Lock\n");
 }

 VAR_26 = VAR_25 & VAR_15;
 if (VAR_25 & VAR_10) {
  FUNC_6(VAR_20, "ADAT3: %s\n", VAR_26 ? "Sync" : "Lock");
 } else {
  FUNC_6(VAR_20, "ADAT3: No Lock\n");
 }

 FUNC_6(VAR_20, "\n");

 FUNC_6(VAR_20, "Timecode signal: %s\n",
      (VAR_25 & VAR_16) ? "yes" : "no");



 FUNC_6(VAR_20, "Punch Status:\n\n");

 for (VAR_24 = 0; VAR_24 < VAR_21->ss_channels; VAR_24++) {
  if (VAR_22 & (1 << VAR_24)) {
   FUNC_6(VAR_20, "%2d:  on ", VAR_24 + 1);
  } else {
   FUNC_6(VAR_20, "%2d: off ", VAR_24 + 1);
  }

  if (((VAR_24 + 1) % 8) == 0) {
   FUNC_6(VAR_20, "\n");
  }
 }

 FUNC_6(VAR_20, "\n");
}
