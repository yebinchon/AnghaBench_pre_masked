
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int * fmkg_indirect; } ;
struct fman_kg_pe_regs {int fmkg_pe_sp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fman_kg_regs *VAR_0, uint32_t VAR_1, bool VAR_2)
{

 struct fman_kg_pe_regs *VAR_3;
 uint32_t VAR_4;

 VAR_3 = (struct fman_kg_pe_regs *)&(VAR_0->fmkg_indirect[0]);
 VAR_4 = FUNC_0(&VAR_3->fmkg_pe_sp);

 if (VAR_2)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_1(VAR_4, &VAR_3->fmkg_pe_sp);

}
