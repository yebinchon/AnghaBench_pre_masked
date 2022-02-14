
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hda_codec {int hash_mutex; } ;
struct TYPE_2__ {int val; } ;
struct hda_amp_info {unsigned int amp_caps; TYPE_1__ head; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_amp_info* FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2, u32 VAR_3, unsigned int VAR_4)
{
 struct hda_amp_info *VAR_5;

 FUNC_1(&VAR_2->hash_mutex);
 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_2(&VAR_2->hash_mutex);
  return -VAR_0;
 }
 VAR_5->amp_caps = VAR_4;
 VAR_5->head.val |= VAR_1;
 FUNC_2(&VAR_2->hash_mutex);
 return 0;
}
