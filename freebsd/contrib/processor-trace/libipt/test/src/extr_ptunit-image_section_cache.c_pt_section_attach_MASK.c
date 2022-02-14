
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int ucount; int acount; struct pt_image_section_cache* iscache; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct pt_section *VAR_2,
        struct pt_image_section_cache *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_5 = VAR_2->ucount;
 VAR_6 = VAR_2->acount;
 if (!VAR_6) {
  if (VAR_2->iscache || !VAR_5)
   goto out_unlock;

  VAR_2->iscache = VAR_3;
  VAR_2->acount = 1;

  return FUNC_1(VAR_2);
 }

 VAR_6 += 1;
 if (!VAR_6) {
  (void) FUNC_1(VAR_2);
  return -VAR_1;
 }

 if (VAR_5 < VAR_6)
  goto out_unlock;

 if (VAR_2->iscache != VAR_3)
  goto out_unlock;

 VAR_2->acount = VAR_6;

 return FUNC_1(VAR_2);

 out_unlock:
 (void) FUNC_1(VAR_2);
 return -VAR_0;
}
