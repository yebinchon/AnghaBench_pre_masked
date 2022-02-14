
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int num_pwrs; int power_map_bits; scalar_t__* pwr_nids; } ;
struct hda_jack_tbl {scalar_t__ action; scalar_t__ nid; } ;
struct hda_codec {int afg; struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_3,
         struct hda_jack_tbl *VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_3->spec;
 int VAR_6;

 if (!VAR_5->num_pwrs)
  return;

 if (VAR_4 && VAR_4->nid) {
  FUNC_3(VAR_3, VAR_4->nid,
          FUNC_1(VAR_3, VAR_4->nid),
          1);
  return;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->num_pwrs; VAR_6++) {
  hda_nid_t VAR_7 = VAR_5->pwr_nids[VAR_6];
  VAR_4 = FUNC_2(VAR_3, VAR_7);
  if (!VAR_4 || !VAR_4->action)
   continue;
  if (VAR_4->action == VAR_2 ||
      VAR_4->action <= VAR_1)
   FUNC_3(VAR_3, VAR_7,
           FUNC_1(VAR_3, VAR_7),
           0);
 }

 FUNC_0(VAR_3, VAR_3->afg, 0, VAR_0,
       VAR_5->power_map_bits);
}
