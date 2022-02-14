
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*) ;
 int VAR_2 ;

int
FUNC_1(int VAR_3)
{
 int VAR_4 = 1;

 VAR_2 = VAR_3 & VAR_0;
 FUNC_0("hw.vmm.npt.enable_superpage", &VAR_4);
 if (VAR_4)
  VAR_2 |= VAR_1;

 return (0);
}
