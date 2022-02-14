
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_mapped_section {int dummy; } ;
struct pt_msec_cache {int isid; struct pt_mapped_section msec; } ;
struct pt_image {int dummy; } ;


 int FUNC_0 (struct pt_image*,struct pt_mapped_section*,int ,int) ;
 int VAR_0 ;

int FUNC_1(struct pt_msec_cache *VAR_1,
         const struct pt_mapped_section **VAR_2,
         struct pt_image *VAR_3, uint64_t VAR_4)
{
 struct pt_mapped_section *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = &VAR_1->msec;
 VAR_6 = VAR_1->isid;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_4, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_2 = VAR_5;

 return VAR_6;

}
