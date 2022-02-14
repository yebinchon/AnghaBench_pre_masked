
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {scalar_t__ ucount; scalar_t__ acount; struct pt_image_section_cache* iscache; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct pt_section *VAR_2,
        struct pt_image_section_cache *VAR_3)
{
 uint16_t VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_2->ucount;
 VAR_4 = VAR_2->acount;
 if (!VAR_4) {
  if (VAR_2->iscache || !VAR_5)
   goto out_unlock;

  VAR_2->iscache = VAR_3;
  VAR_2->acount = 1;

  return FUNC_1(VAR_2);
 }

 VAR_4 += 1;
 if (!VAR_4) {
  (void) FUNC_1(VAR_2);
  return -VAR_1;
 }

 if (VAR_5 < VAR_4)
  goto out_unlock;

 if (VAR_2->iscache != VAR_3)
  goto out_unlock;

 VAR_2->acount = VAR_4;

 return FUNC_1(VAR_2);

 out_unlock:
 (void) FUNC_1(VAR_2);
 return -VAR_0;
}
