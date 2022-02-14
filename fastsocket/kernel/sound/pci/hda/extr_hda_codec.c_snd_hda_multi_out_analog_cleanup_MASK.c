
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_multi_out {int num_dacs; scalar_t__ dig_out_used; scalar_t__ dig_out_nid; scalar_t__ const* extra_out_nid; scalar_t__ const* hp_out_nid; scalar_t__ const hp_nid; scalar_t__* dac_nids; } ;
struct hda_codec {int spdif_mutex; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,scalar_t__ const) ;

int FUNC_5(struct hda_codec *VAR_1,
         struct hda_multi_out *VAR_2)
{
 const hda_nid_t *VAR_3 = VAR_2->dac_nids;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_dacs; VAR_4++)
  FUNC_4(VAR_1, VAR_3[VAR_4]);
 if (VAR_2->hp_nid)
  FUNC_4(VAR_1, VAR_2->hp_nid);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->hp_out_nid); VAR_4++)
  if (VAR_2->hp_out_nid[VAR_4])
   FUNC_4(VAR_1,
           VAR_2->hp_out_nid[VAR_4]);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->extra_out_nid); VAR_4++)
  if (VAR_2->extra_out_nid[VAR_4])
   FUNC_4(VAR_1,
           VAR_2->extra_out_nid[VAR_4]);
 FUNC_2(&VAR_1->spdif_mutex);
 if (VAR_2->dig_out_nid && VAR_2->dig_out_used == VAR_0) {
  FUNC_1(VAR_1, VAR_2->dig_out_nid);
  VAR_2->dig_out_used = 0;
 }
 FUNC_3(&VAR_1->spdif_mutex);
 return 0;
}
