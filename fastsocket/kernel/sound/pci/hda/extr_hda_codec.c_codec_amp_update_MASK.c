
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {unsigned int cached_write; int hash_mutex; } ;
struct TYPE_2__ {unsigned int dirty; } ;
struct hda_amp_info {int* vol; unsigned int amp_caps; TYPE_1__ head; } ;
typedef int hda_nid_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,unsigned int,int ,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 struct hda_amp_info* FUNC_4 (struct hda_codec*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_0, hda_nid_t VAR_1, int VAR_2,
       int VAR_3, int VAR_4, int VAR_5, int VAR_6,
       bool VAR_7)
{
 struct hda_amp_info *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 if (FUNC_3(VAR_5 & ~0xff))
  VAR_5 &= 0xff;
 VAR_6 &= VAR_5;

 FUNC_0(&VAR_0->hash_mutex);
 VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
 if (!VAR_8) {
  FUNC_1(&VAR_0->hash_mutex);
  return 0;
 }
 VAR_6 |= VAR_8->vol[VAR_2] & ~VAR_5;
 if (VAR_8->vol[VAR_2] == VAR_6) {
  FUNC_1(&VAR_0->hash_mutex);
  return 0;
 }
 VAR_8->vol[VAR_2] = VAR_6;
 VAR_10 = VAR_8->head.dirty = VAR_0->cached_write;
 VAR_9 = VAR_8->amp_caps;
 FUNC_1(&VAR_0->hash_mutex);
 if (!VAR_10)
  FUNC_2(VAR_0, VAR_9, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 return 1;
}
