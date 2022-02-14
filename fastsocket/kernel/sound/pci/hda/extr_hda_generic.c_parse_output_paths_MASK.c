
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct auto_pin_cfg {scalar_t__ line_out_type; scalar_t__ speaker_outs; scalar_t__ hp_outs; scalar_t__ line_outs; scalar_t__* speaker_pins; scalar_t__* hp_pins; scalar_t__* line_out_pins; } ;
struct hda_gen_spec {scalar_t__ indep_hp; scalar_t__ prefer_hp_amp; int vmaster_tlv; int vmaster_nid; int * out_paths; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct auto_pin_cfg*) ;
 struct auto_pin_cfg* FUNC_5 (int,int ) ;
 int FUNC_6 (struct hda_codec*,struct nid_path*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_8 (scalar_t__*,int ,int) ;
 int FUNC_9 (struct hda_codec*,scalar_t__,scalar_t__*,unsigned int) ;
 struct nid_path* FUNC_10 (struct hda_codec*,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct hda_codec *VAR_8)
{
 struct hda_gen_spec *VAR_9 = VAR_8->spec;
 struct auto_pin_cfg *VAR_10 = &VAR_9->autocfg;
 struct auto_pin_cfg *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = VAR_5;
 int VAR_14;
 bool VAR_15 = 1, VAR_16 = 1;
 bool VAR_17 = 1, VAR_18 = 1;
 bool VAR_19 = 0;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 *VAR_11 = *VAR_10;

 for (;;) {
  VAR_14 = FUNC_2(VAR_8, VAR_15,
          VAR_16);
  if (VAR_14 < 0) {
   FUNC_4(VAR_11);
   return VAR_14;
  }
  FUNC_0("==> lo_type=%d, wired=%d, mio=%d, badness=0x%x\n",
         VAR_10->line_out_type, VAR_15, VAR_16,
         VAR_14);
  FUNC_1(VAR_8, VAR_10);
  if (VAR_14 < VAR_13) {
   VAR_13 = VAR_14;
   *VAR_11 = *VAR_10;
   VAR_17 = VAR_15;
   VAR_18 = VAR_16;
  }
  if (!VAR_14)
   break;
  VAR_16 = !VAR_16;
  if (!VAR_16)
   continue;
  VAR_15 = !VAR_15;
  if (!VAR_15)
   continue;
  if (VAR_19)
   break;
  VAR_19 = 1;
  if (VAR_10->speaker_outs > 0 &&
      VAR_10->line_out_type == VAR_0) {
   VAR_10->hp_outs = VAR_10->line_outs;
   FUNC_7(VAR_10->hp_pins, VAR_10->line_out_pins,
          sizeof(VAR_10->hp_pins));
   VAR_10->line_outs = VAR_10->speaker_outs;
   FUNC_7(VAR_10->line_out_pins, VAR_10->speaker_pins,
          sizeof(VAR_10->speaker_pins));
   VAR_10->speaker_outs = 0;
   FUNC_8(VAR_10->speaker_pins, 0, sizeof(VAR_10->speaker_pins));
   VAR_10->line_out_type = VAR_1;
   VAR_15 = 1;
   continue;
  }
  if (VAR_10->hp_outs > 0 &&
      VAR_10->line_out_type == VAR_1) {
   VAR_10->speaker_outs = VAR_10->line_outs;
   FUNC_7(VAR_10->speaker_pins, VAR_10->line_out_pins,
          sizeof(VAR_10->speaker_pins));
   VAR_10->line_outs = VAR_10->hp_outs;
   FUNC_7(VAR_10->line_out_pins, VAR_10->hp_pins,
          sizeof(VAR_10->hp_pins));
   VAR_10->hp_outs = 0;
   FUNC_8(VAR_10->hp_pins, 0, sizeof(VAR_10->hp_pins));
   VAR_10->line_out_type = VAR_0;
   VAR_15 = 1;
   continue;
  }
  break;
 }

 if (VAR_14) {
  FUNC_0("==> restoring best_cfg\n");
  *VAR_10 = *VAR_11;
  FUNC_2(VAR_8, VAR_17, VAR_18);
 }
 FUNC_0("==> Best config: lo_type=%d, wired=%d, mio=%d\n",
        VAR_10->line_out_type, VAR_17, VAR_18);
 FUNC_1(VAR_8, VAR_10);

 if (VAR_10->line_out_pins[0]) {
  struct nid_path *VAR_20;
  VAR_20 = FUNC_10(VAR_8, VAR_9->out_paths[0]);
  if (VAR_20)
   VAR_9->vmaster_nid = FUNC_6(VAR_8, VAR_20);
  if (VAR_9->vmaster_nid)
   FUNC_11(VAR_8, VAR_9->vmaster_nid,
      VAR_4, VAR_9->vmaster_tlv);
 }


 if (VAR_9->prefer_hp_amp || VAR_10->line_out_type == VAR_0)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_7;
 FUNC_9(VAR_8, VAR_10->line_outs, VAR_10->line_out_pins, VAR_12);
 if (VAR_10->line_out_type != VAR_0)
  FUNC_9(VAR_8, VAR_10->hp_outs, VAR_10->hp_pins, VAR_6);
 if (VAR_10->line_out_type != VAR_1) {
  VAR_12 = VAR_9->prefer_hp_amp ? VAR_6 : VAR_7;
  FUNC_9(VAR_8, VAR_10->speaker_outs,
    VAR_10->speaker_pins, VAR_12);
 }


 if (VAR_9->indep_hp && !FUNC_3(VAR_8))
  VAR_9->indep_hp = 0;

 FUNC_4(VAR_11);
 return 0;
}
