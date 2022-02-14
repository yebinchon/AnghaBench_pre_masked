
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fman_fpm_regs {int fmfp_prc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;

void FUNC_1(struct fman_fpm_regs *VAR_4,
     uint8_t VAR_5,
     bool VAR_6,
     bool VAR_7)
{
 uint32_t VAR_8 = 0;

 VAR_8 = (uint32_t)(VAR_5 << VAR_0);
 if (VAR_6) {
  if (VAR_7)
   VAR_8 |= (VAR_2 <<
    VAR_1) | VAR_2;
  else
   VAR_8 |= (VAR_3 <<
    VAR_1) | VAR_3;
 } else {
  VAR_8 |= (VAR_3|VAR_2);


  if (VAR_5 % 2)
   VAR_8 |= (VAR_2 <<
     VAR_1);
  else
   VAR_8 |= (VAR_3 <<
     VAR_1);
 }
 FUNC_0(VAR_8, &VAR_4->fmfp_prc);
}
