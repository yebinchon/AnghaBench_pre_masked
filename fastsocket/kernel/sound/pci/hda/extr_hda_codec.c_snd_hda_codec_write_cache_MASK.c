
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hda_codec {unsigned int cached_write; TYPE_1__* bus; int cmd_cache; } ;
struct hda_cache_head {unsigned int val; unsigned int dirty; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int cmd_mutex; } ;


 int FUNC_0 (int ,unsigned int) ;
 struct hda_cache_head* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,int ,int,unsigned int,unsigned int) ;

int FUNC_5(struct hda_codec *VAR_0, hda_nid_t VAR_1,
         int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct hda_cache_head *VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_0->cached_write;
 if (!VAR_8) {
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }


 VAR_3 = VAR_3 | (VAR_4 >> 8);
 VAR_4 &= 0xff;
 VAR_7 = FUNC_0(VAR_1, VAR_3);
 FUNC_2(&VAR_0->bus->cmd_mutex);
 VAR_6 = FUNC_1(&VAR_0->cmd_cache, VAR_7);
 if (VAR_6) {
  VAR_6->val = VAR_4;
  VAR_6->dirty = VAR_8;
 }
 FUNC_3(&VAR_0->bus->cmd_mutex);
 return 0;
}
