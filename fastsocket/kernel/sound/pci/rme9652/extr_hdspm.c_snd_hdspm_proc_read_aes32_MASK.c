
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {int control_register; int system_sample_rate; scalar_t__ precise_ptr; scalar_t__ period_bytes; int irq_count; scalar_t__ iobase; int port; int irq; int firmware_rev; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (unsigned int) ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (struct hdspm*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct hdspm*) ;
 int FUNC_5 (struct hdspm*) ;
 int FUNC_6 (struct hdspm*,int ) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct snd_info_entry * VAR_24,
     struct snd_info_buffer *VAR_25)
{
 struct hdspm *VAR_26 = VAR_24->private_data;
 unsigned int VAR_27;
 unsigned int VAR_28;
 unsigned int VAR_29;
 int VAR_30;
 char *VAR_31;
 char *VAR_32;
 char *VAR_33;
 int VAR_34;

 VAR_27 = FUNC_6(VAR_26, VAR_21);
 VAR_28 = FUNC_6(VAR_26, VAR_22);
 VAR_29 = FUNC_6(VAR_26, VAR_23);

 FUNC_7(VAR_25, "%s (Card #%d) Rev.%x\n",
      VAR_26->card_name, VAR_26->card->number + 1,
      VAR_26->firmware_rev);

 FUNC_7(VAR_25, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_26->irq, VAR_26->port, (unsigned long)VAR_26->iobase);

 FUNC_7(VAR_25, "--- System ---\n");

 FUNC_7(VAR_25,
      "IRQ Pending: Audio=%d, MIDI0=%d, MIDI1=%d, IRQcount=%d\n",
      VAR_27 & VAR_13,
      (VAR_27 & VAR_15) ? 1 : 0,
      (VAR_27 & VAR_16) ? 1 : 0,
      VAR_26->irq_count);
 FUNC_7(VAR_25,
      "HW pointer: id = %d, rawptr = %d (%d->%d) "
      "estimated= %ld (bytes)\n",
      ((VAR_27 & VAR_2) ? 1 : 0),
      (VAR_27 & VAR_3),
      (VAR_27 & VAR_3) %
      (2 * (int)VAR_26->period_bytes),
      ((VAR_27 & VAR_3) - 64) %
      (2 * (int)VAR_26->period_bytes),
      (long) FUNC_4(VAR_26) * 4);

 FUNC_7(VAR_25,
      "MIDI FIFO: Out1=0x%x, Out2=0x%x, In1=0x%x, In2=0x%x \n",
      FUNC_6(VAR_26, VAR_19) & 0xFF,
      FUNC_6(VAR_26, VAR_20) & 0xFF,
      FUNC_6(VAR_26, VAR_17) & 0xFF,
      FUNC_6(VAR_26, VAR_18) & 0xFF);
 FUNC_7(VAR_25,
      "Register: ctrl1=0x%x, status1=0x%x, status2=0x%x, "
      "timecode=0x%x\n",
      VAR_26->control_register,
      VAR_27, VAR_28, VAR_29);

 FUNC_7(VAR_25, "--- Settings ---\n");

 VAR_34 = 1 << (6 + FUNC_3(VAR_26->control_register &
        VAR_8));

 FUNC_7(VAR_25,
      "Size (Latency): %d samples (2 periods of %lu bytes)\n",
      VAR_34, (unsigned long) VAR_26->period_bytes);

 FUNC_7(VAR_25, "Line out: %s,   Precise Pointer: %s\n",
      (VAR_26->
       control_register & VAR_9) ? "on " : "off",
      (VAR_26->precise_ptr) ? "on" : "off");

 FUNC_7(VAR_25,
      "ClearTrackMarker %s, Emphasis %s, Dolby %s\n",
      (VAR_26->
       control_register & VAR_14) ? "on" : "off",
      (VAR_26->
       control_register & VAR_7) ? "on" : "off",
      (VAR_26->
       control_register & VAR_6) ? "on" : "off");

 switch (FUNC_2(VAR_26)) {
 case 137:
  VAR_33 = "AutoSync";
  break;
 case 133:
  VAR_33 = "Internal 32 kHz";
  break;
 case 132:
  VAR_33 = "Internal 44.1 kHz";
  break;
 case 131:
  VAR_33 = "Internal 48 kHz";
  break;
 case 130:
  VAR_33 = "Internal 64 kHz";
  break;
 case 129:
  VAR_33 = "Internal 88.2 kHz";
  break;
 case 128:
  VAR_33 = "Internal 96 kHz";
  break;
 case 136:
  VAR_33 = "Internal 128 kHz";
  break;
 case 135:
  VAR_33 = "Internal 176.4 kHz";
  break;
 case 134:
  VAR_33 = "Internal 192 kHz";
  break;
 default:
  VAR_33 = "Error";
 }
 FUNC_7(VAR_25, "Sample Clock Source: %s\n", VAR_33);
 if (!(VAR_26->control_register & VAR_4))
  VAR_32 = "Slave";
 else
  VAR_32 = "Master";
 FUNC_7(VAR_25, "System Clock Mode: %s\n", VAR_32);

 VAR_30 = FUNC_5(VAR_26);
 if (VAR_30 == 0)
  FUNC_7(VAR_25, "Preferred Sync Reference: Word Clock\n");
 else
  FUNC_7(VAR_25, "Preferred Sync Reference: AES%d\n",
    VAR_30);

 FUNC_7(VAR_25, "System Clock Frequency: %d\n",
      VAR_26->system_sample_rate);

 FUNC_7(VAR_25, "Double speed: %s\n",
   VAR_26->control_register & VAR_5?
   "Double wire" : "Single wire");
 FUNC_7(VAR_25, "Quad speed: %s\n",
   VAR_26->control_register & VAR_11?
   "Double wire" :
   VAR_26->control_register & VAR_12?
   "Quad wire" : "Single wire");

 FUNC_7(VAR_25, "--- Status:\n");

 FUNC_7(VAR_25, "Word: %s  Frequency: %d\n",
      (VAR_27 & VAR_1)? "Sync   " : "No Lock",
      FUNC_0((VAR_27 >> VAR_0) & 0xF));

 for (VAR_34 = 0; VAR_34 < 8; VAR_34++) {
  FUNC_7(VAR_25, "AES%d: %s  Frequency: %d\n",
       VAR_34+1,
       (VAR_28 & (VAR_10 >> VAR_34)) ?
       "Sync   ": "No Lock",
       FUNC_0((VAR_29 >> (4*VAR_34)) & 0xF));
 }

 switch (FUNC_1(VAR_26)) {
 case 139: VAR_31="None"; break;
 case 138: VAR_31="Word Clock"; break;
 case 147: VAR_31="AES1"; break;
 case 146: VAR_31="AES2"; break;
 case 145: VAR_31="AES3"; break;
 case 144: VAR_31="AES4"; break;
 case 143: VAR_31="AES5"; break;
 case 142: VAR_31="AES6"; break;
 case 141: VAR_31="AES7"; break;
 case 140: VAR_31="AES8"; break;
 default: VAR_31 = "---"; break;
 }
 FUNC_7(VAR_25, "AutoSync ref = %s\n", VAR_31);

 FUNC_7(VAR_25, "\n");
}
