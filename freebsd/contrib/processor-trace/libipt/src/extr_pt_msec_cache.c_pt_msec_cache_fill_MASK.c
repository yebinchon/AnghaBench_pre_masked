
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct pt_mapped_section {int * section; } ;
struct pt_msec_cache {int isid; struct pt_mapped_section msec; } ;
struct pt_image {int dummy; } ;
struct pt_asid {int dummy; } ;


 int FUNC_0 (struct pt_image*,struct pt_mapped_section*,struct pt_asid const*,int ) ;
 int FUNC_1 (struct pt_msec_cache*) ;
 struct pt_section* FUNC_2 (struct pt_mapped_section*) ;
 int FUNC_3 (struct pt_section*) ;
 int FUNC_4 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_5(struct pt_msec_cache *VAR_1,
         const struct pt_mapped_section **VAR_2,
         struct pt_image *VAR_3, const struct pt_asid *VAR_4,
         uint64_t VAR_5)
{
 struct pt_mapped_section *VAR_6;
 struct pt_section *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = &VAR_1->msec;

 VAR_9 = FUNC_0(VAR_3, VAR_6, VAR_4, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_2(VAR_6);

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0) {
  (void) FUNC_4(VAR_7);
  VAR_6->section = ((void*)0);

  return VAR_8;
 }

 *VAR_2 = VAR_6;

 VAR_1->isid = VAR_9;

 return VAR_9;
}
