
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_fpm_regs {int fm_rcr; int fm_rie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

uint32_t FUNC_2(struct fman_fpm_regs *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 VAR_3 = FUNC_0(&VAR_2->fm_rcr) ;
 VAR_4 = FUNC_0(&VAR_2->fm_rie);

 FUNC_1(VAR_3 & ~VAR_1,
   &VAR_2->fm_rcr);

 if ((VAR_4 & VAR_0))
  return VAR_3;
 else
  return 0;
}
