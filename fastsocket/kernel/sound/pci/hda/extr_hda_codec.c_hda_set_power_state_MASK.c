
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_power_state ) (struct hda_codec*,scalar_t__,unsigned int) ;} ;
struct hda_codec {TYPE_1__ patch_ops; scalar_t__ epss; scalar_t__ mfg; scalar_t__ afg; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int,int ,unsigned int) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,unsigned int) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(struct hda_codec *VAR_4,
     unsigned int VAR_5)
{
 hda_nid_t VAR_6 = VAR_4->afg ? VAR_4->afg : VAR_4->mfg;
 int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;


 if (VAR_5 == VAR_0) {

  FUNC_1(VAR_4->epss ? 10 : 100);
  VAR_9 = VAR_3;
 }


 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  if (VAR_4->patch_ops.set_power_state)
   VAR_4->patch_ops.set_power_state(VAR_4, VAR_6,
        VAR_5);
  else {
   FUNC_2(VAR_4, VAR_6, VAR_9,
        VAR_2,
        VAR_5);
   FUNC_3(VAR_4, VAR_6, VAR_5);
  }
  VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_5);
  if (!(VAR_8 & VAR_1))
   break;
 }

 return VAR_8;
}
