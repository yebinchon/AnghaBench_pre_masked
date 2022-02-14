
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct pt_section {struct pt_image_section_cache* iscache; struct pt_block_cache* bcache; int mcount; } ;
struct pt_image_section_cache {int dummy; } ;
struct pt_block_cache {int dummy; } ;


 struct pt_block_cache* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pt_image_section_cache*,struct pt_section*,scalar_t__) ;
 struct pt_block_cache* FUNC_2 (struct pt_section*) ;
 int FUNC_3 (struct pt_section*) ;
 int FUNC_4 (struct pt_section*) ;
 int FUNC_5 (struct pt_section*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct pt_section*) ;
 int FUNC_7 (struct pt_section*) ;
 int FUNC_8 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_9(struct pt_section *VAR_3)
{
 struct pt_image_section_cache *VAR_4;
 struct pt_block_cache *VAR_5;
 uint64_t VAR_6, VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_3->mcount)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_3);
 VAR_8 = (uint32_t) VAR_6;

 if (VAR_8 != VAR_6)
  return -VAR_2;

 VAR_7 = 0ull;
 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_3);
 if (VAR_9 < 0)
  goto out_alock;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5) {
  VAR_9 = 0;
  goto out_lock;
 }

 VAR_5 = FUNC_0(VAR_8);
 if (!VAR_5) {
  VAR_9 = -VAR_1;
  goto out_lock;
 }







 VAR_3->bcache = VAR_5;

 VAR_9 = FUNC_5(VAR_3, &VAR_7);
 if (VAR_9 < 0)
  goto out_lock;

 VAR_9 = FUNC_7(VAR_3);
 if (VAR_9 < 0)
  goto out_alock;

 if (VAR_7) {
  VAR_4 = VAR_3->iscache;
  if (VAR_4) {
   VAR_9 = FUNC_1(VAR_4, VAR_3,
         VAR_7);
   if (VAR_9 < 0)
    goto out_alock;
  }
 }

 return FUNC_8(VAR_3);


out_lock:
 (void) FUNC_7(VAR_3);

out_alock:
 (void) FUNC_8(VAR_3);
 return VAR_9;
}
