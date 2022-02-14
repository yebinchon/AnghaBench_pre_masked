
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int* vnode_lvol; int* vnode_rvol; int* effects_switch; scalar_t__ voicefx_val; scalar_t__* vnode_rswitch; scalar_t__* vnode_lswitch; scalar_t__ cur_mic_boost; int cur_mic_type; int cur_out_type; int chipio_mutex; } ;
struct TYPE_2__ {scalar_t__* reqs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_9)
{
 struct ca0132_spec *VAR_10 = VAR_9->spec;
 int VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 FUNC_1(&VAR_10->chipio_mutex);

 VAR_10->cur_out_type = VAR_6;
 VAR_10->cur_mic_type = VAR_1;
 VAR_10->cur_mic_boost = 0;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_10->vnode_lvol[VAR_12] = 0x5a;
  VAR_10->vnode_rvol[VAR_12] = 0x5a;
  VAR_10->vnode_lswitch[VAR_12] = 0;
  VAR_10->vnode_rswitch[VAR_12] = 0;
 }




 VAR_11 = VAR_4 + VAR_3;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = (unsigned int)VAR_8[VAR_12].reqs[0];
  VAR_10->effects_switch[VAR_12] = VAR_13 ? 1 : 0;
 }

 VAR_10->voicefx_val = 0;
 VAR_10->effects_switch[VAR_5 - VAR_2] = 1;
 VAR_10->effects_switch[VAR_0 - VAR_2] = 0;




}
