
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int acount; int ucount; struct pt_image_section_cache* iscache; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_2(struct pt_section *VAR_1,
        struct pt_image_section_cache *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_1->iscache != VAR_2)
  goto out_unlock;

 VAR_5 = VAR_1->acount;
 if (!VAR_5)
  goto out_unlock;

 VAR_5 -= 1;
 VAR_4 = VAR_1->ucount;
 if (VAR_4 < VAR_5)
  goto out_unlock;

 VAR_1->acount = VAR_5;
 if (!VAR_5)
  VAR_1->iscache = ((void*)0);

 return FUNC_1(VAR_1);

 out_unlock:
 (void) FUNC_1(VAR_1);
 return -VAR_0;
}
