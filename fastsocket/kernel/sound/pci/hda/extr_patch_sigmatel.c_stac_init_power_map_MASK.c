
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmatel_spec {int num_pwrs; scalar_t__* pwr_nids; scalar_t__ vref_mute_led_nid; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct hda_codec*,scalar_t__) ;
 int VAR_3 ;
 unsigned int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (struct hda_codec*,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_4)
{
 struct sigmatel_spec *VAR_5 = VAR_4->spec;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_pwrs; VAR_6++) {
  hda_nid_t VAR_7 = VAR_5->pwr_nids[VAR_6];
  unsigned int VAR_8 = FUNC_2(VAR_4, VAR_7);
  VAR_8 = FUNC_0(VAR_8);
  if (FUNC_4(VAR_4, VAR_7))
   continue;
  if (VAR_8 == VAR_0 &&
      !(VAR_5->vref_mute_led_nid == VAR_7 ||
        FUNC_1(VAR_4, VAR_7))) {
   FUNC_3(VAR_4, VAR_7,
           VAR_2,
           VAR_3);
  } else {
   if (VAR_8 == VAR_1)
    FUNC_5(VAR_4, VAR_7, 0, 0);
   else
    FUNC_5(VAR_4, VAR_7, 1, 0);
  }
 }
}
