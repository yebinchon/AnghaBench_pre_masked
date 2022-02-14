
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_state {scalar_t__ driver_abi; int kernel_abi; int kcmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pps_state*) ;

void
FUNC_1(struct pps_state *VAR_2)
{

 FUNC_0(VAR_2);
 if (VAR_2->driver_abi > 0) {
  VAR_2->kcmode |= VAR_0;
  VAR_2->kernel_abi = VAR_1;
 }
}
