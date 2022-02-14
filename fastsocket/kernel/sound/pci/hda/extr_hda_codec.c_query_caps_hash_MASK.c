
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hda_codec {int hash_mutex; } ;
struct TYPE_2__ {int val; } ;
struct hda_amp_info {int amp_caps; TYPE_1__ head; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 struct hda_amp_info* FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct hda_codec *VAR_1, hda_nid_t VAR_2, int VAR_3, u32 VAR_4,
  unsigned int (*VAR_5)(struct hda_codec *, hda_nid_t, int))
{
 struct hda_amp_info *VAR_6;
 unsigned int VAR_7;

 FUNC_1(&VAR_1->hash_mutex);
 VAR_6 = FUNC_0(VAR_1, VAR_4);
 if (!VAR_6) {
  FUNC_2(&VAR_1->hash_mutex);
  return 0;
 }
 if (!(VAR_6->head.val & VAR_0)) {
  FUNC_2(&VAR_1->hash_mutex);
  VAR_7 = VAR_5(VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_1, VAR_4, VAR_7);
 } else {
  VAR_7 = VAR_6->amp_caps;
  FUNC_2(&VAR_1->hash_mutex);
 }
 return VAR_7;
}
