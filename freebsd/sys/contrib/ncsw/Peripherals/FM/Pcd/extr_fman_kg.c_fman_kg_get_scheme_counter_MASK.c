
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_kg_scheme_regs {int kgse_spc; } ;
struct fman_kg_regs {int * fmkg_indirect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct fman_kg_regs*,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct fman_kg_regs *VAR_2,
    uint8_t VAR_3,
    uint8_t VAR_4,
    uint32_t *VAR_5)
{
 struct fman_kg_scheme_regs *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_6 = (struct fman_kg_scheme_regs *)&(VAR_2->fmkg_indirect[0]);

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_1, VAR_0);
     VAR_8 = FUNC_1(VAR_2, VAR_7);

 if (VAR_8 != 0)
  return VAR_8;

 *VAR_5 = FUNC_2(&VAR_6->kgse_spc);

 return 0;
}
