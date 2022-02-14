
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fman_kg_cp_regs {int * kgcpe; } ;
struct fman_kg_cls_plan_params {int entries_mask; int * mask_vector; } ;


 int FUNC_0 (struct fman_kg_cp_regs*,int ,int) ;

int FUNC_1(struct fman_kg_cls_plan_params *VAR_0,
    struct fman_kg_cp_regs *VAR_1)
{
 uint8_t VAR_2, VAR_3;
 int VAR_4;


 FUNC_0(VAR_1, 0, sizeof(struct fman_kg_cp_regs));



 VAR_2 = VAR_0->entries_mask;
 for (VAR_4 = 0; VAR_2; VAR_4++) {
  VAR_3 = (uint8_t)(0x80 >> VAR_4);
  if ((VAR_3 & VAR_2) == 0)
   continue;
  VAR_2 ^= VAR_3;
  VAR_1->kgcpe[VAR_4] = VAR_0->mask_vector[VAR_4];
 }

 return 0;
}
