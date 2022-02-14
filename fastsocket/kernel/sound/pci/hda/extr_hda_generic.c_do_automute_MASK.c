
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {unsigned long long mute_bits; scalar_t__ keep_vref_in_automute; scalar_t__ auto_mute_via_amp; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef unsigned long long hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hda_codec*,unsigned long long,int) ;
 unsigned int FUNC_1 (struct hda_codec*,unsigned long long) ;
 int FUNC_2 (struct hda_codec*,unsigned long long,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2, int VAR_3, hda_nid_t *VAR_4,
   bool VAR_5)
{
 struct hda_gen_spec *VAR_6 = VAR_2->spec;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  hda_nid_t VAR_8 = VAR_4[VAR_7];
  unsigned int VAR_9, VAR_10;
  if (!VAR_8)
   break;

  if (VAR_6->auto_mute_via_amp) {
   if (VAR_5)
    VAR_6->mute_bits |= (1ULL << VAR_8);
   else
    VAR_6->mute_bits &= ~(1ULL << VAR_8);
   FUNC_0(VAR_2, VAR_8, !VAR_5);
   continue;
  }

  VAR_10 = FUNC_1(VAR_2, VAR_8);
  if (VAR_10 & VAR_1)
   continue;



  if (VAR_6->keep_vref_in_automute)
   VAR_9 = VAR_10 & ~VAR_0;
  else
   VAR_9 = 0;
  if (!VAR_5)
   VAR_9 |= VAR_10;





  FUNC_2(VAR_2, VAR_8, VAR_9);
  FUNC_0(VAR_2, VAR_8, !VAR_5);
 }
}
