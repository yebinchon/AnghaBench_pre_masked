
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int dummy; } ;
struct pt_mapped_section {int dummy; } ;
struct pt_block_decoder {int ip; int asid; int image; int scache; } ;


 int FUNC_0 (int *,struct pt_mapped_section const**,int ,int *,int ) ;
 struct pt_section* FUNC_1 (struct pt_mapped_section const*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct pt_block_decoder *VAR_1,
       const struct pt_mapped_section **VAR_2)
{
 const struct pt_mapped_section *VAR_3;
 struct pt_section *VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_0(&VAR_1->scache, &VAR_3, VAR_1->image,
      &VAR_1->asid, VAR_1->ip);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 *VAR_2 = VAR_3;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_5;
}
