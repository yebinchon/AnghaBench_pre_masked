
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_osfp_ioctl {int fp_getnum; } ;
typedef int io ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pf_osfp_ioctl*) ;
 scalar_t__ FUNC_1 (int,int ,struct pf_osfp_ioctl*) ;
 int FUNC_2 (struct pf_osfp_ioctl*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

int
FUNC_5(int VAR_4, int VAR_5)
{
 struct pf_osfp_ioctl VAR_6;
 int VAR_7;

 FUNC_3(&VAR_2);

 for (VAR_7 = 0; VAR_7 >= 0; VAR_7++) {
  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.fp_getnum = VAR_7;
  if (FUNC_1(VAR_4, VAR_0, &VAR_6)) {
   if (VAR_3 == VAR_1)
    break;
   FUNC_4("DIOCOSFPGET");
   return (1);
  }
  FUNC_0(&VAR_6);
 }
 return (0);
}
