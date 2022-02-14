
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int used; } ;
struct TYPE_4__ {TYPE_3__ buf; } ;
struct hda_codec {int hash_mutex; TYPE_1__ amp_cache; scalar_t__ cached_write; } ;
struct TYPE_5__ {int key; int val; scalar_t__ dirty; } ;
struct hda_amp_info {int * vol; int amp_caps; TYPE_2__ head; } ;
typedef int hda_nid_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,int ,int,unsigned int,unsigned int,unsigned int,int ) ;
 struct hda_amp_info* FUNC_4 (TYPE_3__*,int) ;

void FUNC_5(struct hda_codec *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->hash_mutex);
 VAR_0->cached_write = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->amp_cache.buf.used; VAR_1++) {
  struct hda_amp_info *VAR_2;
  u32 VAR_3;
  hda_nid_t VAR_4;
  unsigned int VAR_5, VAR_6, VAR_7;
  struct hda_amp_info VAR_8;

  VAR_2 = FUNC_4(&VAR_0->amp_cache.buf, VAR_1);
  if (!VAR_2->head.dirty)
   continue;
  VAR_2->head.dirty = 0;
  VAR_8 = *VAR_2;
  VAR_3 = VAR_8.head.key;
  if (!VAR_3)
   continue;
  VAR_4 = VAR_3 & 0xff;
  VAR_5 = (VAR_3 >> 16) & 0xff;
  VAR_6 = (VAR_3 >> 24) & 0xff;
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   if (!(VAR_8.head.val & FUNC_0(VAR_7)))
    continue;
   FUNC_2(&VAR_0->hash_mutex);
   FUNC_3(VAR_0, VAR_8.amp_caps, VAR_4, VAR_7, VAR_6, VAR_5,
         VAR_8.vol[VAR_7]);
   FUNC_1(&VAR_0->hash_mutex);
  }
 }
 FUNC_2(&VAR_0->hash_mutex);
}
