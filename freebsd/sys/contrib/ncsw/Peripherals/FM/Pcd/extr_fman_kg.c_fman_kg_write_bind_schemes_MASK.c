
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_kg_regs {int * fmkg_indirect; } ;
struct fman_kg_pe_regs {int fmkg_pe_sp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fman_kg_regs*,int ) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct fman_kg_regs *VAR_1,
    uint8_t VAR_2,
    uint32_t VAR_3)
{
 struct fman_kg_pe_regs *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_4 = (struct fman_kg_pe_regs *)&(VAR_1->fmkg_indirect[0]);

 FUNC_2(VAR_3, &VAR_4->fmkg_pe_sp);

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_6 = FUNC_1(VAR_1, VAR_5);
 return VAR_6;
}
