
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int num_adc_nids; int num_all_adcs; scalar_t__* adc_nids; int all_adcs; } ;
struct hda_codec {int num_nodes; scalar_t__ start_nid; struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 unsigned int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_2->spec;
 hda_nid_t VAR_4;
 hda_nid_t *VAR_5 = VAR_3->adc_nids;
 int VAR_6 = FUNC_0(VAR_3->adc_nids);
 int VAR_7, VAR_8 = 0;

 VAR_4 = VAR_2->start_nid;
 for (VAR_7 = 0; VAR_7 < VAR_2->num_nodes; VAR_7++, VAR_4++) {
  unsigned int VAR_9 = FUNC_1(VAR_2, VAR_4);
  int VAR_10 = FUNC_2(VAR_9);

  if (VAR_10 != VAR_1 || (VAR_9 & VAR_0))
   continue;
  VAR_5[VAR_8] = VAR_4;
  if (++VAR_8 >= VAR_6)
   break;
 }
 VAR_3->num_adc_nids = VAR_8;


 VAR_3->num_all_adcs = VAR_8;
 FUNC_3(VAR_3->all_adcs, VAR_3->adc_nids, VAR_8 * sizeof(hda_nid_t));

 return VAR_8;
}
