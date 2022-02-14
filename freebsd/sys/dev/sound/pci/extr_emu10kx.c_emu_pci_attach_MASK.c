
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sndcard_func {struct emu_pcminfo* varinfo; void* func; } ;
struct emu_sc_info {int rev; int has_ac97; int has_51; int has_71; int broken_digital; int is_emu10k1; int is_emu10k2; int is_ca0102; int is_ca0108; int is_cardbus; int opcode_shift; int high_operand_shift; int input_base; int output_base; int efxc_base; int dsp_zero; int num_gprs; int code_size; int mchannel_fx; int num_fxbuses; int num_inputs; int num_outputs; int lock; int rw; int * irq; scalar_t__ ih; int * reg; int * rm; scalar_t__ cdev; int ** midi; int ** pcm; scalar_t__ mch_rec; scalar_t__ mch_disabled; TYPE_1__* voice; scalar_t__* timer; int sh; int st; int address_mask; int gpr_base; int code_base; int dev; scalar_t__ enable_ir; int type; scalar_t__ dbg_level; int * root; int * ctx; } ;
struct emu_pcminfo {size_t route; int portnr; int port; struct emu_sc_info* card; } ;
struct emu_midiinfo {size_t route; int portnr; int port; struct emu_sc_info* card; } ;
typedef int device_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int vnum; scalar_t__ end; scalar_t__ start; scalar_t__ speed; scalar_t__ stereo; scalar_t__ b16; scalar_t__ running; scalar_t__ ismaster; scalar_t__ busy; int * slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_31 ;
 int VAR_32 ;
 size_t VAR_33 ;
 int VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 int FUNC_2 (int *,int ,int ,char*,int ,scalar_t__*,int ,char*) ;
 int FUNC_3 (int *) ;
 int VAR_42 ;
 int VAR_43 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int,int *,int ,struct emu_sc_info*,scalar_t__*) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 void* FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ) ;
 struct emu_sc_info* FUNC_11 (int ) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *,struct sndcard_func*) ;
 scalar_t__ FUNC_17 (struct emu_sc_info*) ;
 int FUNC_18 (struct emu_sc_info*) ;
 scalar_t__ FUNC_19 (struct emu_sc_info*) ;
 TYPE_2__* VAR_44 ;
 size_t FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (struct emu_sc_info*) ;
 int VAR_45 ;
 scalar_t__ FUNC_22 (struct emu_sc_info*) ;
 int FUNC_23 (struct emu_sc_info*) ;
 void* FUNC_24 (int,int ,int) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,char*,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (char*,int,char*,scalar_t__*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (char*,int,char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_35(device_t VAR_46)
{
 struct sndcard_func *VAR_47;
 struct emu_sc_info *VAR_48;
 struct emu_pcminfo *VAR_49;



 int VAR_50;
 int VAR_51;
 char VAR_52[255];
 int VAR_53 = VAR_13;
 int VAR_54;

 VAR_48 = FUNC_11(VAR_46);
 VAR_54 = FUNC_14(VAR_46);



 VAR_48->ctx = FUNC_12(VAR_46);
 if (VAR_48->ctx == ((void*)0))
  goto bad;
 VAR_48->root = FUNC_13(VAR_46);
 if (VAR_48->root == ((void*)0))
  goto bad;

 if (FUNC_30("emu10kx", VAR_54, "multichannel_disabled", &(VAR_48->mch_disabled)))
  FUNC_1(VAR_48->mch_disabled, 0, 1);
 FUNC_2(FUNC_12(VAR_46),
     FUNC_3(FUNC_13(VAR_46)),
            VAR_30, "multichannel_disabled", VAR_1, &(VAR_48->mch_disabled), 0, "Multichannel playback setting");

 if (FUNC_30("emu10kx", VAR_54, "multichannel_recording", &(VAR_48->mch_rec)))
  FUNC_1(VAR_48->mch_rec, 0, 1);
 FUNC_2(FUNC_12(VAR_46),
     FUNC_3(FUNC_13(VAR_46)),
            VAR_30, "multichannel_recording", VAR_1, &(VAR_48->mch_rec), 0, "Multichannel recording setting");

 if (FUNC_30("emu10kx", VAR_54, "debug", &(VAR_48->dbg_level)))
  FUNC_1(VAR_48->mch_rec, 0, 2);
 FUNC_2(FUNC_12(VAR_46),
     FUNC_3(FUNC_13(VAR_46)),
            VAR_30, "debug", VAR_2, &(VAR_48->dbg_level), 0, "Debug level");


 FUNC_26(&VAR_48->lock, FUNC_10(VAR_46), "bridge conf", VAR_24);
 FUNC_26(&VAR_48->rw, FUNC_10(VAR_46), "exclusive io", VAR_24);
 VAR_48->dev = VAR_46;
 VAR_48->type = FUNC_28(VAR_46);
 VAR_48->rev = FUNC_29(VAR_46);
 VAR_48->enable_ir = 0;
 VAR_48->has_ac97 = 0;
 VAR_48->has_51 = 0;
 VAR_48->has_71 = 0;
 VAR_48->broken_digital = 0;
 VAR_48->is_emu10k1 = 0;
 VAR_48->is_emu10k2 = 0;
 VAR_48->is_ca0102 = 0;
 VAR_48->is_ca0108 = 0;
 VAR_48->is_cardbus = 0;

 VAR_51 = VAR_44[FUNC_20(VAR_46)].flags;
 if (VAR_51 & VAR_14)
  VAR_48->has_51 = 1;
 if (VAR_51 & VAR_15) {
  VAR_48->has_51 = 1;
  VAR_48->has_71 = 1;
 }
 if (VAR_51 & VAR_22)
  VAR_48->is_emu10k1 = 1;
 if (VAR_51 & VAR_23)
  VAR_48->is_emu10k2 = 1;
 if (VAR_51 & VAR_19)
  VAR_48->is_ca0102 = 1;
 if (VAR_51 & VAR_20)
  VAR_48->is_ca0108 = 1;
 if ((VAR_48->is_emu10k2) && (VAR_48->rev == 4)) {
  VAR_48->is_emu10k2 = 0;
  VAR_48->is_ca0102 = 1;
 }
 if ((VAR_48->is_ca0102 == 1) || (VAR_48->is_ca0108 == 1))
  if (VAR_51 & VAR_21)
   VAR_48->is_cardbus = 1;

 if ((VAR_48->is_emu10k1 + VAR_48->is_emu10k2 + VAR_48->is_ca0102 + VAR_48->is_ca0108) != 1) {
  FUNC_15(VAR_48->dev, "Unable to detect HW chipset\n");
  goto bad;
 }
 if (VAR_51 & VAR_0)
  VAR_48->broken_digital = 1;
 if (VAR_51 & VAR_16)
  VAR_48->has_ac97 = 1;

 VAR_48->opcode_shift = 0;
 if ((VAR_48->is_emu10k2) || (VAR_48->is_ca0102) || (VAR_48->is_ca0108)) {
  VAR_48->opcode_shift = 24;
  VAR_48->high_operand_shift = 12;



  VAR_48->input_base = 0x40;

  VAR_48->output_base = 0x60;
  VAR_48->efxc_base = 0x80;


  VAR_48->dsp_zero = 0xc0;



  VAR_48->gpr_base = VAR_3;
  VAR_48->num_gprs = 0x200;
  VAR_48->code_base = VAR_4;
  VAR_48->code_size = 0x800 / 2;


  VAR_48->mchannel_fx = 8;
  VAR_48->num_fxbuses = 16;
  VAR_48->num_inputs = 8;
  VAR_48->num_outputs = 16;
  VAR_48->address_mask = VAR_7;
 }
 if (VAR_48->is_emu10k1) {
  VAR_48->has_51 = 0;
  VAR_48->opcode_shift = 20;
  VAR_48->high_operand_shift = 10;
  VAR_48->code_base = VAR_10;
  VAR_48->code_size = 0x400 / 2;

  VAR_48->gpr_base = VAR_8;
  VAR_48->num_gprs = 0x100;
  VAR_48->input_base = 0x10;
  VAR_48->output_base = 0x20;





  VAR_48->efxc_base = 0x30;
  VAR_48->dsp_zero = 0x40;
  VAR_48->mchannel_fx = 0;
  VAR_48->num_fxbuses = 8;
  VAR_48->num_inputs = 8;
  VAR_48->num_outputs = 16;
  VAR_48->address_mask = VAR_11;
 }
 if (VAR_48->opcode_shift == 0)
  goto bad;

 FUNC_27(VAR_46);

 VAR_50 = FUNC_0(0);
 VAR_48->reg = FUNC_4(VAR_46, VAR_42, &VAR_50, VAR_31);
 if (VAR_48->reg == ((void*)0)) {
  FUNC_15(VAR_46, "unable to map register space\n");
  goto bad;
 }
 VAR_48->st = FUNC_32(VAR_48->reg);
 VAR_48->sh = FUNC_31(VAR_48->reg);

 for (VAR_50 = 0; VAR_50 < VAR_9; VAR_50++)
  VAR_48->timer[VAR_50] = 0;

 VAR_50 = 0;
 VAR_48->irq = FUNC_4(VAR_46, VAR_43, &VAR_50, VAR_31 | VAR_32);
 if ((VAR_48->irq == ((void*)0)) || FUNC_7(VAR_46, VAR_48->irq, VAR_17 | VAR_18,
     ((void*)0),
     VAR_45, VAR_48, &VAR_48->ih)) {
  FUNC_15(VAR_46, "unable to map interrupt\n");
  goto bad;
 }
 if (FUNC_22(VAR_48) != 0) {
  FUNC_15(VAR_46, "unable to create resource manager\n");
  goto bad;
 }
 if (VAR_48->is_cardbus)
  if (FUNC_19(VAR_48) != 0) {
   FUNC_15(VAR_46, "unable to initialize CardBus interface\n");
   goto bad;
  }
 if (FUNC_21(VAR_48) != 0) {
  FUNC_15(VAR_46, "unable to initialize the card\n");
  goto bad;
 }
 if (FUNC_17(VAR_48) != 0) {
  FUNC_15(VAR_46, "unable to create control device\n");
  goto bad;
 }
 FUNC_34(VAR_52, 255, "rev %d at io 0x%jx irq %jd", VAR_48->rev, FUNC_33(VAR_48->reg), FUNC_33(VAR_48->irq));


 for (VAR_50 = 0; VAR_50 < VAR_29; VAR_50++) {
  VAR_48->voice[VAR_50].vnum = VAR_50;
  VAR_48->voice[VAR_50].slave = ((void*)0);
  VAR_48->voice[VAR_50].busy = 0;
  VAR_48->voice[VAR_50].ismaster = 0;
  VAR_48->voice[VAR_50].running = 0;
  VAR_48->voice[VAR_50].b16 = 0;
  VAR_48->voice[VAR_50].stereo = 0;
  VAR_48->voice[VAR_50].speed = 0;
  VAR_48->voice[VAR_50].start = 0;
  VAR_48->voice[VAR_50].end = 0;
 }


 for (VAR_50 = 0; VAR_50 < VAR_34; VAR_50++)
  VAR_48->pcm[VAR_50] = ((void*)0);


 VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
 if (VAR_47 == ((void*)0)) {
  VAR_53 = VAR_12;
  goto bad;
 }
 VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
 if (VAR_49 == ((void*)0)) {
  VAR_53 = VAR_12;
  goto bad;
 }
 VAR_49->card = VAR_48;
 VAR_49->route = VAR_35;

 VAR_47->func = VAR_41;
 VAR_47->varinfo = VAR_49;
 VAR_48->pcm[VAR_35] = FUNC_9(VAR_46, "pcm", -1);
 FUNC_16(VAR_48->pcm[VAR_35], VAR_47);

 if (!(VAR_48->mch_disabled)) {

  VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
  if (VAR_47 == ((void*)0)) {
   VAR_53 = VAR_12;
   goto bad;
  }
  VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
  if (VAR_49 == ((void*)0)) {
   VAR_53 = VAR_12;
   goto bad;
  }
  VAR_49->card = VAR_48;
  VAR_49->route = VAR_37;

  VAR_47->func = VAR_41;
  VAR_47->varinfo = VAR_49;
  VAR_48->pcm[VAR_37] = FUNC_9(VAR_46, "pcm", -1);
  FUNC_16(VAR_48->pcm[VAR_37], VAR_47);
  if (VAR_48->has_51) {

   VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
   if (VAR_47 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
   if (VAR_49 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49->card = VAR_48;
   VAR_49->route = VAR_33;

   VAR_47->func = VAR_41;
   VAR_47->varinfo = VAR_49;
   VAR_48->pcm[VAR_33] = FUNC_9(VAR_46, "pcm", -1);
   FUNC_16(VAR_48->pcm[VAR_33], VAR_47);

   VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
   if (VAR_47 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
   if (VAR_49 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49->card = VAR_48;
   VAR_49->route = VAR_39;

   VAR_47->func = VAR_41;
   VAR_47->varinfo = VAR_49;
   VAR_48->pcm[VAR_39] = FUNC_9(VAR_46, "pcm", -1);
   FUNC_16(VAR_48->pcm[VAR_39], VAR_47);
  }
  if (VAR_48->has_71) {

   VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
   if (VAR_47 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
   if (VAR_49 == ((void*)0)) {
    VAR_53 = VAR_12;
    goto bad;
   }
   VAR_49->card = VAR_48;
   VAR_49->route = VAR_38;

   VAR_47->func = VAR_41;
   VAR_47->varinfo = VAR_49;
   VAR_48->pcm[VAR_38] = FUNC_9(VAR_46, "pcm", -1);
   FUNC_16(VAR_48->pcm[VAR_38], VAR_47);
  }
 }

 if (VAR_48->mch_rec) {
  VAR_47 = FUNC_24(sizeof(struct sndcard_func), VAR_26, VAR_27 | VAR_28);
  if (VAR_47 == ((void*)0)) {
   VAR_53 = VAR_12;
   goto bad;
  }
  VAR_49 = FUNC_24(sizeof(struct emu_pcminfo), VAR_26, VAR_27 | VAR_28);
  if (VAR_49 == ((void*)0)) {
   VAR_53 = VAR_12;
   goto bad;
  }
  VAR_49->card = VAR_48;
  VAR_49->route = VAR_36;

  VAR_47->func = VAR_41;
  VAR_47->varinfo = VAR_49;
  VAR_48->pcm[VAR_36] = FUNC_9(VAR_46, "pcm", -1);
  FUNC_16(VAR_48->pcm[VAR_36], VAR_47);
 }

 for (VAR_50 = 0; VAR_50 < 2; VAR_50++)
  VAR_48->midi[VAR_50] = ((void*)0);
 return (FUNC_5(VAR_46));

bad:

 if (VAR_48->cdev)
  FUNC_18(VAR_48);
 if (VAR_48->rm != ((void*)0))
  FUNC_23(VAR_48);
 if (VAR_48->reg)
  FUNC_6(VAR_46, VAR_42, FUNC_0(0), VAR_48->reg);
 if (VAR_48->ih)
  FUNC_8(VAR_46, VAR_48->irq, VAR_48->ih);
 if (VAR_48->irq)
  FUNC_6(VAR_46, VAR_43, 0, VAR_48->irq);
 FUNC_25(&VAR_48->rw);
 FUNC_25(&VAR_48->lock);
 return (VAR_53);
}
