
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fman_fpm_regs {int fm_ip_rev_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct fman_fpm_regs *VAR_4,
   uint8_t *VAR_5,
   uint8_t *VAR_6)
{
 uint32_t VAR_7;

 VAR_7 = FUNC_0(&VAR_4->fm_ip_rev_1);
 *VAR_5 = (uint8_t)((VAR_7 & VAR_0) >> VAR_1);
 *VAR_6 = (uint8_t)((VAR_7 & VAR_2) >> VAR_3);

}
