
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct hda_codec* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct hda_codec {unsigned int addr; unsigned int afg; unsigned int mfg; unsigned int vendor_id; unsigned int subsystem_id; unsigned int revision_id; int (* proc_widget_hook ) (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;scalar_t__ pin_amp_workaround; scalar_t__ single_adc_amp; int nids; int mixers; int mfg_unsol; int mfg_function_id; int afg_unsol; int afg_function_id; scalar_t__ chip_name; scalar_t__ vendor_name; } ;
typedef unsigned int hda_nid_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;




 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int*) ;
 unsigned int* FUNC_4 (int,int ) ;
 int FUNC_5 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int ) ;
 int FUNC_6 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int ,unsigned int,int) ;
 int FUNC_7 (struct snd_info_buffer*,struct hda_codec*,unsigned int,unsigned int) ;
 int FUNC_8 (struct snd_info_buffer*,struct hda_codec*,unsigned int,unsigned int,unsigned int*,int) ;
 int FUNC_9 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_10 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_11 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int *) ;
 int FUNC_12 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_13 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_14 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int*) ;
 int FUNC_15 (struct snd_info_buffer*,struct hda_codec*,unsigned int,int) ;
 int FUNC_16 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_17 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_18 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_19 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_20 (struct hda_codec*,unsigned int) ;
 scalar_t__ FUNC_21 (struct hda_codec*,unsigned int,unsigned int*,int) ;
 int FUNC_22 (struct hda_codec*,unsigned int,unsigned int*) ;
 unsigned int FUNC_23 (struct hda_codec*,unsigned int,int ) ;
 int FUNC_24 (struct hda_codec*) ;
 int FUNC_25 (struct hda_codec*) ;
 int FUNC_26 (struct snd_info_buffer*,char*,...) ;
 int FUNC_27 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;
 int FUNC_28 (struct snd_info_buffer*,struct hda_codec*,unsigned int) ;

__attribute__((used)) static void FUNC_29(struct snd_info_entry *VAR_18,
        struct snd_info_buffer *VAR_19)
{
 struct hda_codec *VAR_20 = VAR_18->private_data;
 hda_nid_t VAR_21;
 int VAR_22, VAR_23;

 FUNC_26(VAR_19, "Codec: ");
 if (VAR_20->vendor_name && VAR_20->chip_name)
  FUNC_26(VAR_19, "%s %s\n",
       VAR_20->vendor_name, VAR_20->chip_name);
 else
  FUNC_26(VAR_19, "Not Set\n");
 FUNC_26(VAR_19, "Address: %d\n", VAR_20->addr);
 if (VAR_20->afg)
  FUNC_26(VAR_19, "AFG Function Id: 0x%x (unsol %u)\n",
   VAR_20->afg_function_id, VAR_20->afg_unsol);
 if (VAR_20->mfg)
  FUNC_26(VAR_19, "MFG Function Id: 0x%x (unsol %u)\n",
   VAR_20->mfg_function_id, VAR_20->mfg_unsol);
 FUNC_26(VAR_19, "Vendor Id: 0x%08x\n", VAR_20->vendor_id);
 FUNC_26(VAR_19, "Subsystem Id: 0x%08x\n", VAR_20->subsystem_id);
 FUNC_26(VAR_19, "Revision Id: 0x%x\n", VAR_20->revision_id);

 if (VAR_20->mfg)
  FUNC_26(VAR_19, "Modem Function Group: 0x%x\n", VAR_20->mfg);
 else
  FUNC_26(VAR_19, "No Modem Function Group found\n");

 if (! VAR_20->afg)
  return;
 FUNC_25(VAR_20);
 FUNC_26(VAR_19, "Default PCM:\n");
 FUNC_13(VAR_19, VAR_20, VAR_20->afg);
 FUNC_26(VAR_19, "Default Amp-In caps: ");
 FUNC_5(VAR_19, VAR_20, VAR_20->afg, VAR_16);
 FUNC_26(VAR_19, "Default Amp-Out caps: ");
 FUNC_5(VAR_19, VAR_20, VAR_20->afg, VAR_17);
 FUNC_26(VAR_19, "State of AFG node 0x%02x:\n", VAR_20->afg);
 FUNC_16(VAR_19, VAR_20, VAR_20->afg);

 VAR_23 = FUNC_22(VAR_20, VAR_20->afg, &VAR_21);
 if (! VAR_21 || VAR_23 < 0) {
  FUNC_26(VAR_19, "Invalid AFG subtree\n");
  FUNC_24(VAR_20);
  return;
 }

