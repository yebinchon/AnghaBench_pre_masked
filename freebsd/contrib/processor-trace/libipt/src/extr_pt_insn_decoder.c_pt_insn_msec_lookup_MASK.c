
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_msec_cache {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_insn_decoder {int asid; int ip; struct pt_image* image; struct pt_msec_cache scache; } ;
struct pt_image {int dummy; } ;


 int FUNC_0 (struct pt_msec_cache*,struct pt_mapped_section const**,struct pt_image*,int *,int ) ;
 int FUNC_1 (struct pt_msec_cache*,struct pt_mapped_section const**,struct pt_image*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pt_insn_decoder *VAR_2,
          const struct pt_mapped_section **VAR_3)
{
 struct pt_msec_cache *VAR_4;
 struct pt_image *VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4 = &VAR_2->scache;
 VAR_5 = VAR_2->image;
 VAR_6 = VAR_2->ip;

 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_5, VAR_6);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_1)
   return VAR_7;

  return FUNC_0(VAR_4, VAR_3, VAR_5,
       &VAR_2->asid, VAR_6);
 }

 return VAR_7;
}
