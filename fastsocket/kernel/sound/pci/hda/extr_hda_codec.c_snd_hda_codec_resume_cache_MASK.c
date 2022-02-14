
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int used; } ;
struct TYPE_3__ {TYPE_2__ buf; } ;
struct hda_codec {int hash_mutex; TYPE_1__ cmd_cache; scalar_t__ cached_write; } ;
struct hda_cache_head {int val; scalar_t__ dirty; int key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct hda_cache_head* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,int ) ;

void FUNC_6(struct hda_codec *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->hash_mutex);
 VAR_0->cached_write = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->cmd_cache.buf.used; VAR_1++) {
  struct hda_cache_head *VAR_2;
  u32 VAR_3;

  VAR_2 = FUNC_4(&VAR_0->cmd_cache.buf, VAR_1);
  VAR_3 = VAR_2->key;
  if (!VAR_3)
   continue;
  if (!VAR_2->dirty)
   continue;
  VAR_2->dirty = 0;
  FUNC_3(&VAR_0->hash_mutex);
  FUNC_5(VAR_0, FUNC_1(VAR_3), 0,
        FUNC_0(VAR_3), VAR_2->val);
  FUNC_2(&VAR_0->hash_mutex);
 }
 FUNC_3(&VAR_0->hash_mutex);
}
