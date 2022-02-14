
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nid_path {int active; } ;
struct TYPE_4__ {int dig_outs; void* dig_in_pin; int * dig_out_type; void** dig_out_pins; } ;
struct TYPE_3__ {void** slave_dig_outs; void* dig_out_nid; } ;
struct hda_gen_spec {void* digin_path; void* dig_in_nid; TYPE_2__ autocfg; void** slave_dig_outs; TYPE_1__ multiout; int dig_out_type; void** digout_paths; } ;
struct hda_codec {int num_nodes; void* start_nid; struct hda_gen_spec* spec; } ;
typedef void* hda_nid_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void**) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct hda_codec*,void*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 void* FUNC_3 (struct hda_codec*,void*,int) ;
 int FUNC_4 (char*,struct nid_path*) ;
 int FUNC_5 (struct hda_codec*,void*,int ,int) ;
 struct nid_path* FUNC_6 (struct hda_codec*,void*,void*,int ) ;
 void* FUNC_7 (struct hda_codec*,struct nid_path*) ;

__attribute__((used)) static void FUNC_8(struct hda_codec *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 struct nid_path *VAR_6;
 int VAR_7, VAR_8;
 hda_nid_t VAR_9, VAR_10;


 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->autocfg.dig_outs; VAR_7++) {
  VAR_10 = VAR_5->autocfg.dig_out_pins[VAR_7];
  VAR_9 = FUNC_3(VAR_4, VAR_10, 1);
  if (!VAR_9)
   continue;
  VAR_6 = FUNC_6(VAR_4, VAR_9, VAR_10, 0);
  if (!VAR_6)
   continue;
  FUNC_4("digout", VAR_6);
  VAR_6->active = 1;
  VAR_5->digout_paths[VAR_7] = FUNC_7(VAR_4, VAR_6);
  FUNC_5(VAR_4, VAR_10, VAR_3, 0);
  if (!VAR_8) {
   VAR_5->multiout.dig_out_nid = VAR_9;
   VAR_5->dig_out_type = VAR_5->autocfg.dig_out_type[0];
  } else {
   VAR_5->multiout.slave_dig_outs = VAR_5->slave_dig_outs;
   if (VAR_8 >= FUNC_0(VAR_5->slave_dig_outs) - 1)
   break;
   VAR_5->slave_dig_outs[VAR_8 - 1] = VAR_9;
  }
  VAR_8++;
 }

 if (VAR_5->autocfg.dig_in_pin) {
  VAR_10 = VAR_5->autocfg.dig_in_pin;
  VAR_9 = VAR_4->start_nid;
  for (VAR_7 = 0; VAR_7 < VAR_4->num_nodes; VAR_7++, VAR_9++) {
   unsigned int VAR_11 = FUNC_1(VAR_4, VAR_9);
   if (FUNC_2(VAR_11) != VAR_1)
    continue;
   if (!(VAR_11 & VAR_0))
    continue;
   VAR_6 = FUNC_6(VAR_4, VAR_10, VAR_9, 0);
   if (VAR_6) {
    FUNC_4("digin", VAR_6);
    VAR_6->active = 1;
    VAR_5->dig_in_nid = VAR_9;
    VAR_5->digin_path = FUNC_7(VAR_4, VAR_6);
    FUNC_5(VAR_4, VAR_10, VAR_2, 0);
    break;
   }
  }
 }
}
