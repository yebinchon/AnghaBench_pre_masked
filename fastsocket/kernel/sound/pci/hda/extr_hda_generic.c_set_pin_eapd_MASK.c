
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__ keep_eapd_on; scalar_t__ own_eapd_ctl; } ;
struct hda_codec {scalar_t__ inv_eapd; struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2, hda_nid_t VAR_3, bool VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_2->spec;
 if (VAR_5->own_eapd_ctl ||
     !(FUNC_1(VAR_2, VAR_3) & VAR_0))
  return;
 if (VAR_2->inv_eapd)
  VAR_4 = !VAR_4;
 if (VAR_5->keep_eapd_on && !VAR_4)
  return;
 FUNC_0(VAR_2, VAR_3, 0,
       VAR_1,
       VAR_4 ? 0x02 : 0x00);
}