 FUNC_10(VAR_19, VAR_20, VAR_20->afg);
 if (VAR_20->proc_widget_hook)
  VAR_20->proc_widget_hook(VAR_19, VAR_20, VAR_20->afg);

 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++, VAR_21++) {
  unsigned int VAR_24 =
   FUNC_23(VAR_20, VAR_21,
        VAR_0);
  unsigned int VAR_25 = FUNC_1(VAR_24);
  hda_nid_t *VAR_26 = ((void*)0);
  int VAR_27 = 0;

  FUNC_26(VAR_19, "Node 0x%02x [%s] wcaps 0x%x:", VAR_21,
       FUNC_2(VAR_25), VAR_24);
  if (VAR_24 & VAR_12) {
   unsigned int VAR_28 = FUNC_0(VAR_24);
   if (VAR_28 == 2)
    FUNC_26(VAR_19, " Stereo");
   else
    FUNC_26(VAR_19, " %d-Channels", VAR_28);
  } else
   FUNC_26(VAR_19, " Mono");
  if (VAR_24 & VAR_5)
   FUNC_26(VAR_19, " Digital");
  if (VAR_24 & VAR_7)
   FUNC_26(VAR_19, " Amp-In");
  if (VAR_24 & VAR_9)
   FUNC_26(VAR_19, " Amp-Out");
  if (VAR_24 & VAR_13)
   FUNC_26(VAR_19, " Stripe");
  if (VAR_24 & VAR_8)
   FUNC_26(VAR_19, " R/L");
  if (VAR_24 & VAR_2)
   FUNC_26(VAR_19, " CP");
  FUNC_26(VAR_19, "\n");

  FUNC_11(VAR_19, VAR_20, VAR_21, &VAR_20->mixers);
  FUNC_11(VAR_19, VAR_20, VAR_21, &VAR_20->nids);
  FUNC_12(VAR_19, VAR_20, VAR_21);




  if (VAR_25 == 128)
   VAR_24 |= VAR_1;

  if (VAR_24 & VAR_1) {
   VAR_27 = FUNC_20(VAR_20, VAR_21);
   if (VAR_27 > 0) {
    VAR_26 = FUNC_4(sizeof(hda_nid_t) * VAR_27,
            VAR_15);
    if (!VAR_26)
     return;
    if (FUNC_21(VAR_20, VAR_21, VAR_26,
        VAR_27) < 0)
     VAR_27 = 0;
   }
  }

  if (VAR_24 & VAR_7) {
   FUNC_26(VAR_19, "  Amp-In caps: ");
   FUNC_5(VAR_19, VAR_20, VAR_21, VAR_16);
   FUNC_26(VAR_19, "  Amp-In vals: ");
   if (VAR_25 == 129 ||
       (VAR_20->single_adc_amp &&
        VAR_25 == 131))
    FUNC_6(VAR_19, VAR_20, VAR_21, VAR_16,
            VAR_24 & VAR_12,
            1);
   else
    FUNC_6(VAR_19, VAR_20, VAR_21, VAR_16,
            VAR_24 & VAR_12,
            VAR_27);
  }
  if (VAR_24 & VAR_9) {
   FUNC_26(VAR_19, "  Amp-Out caps: ");
   FUNC_5(VAR_19, VAR_20, VAR_21, VAR_17);
   FUNC_26(VAR_19, "  Amp-Out vals: ");
   if (VAR_25 == 129 &&
       VAR_20->pin_amp_workaround)
    FUNC_6(VAR_19, VAR_20, VAR_21, VAR_17,
            VAR_24 & VAR_12,
            VAR_27);
   else
    FUNC_6(VAR_19, VAR_20, VAR_21, VAR_17,
            VAR_24 & VAR_12, 1);
  }

  switch (VAR_25) {
  case 129: {
   int VAR_29;
   FUNC_14(VAR_19, VAR_20, VAR_21, &VAR_29);
   FUNC_15(VAR_19, VAR_20, VAR_21, VAR_29);
   break;
  }
  case 128:
   FUNC_19(VAR_19, VAR_20, VAR_21);
   break;
  case 130:
  case 131:
   FUNC_7(VAR_19, VAR_20, VAR_21, VAR_25);
   if (VAR_24 & VAR_5)
    FUNC_9(VAR_19, VAR_20, VAR_21);
   if (VAR_24 & VAR_6) {
    FUNC_26(VAR_19, "  PCM:\n");
    FUNC_13(VAR_19, VAR_20, VAR_21);
   }
   break;
  }

  if (VAR_24 & VAR_14)
   FUNC_18(VAR_19, VAR_20, VAR_21);

  if (VAR_24 & VAR_10)
   FUNC_16(VAR_19, VAR_20, VAR_21);

  if (VAR_24 & VAR_3)
   FUNC_26(VAR_19, "  Delay: %d samples\n",
        (VAR_24 & VAR_3) >>
        VAR_4);

  if (VAR_24 & VAR_1)
   FUNC_8(VAR_19, VAR_20, VAR_21, VAR_25,
     VAR_26, VAR_27);

  if (VAR_24 & VAR_11)
   FUNC_17(VAR_19, VAR_20, VAR_21);

  if (VAR_20->proc_widget_hook)
   VAR_20->proc_widget_hook(VAR_19, VAR_20, VAR_21);

  FUNC_3(VAR_26);
 }
 FUNC_24(VAR_20);
}
