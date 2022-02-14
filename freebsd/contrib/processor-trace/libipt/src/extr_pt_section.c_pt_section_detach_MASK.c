
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {scalar_t__ acount; scalar_t__ ucount; struct pt_image_section_cache* iscache; } ;
struct pt_image_section_cache {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_2(struct pt_section *VAR_1,
        struct pt_image_section_cache *VAR_2)
{
 uint16_t VAR_3, VAR_4;
 int VAR_5;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_1->iscache != VAR_2)
  goto out_unlock;

 VAR_3 = VAR_1->acount;
 if (!VAR_3)
  goto out_unlock;

 VAR_3 -= 1;
 VAR_4 = VAR_1->ucount;
 if (VAR_4 < VAR_3)
  goto out_unlock;

 VAR_1->acount = VAR_3;
 if (!VAR_3)
  VAR_1->iscache = ((void*)0);

 return FUNC_1(VAR_1);

 out_unlock:
 (void) FUNC_1(VAR_1);
 return -VAR_0;
}
