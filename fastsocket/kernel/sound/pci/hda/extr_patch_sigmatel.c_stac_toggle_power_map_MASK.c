
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {unsigned int num_pwrs; scalar_t__* pwr_nids; unsigned int power_map_bits; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
      bool VAR_3, bool VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_1->spec;
 unsigned int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_pwrs; VAR_6++) {
  if (VAR_5->pwr_nids[VAR_6] == VAR_2)
   break;
 }
 if (VAR_6 >= VAR_5->num_pwrs)
  return;

 VAR_6 = 1 << VAR_6;

 VAR_7 = VAR_5->power_map_bits;
 if (VAR_3)
  VAR_7 &= ~VAR_6;
 else
  VAR_7 |= VAR_6;


 if (VAR_7 != VAR_5->power_map_bits) {
  VAR_5->power_map_bits = VAR_7;
  if (VAR_4)
   FUNC_0(VAR_1, VAR_1->afg, 0,
         VAR_0, VAR_7);
 }
}
