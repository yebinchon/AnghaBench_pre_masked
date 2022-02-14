
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct hda_cache_rec {size_t* hash; int buf; } ;
struct hda_cache_head {size_t key; size_t next; scalar_t__ dirty; scalar_t__ val; } ;


 scalar_t__ FUNC_0 (size_t*) ;
 struct hda_cache_head* FUNC_1 (struct hda_cache_rec*,size_t) ;
 size_t FUNC_2 (int *,struct hda_cache_head*) ;
 struct hda_cache_head* FUNC_3 (int *) ;

__attribute__((used)) static struct hda_cache_head *FUNC_4(struct hda_cache_rec *VAR_0,
           u32 VAR_1)
{
 struct hda_cache_head *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  u16 VAR_3, VAR_4;

  VAR_2 = FUNC_3(&VAR_0->buf);
  if (!VAR_2)
   return ((void*)0);
  VAR_4 = FUNC_2(&VAR_0->buf, VAR_2);
  VAR_2->key = VAR_1;
  VAR_2->val = 0;
  VAR_2->dirty = 0;
  VAR_3 = VAR_1 % (u16)FUNC_0(VAR_0->hash);
  VAR_2->next = VAR_0->hash[VAR_3];
  VAR_0->hash[VAR_3] = VAR_4;
 }
 return VAR_2;
}
