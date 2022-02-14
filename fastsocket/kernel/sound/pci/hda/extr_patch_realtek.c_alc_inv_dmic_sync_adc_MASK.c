
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {unsigned int* ctls; } ;
struct hda_input_mux {int num_items; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_2__ {scalar_t__* imux_pins; struct hda_input_mux input_mux; } ;
struct alc_spec {scalar_t__ inv_dmic_pin; TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ,int,int,int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int) ;
 struct nid_path* FUNC_6 (struct hda_codec*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct hda_codec *VAR_6, int VAR_7)
{
 struct alc_spec *VAR_8 = VAR_6->spec;
 struct hda_input_mux *VAR_9 = &VAR_8->gen.input_mux;
 struct nid_path *VAR_10;
 hda_nid_t VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;

 for (VAR_12 = 0; VAR_12 < VAR_9->num_items; VAR_12++) {
  if (VAR_8->gen.imux_pins[VAR_12] == VAR_8->inv_dmic_pin)
   break;
 }
 if (VAR_12 >= VAR_9->num_items)
  return;

 VAR_10 = FUNC_6(VAR_6, VAR_8->inv_dmic_pin,
        FUNC_0(VAR_6, VAR_7, VAR_12));
 VAR_15 = VAR_10->ctls[VAR_5];
 if (!VAR_15)
  return;
 VAR_11 = FUNC_2(VAR_15);
 VAR_13 = FUNC_1(VAR_15);
 VAR_14 = VAR_2 |
  (VAR_13 == VAR_4 ? VAR_1 : VAR_0);


 FUNC_4(VAR_6);


 VAR_15 = FUNC_3(VAR_6, VAR_11, 1, VAR_13, 0);
 if (VAR_15 & 0x80)
  return;
 VAR_15 |= 0x80;
 FUNC_5(VAR_6, VAR_11, 0, VAR_3,
       VAR_14 | VAR_15);
}
