
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_block_decoder {int dummy; } ;
struct pt_block_cache {int dummy; } ;
struct pt_block {int isid; } ;


 int FUNC_0 (struct pt_block*) ;
 int FUNC_1 (struct pt_block_decoder*,struct pt_mapped_section const**) ;
 int FUNC_2 (struct pt_block_decoder*,struct pt_block*,struct pt_block_cache*,struct pt_mapped_section const*) ;
 int FUNC_3 (struct pt_block_decoder*,struct pt_block*) ;
 struct pt_section* FUNC_4 (struct pt_mapped_section const*) ;
 struct pt_block_cache* FUNC_5 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct pt_block_decoder *VAR_2,
       struct pt_block *VAR_3)
{
 const struct pt_mapped_section *VAR_4;
 struct pt_block_cache *VAR_5;
 struct pt_section *VAR_6;
 int VAR_7;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_7 < 0) {
  if (VAR_7 != -VAR_1)
   return VAR_7;




  return FUNC_3(VAR_2, VAR_3);
 }


 if (VAR_7 != VAR_3->isid) {
  if (!FUNC_0(VAR_3))
   return 0;

  VAR_3->isid = VAR_7;
 }

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_6);
 if (!VAR_5)
  return FUNC_3(VAR_2, VAR_3);

 return FUNC_2(VAR_2, VAR_3, VAR_5, VAR_4);
}
