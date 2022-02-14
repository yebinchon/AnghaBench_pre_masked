
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int * fmkg_indirect; } ;
struct fman_kg_pe_regs {int fmkg_pe_cpp; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct fman_kg_regs *VAR_0, uint32_t VAR_1)
{
 struct fman_kg_pe_regs *VAR_2;

 VAR_2 = (struct fman_kg_pe_regs *)&(VAR_0->fmkg_indirect[0]);

 FUNC_0(VAR_1, &VAR_2->fmkg_pe_cpp);
}
