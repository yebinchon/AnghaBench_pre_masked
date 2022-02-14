
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fman_kg_regs {int fmkg_gdv1r; int fmkg_gdv0r; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct fman_kg_regs *VAR_0,
    uint8_t VAR_1,
    uint32_t VAR_2)
{
 if(VAR_1 == 0)
  FUNC_0(VAR_2, &VAR_0->fmkg_gdv0r);
 else
  FUNC_0(VAR_2, &VAR_0->fmkg_gdv1r);
}
