
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int fmkg_eeer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct fman_kg_regs *VAR_0,
    uint32_t VAR_1,
    bool VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(&VAR_0->fmkg_eeer);

 if (VAR_2) {
  VAR_3 |= VAR_1;
 } else {
  VAR_3 &= ~VAR_1;
 }

 FUNC_1(VAR_3, &VAR_0->fmkg_eeer);
}
