
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bi_envp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;

void
FUNC_4(void)
{

 FUNC_1((char *)VAR_1.bi_envp, 0);
 VAR_3 = (VAR_2 & VAR_0) != 0;
 if (VAR_3)
  FUNC_0("vm.pmap.pae_mode", &VAR_3);
 if (VAR_3) {
  VAR_4 = &VAR_6;
  FUNC_3();
 } else {
  VAR_4 = &VAR_5;
  FUNC_2();
 }
}
