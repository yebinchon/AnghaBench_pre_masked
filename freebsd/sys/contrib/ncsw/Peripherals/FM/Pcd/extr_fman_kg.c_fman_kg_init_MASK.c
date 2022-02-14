
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_kg_regs {int fmkg_gcr; int fmkg_gdv1r; int fmkg_gdv0r; int fmkg_fdor; int fmkg_eeer; int fmkg_eer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fman_kg_regs*,int ) ;
 int FUNC_1 (struct fman_kg_regs*,int ) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(struct fman_kg_regs *VAR_3,
   uint32_t VAR_4,
   uint32_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 FUNC_2(VAR_1 | VAR_2,
   &VAR_3->fmkg_eer);

 VAR_6 = 0;
 if (VAR_4 & VAR_1)
         VAR_6 |= VAR_1;

 if (VAR_4 & VAR_2)
  VAR_6 |= VAR_2;

 FUNC_2(VAR_6, &VAR_3->fmkg_eeer);
 FUNC_2(0, &VAR_3->fmkg_fdor);
 FUNC_2(0, &VAR_3->fmkg_gdv0r);
 FUNC_2(0, &VAR_3->fmkg_gdv1r);
 FUNC_2(VAR_5, &VAR_3->fmkg_gcr);



 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_1(VAR_3, (uint8_t)VAR_7);
  FUNC_0(VAR_3, (uint8_t)VAR_7);
 }
}
