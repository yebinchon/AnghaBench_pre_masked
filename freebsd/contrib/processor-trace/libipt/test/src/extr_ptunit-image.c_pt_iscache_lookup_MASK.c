
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_image_section_cache {int nsecs; int * laddr; struct pt_section** section; } ;


 int FUNC_0 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct pt_image_section_cache *VAR_2,
        struct pt_section **VAR_3, uint64_t *VAR_4, int VAR_5)
{
 if (!VAR_2 || !VAR_3 || !VAR_4)
  return -VAR_1;

 if (!VAR_5 || VAR_2->nsecs < VAR_5)
  return -VAR_0;

 VAR_5 -= 1;

 *VAR_3 = VAR_2->section[VAR_5];
 *VAR_4 = VAR_2->laddr[VAR_5];

 return FUNC_0(*VAR_3);
}
