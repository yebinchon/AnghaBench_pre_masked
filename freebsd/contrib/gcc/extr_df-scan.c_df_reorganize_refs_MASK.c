
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df_reg_info {unsigned int begin; int n_refs; struct df_ref* reg_chain; } ;
struct df_ref_info {unsigned int regs_inited; int refs_organized; int refs_size; int bitmap_size; int add_refs_inline; struct df_ref** refs; struct df_reg_info** regs; } ;
struct df_ref {int dummy; } ;
typedef int DF_REF_ID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct df_ref_info*,int) ;

void
FUNC_2 (struct df_ref_info *VAR_0)
{
  unsigned int VAR_1 = VAR_0->regs_inited;
  unsigned int VAR_2;
  unsigned int VAR_3 = 0;
  unsigned int VAR_4 = 0;

  if (VAR_0->refs_organized)
    return;

  if (VAR_0->refs_size < VAR_0->bitmap_size)
    {
      int VAR_5 = VAR_0->bitmap_size + VAR_0->bitmap_size / 4;
      FUNC_1 (VAR_0, VAR_5);
    }

  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    {
      struct df_reg_info *VAR_6 = VAR_0->regs[VAR_2];
      int VAR_7 = 0;
      if (VAR_6)
 {
   struct df_ref *VAR_8 = VAR_6->reg_chain;
   VAR_6->begin = VAR_3;
   while (VAR_8)
     {
       VAR_0->refs[VAR_3] = VAR_8;
       DF_REF_ID (VAR_9) = VAR_3++;
       VAR_9 = FUNC_0 (VAR_9);
       VAR_7++;
       VAR_4++;
     }
   VAR_6->n_refs = VAR_7;
 }
    }




  VAR_0->bitmap_size = VAR_4;
  VAR_0->refs_organized = 1;
  VAR_0->add_refs_inline = 1;
}
