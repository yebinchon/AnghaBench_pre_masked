
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {scalar_t__ private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdsp {int control_register; int state; int io_type; scalar_t__ clock_source_locked; int system_sample_rate; scalar_t__ precise_ptr; scalar_t__ period_bytes; scalar_t__ use_midi_tasklet; int control2_register; scalar_t__ iobase; int port; int irq; int playback_buffer; int capture_buffer; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;




 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;






 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int FUNC_0 (struct hdsp*) ;
 int FUNC_1 (struct hdsp*) ;
 scalar_t__ FUNC_2 (struct hdsp*,int ) ;
 scalar_t__ FUNC_3 (struct hdsp*) ;
 int FUNC_4 (struct hdsp*) ;
 int FUNC_5 (struct hdsp*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct hdsp*) ;
 int FUNC_8 (struct hdsp*) ;
 int FUNC_9 (struct hdsp*) ;
 int FUNC_10 (struct hdsp*) ;
 int FUNC_11 (struct hdsp*,int ) ;
 int FUNC_12 (struct hdsp*) ;
 int FUNC_13 (struct hdsp*) ;
 int FUNC_14 (struct hdsp*) ;
 scalar_t__ FUNC_15 (struct hdsp*) ;
 scalar_t__ FUNC_16 (struct hdsp*) ;
 scalar_t__ FUNC_17 (struct hdsp*) ;
 int FUNC_18 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_19(struct snd_info_entry *VAR_32, struct snd_info_buffer *VAR_33)
{
 struct hdsp *VAR_34 = (struct hdsp *) VAR_32->private_data;
 unsigned int VAR_35;
 unsigned int VAR_36;
 char *VAR_37;
 char *VAR_38;
 char *VAR_39;
 char *VAR_40;
 int VAR_41;

 VAR_35 = FUNC_11(VAR_34, VAR_26);
 VAR_36 = FUNC_11(VAR_34, VAR_25);

 FUNC_18(VAR_33, "%s (Card #%d)\n", VAR_34->card_name,
      VAR_34->card->number + 1);
 FUNC_18(VAR_33, "Buffers: capture %p playback %p\n",
      VAR_34->capture_buffer, VAR_34->playback_buffer);
 FUNC_18(VAR_33, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_34->irq, VAR_34->port, (unsigned long)VAR_34->iobase);
 FUNC_18(VAR_33, "Control register: 0x%x\n", VAR_34->control_register);
 FUNC_18(VAR_33, "Control2 register: 0x%x\n",
      VAR_34->control2_register);
 FUNC_18(VAR_33, "Status register: 0x%x\n", VAR_35);
 FUNC_18(VAR_33, "Status2 register: 0x%x\n", VAR_36);

 if (FUNC_3(VAR_34)) {
  FUNC_18(VAR_33, "No I/O box connected.\n"
       "Please connect one and upload firmware.\n");
  return;
 }

 if (FUNC_2(VAR_34, 0)) {
  if (VAR_34->state & VAR_3) {
   if (FUNC_17(VAR_34) != 0) {
    FUNC_18(VAR_33, "Firmware loading from "
         "cache failed, "
         "please upload manually.\n");
    return;
   }
  } else {
   int VAR_42 = -VAR_0;



   if (VAR_42 < 0) {
    FUNC_18(VAR_33,
         "No firmware loaded nor cached, "
         "please upload firmware.\n");
    return;
   }
  }
 }

 FUNC_18(VAR_33, "FIFO status: %d\n", FUNC_11(VAR_34, VAR_20) & 0xff);
 FUNC_18(VAR_33, "MIDI1 Output status: 0x%x\n", FUNC_11(VAR_34, VAR_23));
 FUNC_18(VAR_33, "MIDI1 Input status: 0x%x\n", FUNC_11(VAR_34, VAR_21));
 FUNC_18(VAR_33, "MIDI2 Output status: 0x%x\n", FUNC_11(VAR_34, VAR_24));
 FUNC_18(VAR_33, "MIDI2 Input status: 0x%x\n", FUNC_11(VAR_34, VAR_22));
 FUNC_18(VAR_33, "Use Midi Tasklet: %s\n", VAR_34->use_midi_tasklet ? "on" : "off");

 FUNC_18(VAR_33, "\n");

 VAR_41 = 1 << (6 + FUNC_6(VAR_34->control_register & VAR_4));

 FUNC_18(VAR_33, "Buffer Size (Latency): %d samples (2 periods of %lu bytes)\n", VAR_41, (unsigned long) VAR_34->period_bytes);
 FUNC_18(VAR_33, "Hardware pointer (frames): %ld\n", FUNC_8(VAR_34));
 FUNC_18(VAR_33, "Precise pointer: %s\n", VAR_34->precise_ptr ? "on" : "off");
 FUNC_18(VAR_33, "Line out: %s\n", (VAR_34->control_register & VAR_5) ? "on" : "off");

 FUNC_18(VAR_33, "Firmware version: %d\n", (VAR_36&VAR_27)|(VAR_36&VAR_28)<<1|(VAR_36&VAR_29)<<2);

 FUNC_18(VAR_33, "\n");

 switch (FUNC_4(VAR_34)) {
 case 147:
  VAR_40 = "AutoSync";
  break;
 case 143:
  VAR_40 = "Internal 32 kHz";
  break;
 case 142:
  VAR_40 = "Internal 44.1 kHz";
  break;
 case 141:
  VAR_40 = "Internal 48 kHz";
  break;
 case 140:
  VAR_40 = "Internal 64 kHz";
  break;
 case 139:
  VAR_40 = "Internal 88.2 kHz";
  break;
 case 138:
  VAR_40 = "Internal 96 kHz";
  break;
 case 146:
  VAR_40 = "Internal 128 kHz";
  break;
 case 145:
  VAR_40 = "Internal 176.4 kHz";
  break;
  case 144:
  VAR_40 = "Internal 192 kHz";
  break;
 default:
  VAR_40 = "Error";
 }
 FUNC_18 (VAR_33, "Sample Clock Source: %s\n", VAR_40);

 if (FUNC_15(VAR_34))
  VAR_39 = "Slave";
 else
  VAR_39 = "Master";

 switch (FUNC_10 (VAR_34)) {
 case 128:
  VAR_37 = "Word Clock";
  break;
 case 130:
  VAR_37 = "ADAT Sync";
  break;
 case 129:
  VAR_37 = "SPDIF";
  break;
 case 133:
  VAR_37 = "ADAT1";
  break;
 case 132:
  VAR_37 = "ADAT2";
  break;
 case 131:
  VAR_37 = "ADAT3";
  break;
 default:
  VAR_37 = "Word Clock";
  break;
 }
 FUNC_18 (VAR_33, "Preferred Sync Reference: %s\n", VAR_37);

 switch (FUNC_1 (VAR_34)) {
 case 148:
  VAR_38 = "Word Clock";
  break;
 case 151:
  VAR_38 = "ADAT Sync";
  break;
 case 149:
  VAR_38 = "SPDIF";
  break;
 case 150:
  VAR_38 = "None";
  break;
 case 154:
  VAR_38 = "ADAT1";
  break;
 case 153:
  VAR_38 = "ADAT2";
  break;
 case 152:
  VAR_38 = "ADAT3";
  break;
 default:
  VAR_38 = "---";
  break;
 }
 FUNC_18 (VAR_33, "AutoSync Reference: %s\n", VAR_38);

 FUNC_18 (VAR_33, "AutoSync Frequency: %d\n", FUNC_7(VAR_34));

 FUNC_18 (VAR_33, "System Clock Mode: %s\n", VAR_39);

 FUNC_18 (VAR_33, "System Clock Frequency: %d\n", VAR_34->system_sample_rate);
 FUNC_18 (VAR_33, "System Clock Locked: %s\n", VAR_34->clock_source_locked ? "Yes" : "No");

 FUNC_18(VAR_33, "\n");

 switch (FUNC_13(VAR_34)) {
 case 134:
  FUNC_18(VAR_33, "IEC958 input: Optical\n");
  break;
 case 136:
  FUNC_18(VAR_33, "IEC958 input: Coaxial\n");
  break;
 case 135:
  FUNC_18(VAR_33, "IEC958 input: Internal\n");
  break;
 case 137:
  FUNC_18(VAR_33, "IEC958 input: AES\n");
  break;
 default:
  FUNC_18(VAR_33, "IEC958 input: ???\n");
  break;
 }

 if (VAR_34->control_register & VAR_12)
  FUNC_18(VAR_33, "IEC958 output: Coaxial & ADAT1\n");
 else
  FUNC_18(VAR_33, "IEC958 output: Coaxial only\n");

 if (VAR_34->control_register & VAR_13)
  FUNC_18(VAR_33, "IEC958 quality: Professional\n");
 else
  FUNC_18(VAR_33, "IEC958 quality: Consumer\n");

 if (VAR_34->control_register & VAR_9)
  FUNC_18(VAR_33, "IEC958 emphasis: on\n");
 else
  FUNC_18(VAR_33, "IEC958 emphasis: off\n");

 if (VAR_34->control_register & VAR_11)
  FUNC_18(VAR_33, "IEC958 NonAudio: on\n");
 else
  FUNC_18(VAR_33, "IEC958 NonAudio: off\n");
 if ((VAR_41 = FUNC_14 (VAR_34)) != 0)
  FUNC_18 (VAR_33, "IEC958 sample rate: %d\n", VAR_41);
 else
  FUNC_18 (VAR_33, "IEC958 sample rate: Error flag set\n");

 FUNC_18(VAR_33, "\n");


 VAR_41 = VAR_35 & VAR_15;
 if (VAR_35 & VAR_6)
  FUNC_18(VAR_33, "ADAT1: %s\n", VAR_41 ? "Sync" : "Lock");
 else
  FUNC_18(VAR_33, "ADAT1: No Lock\n");

 switch (VAR_34->io_type) {
 case 156:
 case 155:
  VAR_41 = VAR_35 & VAR_16;
  if (VAR_35 & VAR_7)
   FUNC_18(VAR_33, "ADAT2: %s\n", VAR_41 ? "Sync" : "Lock");
  else
   FUNC_18(VAR_33, "ADAT2: No Lock\n");
  VAR_41 = VAR_35 & VAR_17;
  if (VAR_35 & VAR_8)
   FUNC_18(VAR_33, "ADAT3: %s\n", VAR_41 ? "Sync" : "Lock");
  else
   FUNC_18(VAR_33, "ADAT3: No Lock\n");
  break;
 default:

  break;
 }

 VAR_41 = VAR_35 & VAR_14;
 if (VAR_35 & VAR_10)
  FUNC_18 (VAR_33, "SPDIF: No Lock\n");
 else
  FUNC_18 (VAR_33, "SPDIF: %s\n", VAR_41 ? "Sync" : "Lock");

 VAR_41 = VAR_36 & VAR_31;
 if (VAR_36 & VAR_30)
  FUNC_18 (VAR_33, "Word Clock: %s\n", VAR_41 ? "Sync" : "Lock");
 else
  FUNC_18 (VAR_33, "Word Clock: No Lock\n");

 VAR_41 = VAR_35 & VAR_19;
 if (VAR_35 & VAR_18)
  FUNC_18(VAR_33, "ADAT Sync: %s\n", VAR_41 ? "Sync" : "Lock");
 else
  FUNC_18(VAR_33, "ADAT Sync: No Lock\n");

 FUNC_18(VAR_33, "\n");


 if (VAR_34->io_type == VAR_1) {
  char *VAR_43;

  switch (FUNC_0(VAR_34)) {
  case 0:
   VAR_43 = "-10 dBV";
   break;
  case 1:
   VAR_43 = "+4 dBu";
   break;
  default:
   VAR_43 = "Lo Gain";
   break;
  }
  FUNC_18(VAR_33, "AD Gain : %s\n", VAR_43);

  switch (FUNC_5(VAR_34)) {
  case 0:
   VAR_43 = "Hi Gain";
   break;
  case 1:
   VAR_43 = "+4 dBu";
   break;
  default:
   VAR_43 = "-10 dBV";
   break;
  }
  FUNC_18(VAR_33, "DA Gain : %s\n", VAR_43);

  switch (FUNC_9(VAR_34)) {
  case 0:
   VAR_43 = "0 dB";
   break;
  case 1:
   VAR_43 = "-6 dB";
   break;
  default:
   VAR_43 = "-12 dB";
   break;
  }
  FUNC_18(VAR_33, "Phones Gain : %s\n", VAR_43);

  FUNC_18(VAR_33, "XLR Breakout Cable : %s\n", FUNC_16(VAR_34) ? "yes" : "no");

  if (VAR_34->control_register & VAR_2)
   FUNC_18(VAR_33, "AEB : on (ADAT1 internal)\n");
  else
   FUNC_18(VAR_33, "AEB : off (ADAT1 external)\n");
  FUNC_18(VAR_33, "\n");
 }

}
