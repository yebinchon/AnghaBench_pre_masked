
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_mapped_section {int dummy; } ;
struct pt_block_decoder {int ip; int image; int scache; } ;


 int FUNC_0 (struct pt_block_decoder*,struct pt_mapped_section const**) ;
 int FUNC_1 (int *,struct pt_mapped_section const**,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(struct pt_block_decoder *VAR_2,
         const struct pt_mapped_section **VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_1(&VAR_2->scache, VAR_3, VAR_2->image,
      VAR_2->ip);
 if (VAR_4 < 0) {
  if (VAR_4 != -VAR_1)
   return VAR_4;

  return FUNC_0(VAR_2, VAR_3);
 }

 return VAR_4;
}
