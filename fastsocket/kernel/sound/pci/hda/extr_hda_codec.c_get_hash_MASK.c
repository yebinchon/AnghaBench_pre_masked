
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct hda_cache_rec {size_t* hash; int buf; } ;
struct hda_cache_head {size_t key; size_t next; } ;


 scalar_t__ FUNC_0 (size_t*) ;
 struct hda_cache_head* FUNC_1 (int *,size_t) ;

__attribute__((used)) static struct hda_cache_head *FUNC_2(struct hda_cache_rec *VAR_0, u32 VAR_1)
{
 u16 VAR_2 = VAR_1 % (u16)FUNC_0(VAR_0->hash);
 u16 VAR_3 = VAR_0->hash[VAR_2];
 struct hda_cache_head *VAR_4;

 while (VAR_3 != 0xffff) {
  VAR_4 = FUNC_1(&VAR_0->buf, VAR_3);
  if (VAR_4->key == VAR_1)
   return VAR_4;
  VAR_3 = VAR_4->next;
 }
 return ((void*)0);
}
