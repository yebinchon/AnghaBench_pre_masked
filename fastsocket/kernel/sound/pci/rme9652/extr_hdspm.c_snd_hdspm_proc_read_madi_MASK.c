
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_info_entry {struct hdspm* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hdspm {int control_register; int system_sample_rate; scalar_t__ precise_ptr; scalar_t__ period_bytes; int control2_register; int irq_count; scalar_t__ iobase; int port; int irq; int firmware_rev; TYPE_1__* card; int card_name; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 unsigned int VAR_0 ;



 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;







 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;


 int VAR_9 ;


 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int FUNC_0 (struct hdspm*) ;
 int FUNC_1 (struct hdspm*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hdspm*) ;
 scalar_t__ FUNC_4 (struct hdspm*) ;
 int FUNC_5 (struct hdspm*) ;
 int FUNC_6 (struct hdspm*,int ) ;
 int FUNC_7 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void
FUNC_8(struct snd_info_entry * VAR_30,
    struct snd_info_buffer *VAR_31)
{
 struct hdspm *VAR_32 = VAR_30->private_data;
 unsigned int VAR_33;
 unsigned int VAR_34;
 char *VAR_35;
 char *VAR_36;
 char *VAR_37;
 char *VAR_38;
 char *VAR_39;
 char *VAR_40;
 int VAR_41, VAR_42;

 VAR_33 = FUNC_6(VAR_32, VAR_22);
 VAR_34 = FUNC_6(VAR_32, VAR_23);

 FUNC_7(VAR_31, "%s (Card #%d) Rev.%x Status2first3bits: %x\n",
      VAR_32->card_name, VAR_32->card->number + 1,
      VAR_32->firmware_rev,
      (VAR_34 & VAR_24) |
      (VAR_34 & VAR_25) | (VAR_34 &
        VAR_26));

 FUNC_7(VAR_31, "IRQ: %d Registers bus: 0x%lx VM: 0x%lx\n",
      VAR_32->irq, VAR_32->port, (unsigned long)VAR_32->iobase);

 FUNC_7(VAR_31, "--- System ---\n");

 FUNC_7(VAR_31,
      "IRQ Pending: Audio=%d, MIDI0=%d, MIDI1=%d, IRQcount=%d\n",
      VAR_33 & VAR_11,
      (VAR_33 & VAR_16) ? 1 : 0,
      (VAR_33 & VAR_17) ? 1 : 0,
      VAR_32->irq_count);
 FUNC_7(VAR_31,
      "HW pointer: id = %d, rawptr = %d (%d->%d) "
      "estimated= %ld (bytes)\n",
      ((VAR_33 & VAR_2) ? 1 : 0),
      (VAR_33 & VAR_3),
      (VAR_33 & VAR_3) %
      (2 * (int)VAR_32->period_bytes),
      ((VAR_33 & VAR_3) - 64) %
      (2 * (int)VAR_32->period_bytes),
      (long) FUNC_4(VAR_32) * 4);

 FUNC_7(VAR_31,
      "MIDI FIFO: Out1=0x%x, Out2=0x%x, In1=0x%x, In2=0x%x \n",
      FUNC_6(VAR_32, VAR_20) & 0xFF,
      FUNC_6(VAR_32, VAR_21) & 0xFF,
      FUNC_6(VAR_32, VAR_18) & 0xFF,
      FUNC_6(VAR_32, VAR_19) & 0xFF);
 FUNC_7(VAR_31,
      "Register: ctrl1=0x%x, ctrl2=0x%x, status1=0x%x, "
      "status2=0x%x\n",
      VAR_32->control_register, VAR_32->control2_register,
      VAR_33, VAR_34);

 FUNC_7(VAR_31, "--- Settings ---\n");

 VAR_41 = 1 << (6 + FUNC_2(VAR_32->control_register &
        VAR_6));

 FUNC_7(VAR_31,
      "Size (Latency): %d samples (2 periods of %lu bytes)\n",
      VAR_41, (unsigned long) VAR_32->period_bytes);

 FUNC_7(VAR_31, "Line out: %s,   Precise Pointer: %s\n",
      (VAR_32->control_register & VAR_7) ? "on " : "off",
      (VAR_32->precise_ptr) ? "on" : "off");

 switch (VAR_32->control_register & VAR_5) {
 case 132:
  VAR_39 = "Optical";
  break;
 case 133:
  VAR_39 = "Coaxial";
  break;
 default:
  VAR_39 = "Unkown";
 }

 switch (VAR_32->control_register & VAR_9) {
 case 128:
  VAR_40 = "WordClock";
  break;
 case 129:
  VAR_40 = "MADI";
  break;
 default:
  VAR_40 = "Unkown";
 }
 FUNC_7(VAR_31, "Inputsel = %s, SyncRef = %s\n", VAR_39,
      VAR_40);

 FUNC_7(VAR_31,
      "ClearTrackMarker = %s, Transmit in %s Channel Mode, "
      "Auto Input %s\n",
      (VAR_32->
       control_register & VAR_12) ? "on" : "off",
      (VAR_32->
       control_register & VAR_10) ? "64" : "56",
      (VAR_32->
       control_register & VAR_1) ? "on" : "off");

 switch (FUNC_1(VAR_32)) {
 case 140:
  VAR_38 = "AutoSync";
  break;
 case 139:
  VAR_38 = "Internal 32 kHz";
  break;
 case 138:
  VAR_38 = "Internal 44.1 kHz";
  break;
 case 137:
  VAR_38 = "Internal 48 kHz";
  break;
 case 136:
  VAR_38 = "Internal 64 kHz";
  break;
 case 135:
  VAR_38 = "Internal 88.2 kHz";
  break;
 case 134:
  VAR_38 = "Internal 96 kHz";
  break;
 default:
  VAR_38 = "Error";
 }
 FUNC_7(VAR_31, "Sample Clock Source: %s\n", VAR_38);
 if (!(VAR_32->control_register & VAR_4))
  VAR_37 = "Slave";
 else
  VAR_37 = "Master";
 FUNC_7(VAR_31, "System Clock Mode: %s\n", VAR_37);

 switch (FUNC_5(VAR_32)) {
 case 130:
  VAR_35 = "Word Clock";
  break;
 case 131:
  VAR_35 = "MADI Sync";
  break;
 default:
  VAR_35 = "XXXX Clock";
  break;
 }
 FUNC_7(VAR_31, "Preferred Sync Reference: %s\n",
      VAR_35);

 FUNC_7(VAR_31, "System Clock Frequency: %d\n",
      VAR_32->system_sample_rate);


 FUNC_7(VAR_31, "--- Status:\n");

 VAR_41 = VAR_33 & VAR_15;
 VAR_42 = VAR_34 & VAR_29;

 FUNC_7(VAR_31, "Inputs MADI=%s, WordClock=%s\n",
      (VAR_33 & VAR_14) ? (VAR_41 ? "Sync" : "Lock") :
      "NoLock",
      (VAR_34 & VAR_28) ? (VAR_42 ? "Sync" : "Lock") :
      "NoLock");

 switch (FUNC_0(VAR_32)) {
 case 141:
  VAR_36 = "Word Clock";
  break;
 case 143:
  VAR_36 = "MADI Sync";
  break;
 case 142:
  VAR_36 = "Input not valid";
  break;
 default:
  VAR_36 = "---";
  break;
 }
 FUNC_7(VAR_31,
      "AutoSync: Reference= %s, Freq=%d (MADI = %d, Word = %d)\n",
      VAR_36, FUNC_3(VAR_32),
      (VAR_33 & VAR_13) >> 22,
      (VAR_34 & VAR_27) >> 5);

 FUNC_7(VAR_31, "Input: %s, Mode=%s\n",
      (VAR_33 & VAR_0) ? "Coax" : "Optical",
      (VAR_33 & VAR_8) ? "64 channels" :
      "56 channels");

 FUNC_7(VAR_31, "\n");
}
