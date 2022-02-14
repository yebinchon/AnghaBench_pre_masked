
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct TYPE_6__ {int used; } ;
struct auto_pin_cfg {int num_inputs; size_t line_outs; TYPE_1__* inputs; } ;
struct hda_gen_spec {int multi_ios; int * out_paths; TYPE_3__ paths; TYPE_2__* multi_io; int mixer_nid; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_5__ {scalar_t__ pin; scalar_t__ dac; } ;
struct TYPE_4__ {scalar_t__ pin; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hda_codec*,struct nid_path*) ;
 int FUNC_1 (struct hda_codec*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hda_codec*,scalar_t__) ;
 unsigned int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct hda_codec*,scalar_t__,int) ;
 struct nid_path* FUNC_6 (struct hda_codec*,scalar_t__,scalar_t__,int ) ;
 unsigned int FUNC_7 (struct hda_codec*,scalar_t__) ;
 struct nid_path* FUNC_8 (struct hda_codec*,int ) ;
 int FUNC_9 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static int FUNC_10(struct hda_codec *VAR_3,
     hda_nid_t VAR_4,
     bool VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_3->spec;
 struct auto_pin_cfg *VAR_7 = &VAR_6->autocfg;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13 = FUNC_7(VAR_3, VAR_4);
 unsigned int VAR_14 = FUNC_4(VAR_13);
 int VAR_15 = 0;
 struct nid_path *VAR_16;

 VAR_12 = VAR_6->multi_ios;
 if (VAR_12 >= 2)
  goto end_fill;

 VAR_11 = FUNC_2(VAR_3, VAR_4);
 if (VAR_11 < 2)
  goto end_fill;

 for (VAR_8 = VAR_0; VAR_8 >= VAR_1; VAR_8--) {
  for (VAR_9 = 0; VAR_9 < VAR_7->num_inputs; VAR_9++) {
   hda_nid_t VAR_17 = VAR_7->inputs[VAR_9].pin;
   hda_nid_t VAR_18 = 0;

   if (VAR_7->inputs[VAR_9].type != VAR_8)
    continue;
   if (!FUNC_1(VAR_3, VAR_14, VAR_17))
    continue;
   for (VAR_10 = 0; VAR_10 < VAR_6->multi_ios; VAR_10++) {
    if (VAR_17 == VAR_6->multi_io[VAR_10].pin)
     break;
   }
   if (VAR_10 < VAR_6->multi_ios)
    continue;

   if (VAR_5)
    VAR_18 = FUNC_3(VAR_3, VAR_17);
   else if (!VAR_18)
    VAR_18 = FUNC_5(VAR_3, VAR_17, 0);
   if (!VAR_18) {
    VAR_15++;
    continue;
   }
   VAR_16 = FUNC_6(VAR_3, VAR_18, VAR_17,
          -VAR_6->mixer_nid);
   if (!VAR_16) {
    VAR_15++;
    continue;
   }

   VAR_6->multi_io[VAR_6->multi_ios].pin = VAR_17;
   VAR_6->multi_io[VAR_6->multi_ios].dac = VAR_18;
   VAR_6->out_paths[VAR_7->line_outs + VAR_6->multi_ios] =
    FUNC_9(VAR_3, VAR_16);
   VAR_6->multi_ios++;
   if (VAR_6->multi_ios >= 2)
    break;
  }
 }
 end_fill:
 if (VAR_15)
  VAR_15 = VAR_2;
 if (VAR_12 == VAR_6->multi_ios) {
  if (VAR_5)
   return 1;
  else
   return VAR_15;
 }
 if (!VAR_5 && VAR_6->multi_ios < 2) {

  VAR_6->paths.used -= VAR_6->multi_ios - VAR_12;
  VAR_6->multi_ios = VAR_12;
  return VAR_15;
 }


 for (VAR_9 = VAR_12; VAR_9 < VAR_6->multi_ios; VAR_9++) {
  VAR_16 = FUNC_8(VAR_3, VAR_6->out_paths[VAR_7->line_outs + VAR_9]);
  VAR_15 += FUNC_0(VAR_3, VAR_16);
 }

 return VAR_15;
}
