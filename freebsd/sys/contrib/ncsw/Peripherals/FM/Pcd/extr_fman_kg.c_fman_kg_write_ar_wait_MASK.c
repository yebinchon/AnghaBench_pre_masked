
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fman_kg_regs {int fmkg_ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

int FUNC_2(struct fman_kg_regs *VAR_3, uint32_t VAR_4)
{
 FUNC_1(VAR_4, &VAR_3->fmkg_ar);

 while ((VAR_4 = FUNC_0(&VAR_3->fmkg_ar)) & VAR_1) ;
 if (VAR_4 & VAR_2)
  return -VAR_0;
 return 0;
}
