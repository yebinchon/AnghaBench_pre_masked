
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ u_long ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int,scalar_t__*,scalar_t__*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
 phandle_t VAR_2, VAR_3;
 u_long VAR_4, VAR_5;

 if ((VAR_3 = FUNC_0("/")) == -1)
  goto fatal;
 if ((VAR_2 = FUNC_1(VAR_3, "fsl,imx6q-ocotp", 0)) == 0)
  goto fatal;
 if (FUNC_2(VAR_2, &VAR_4, &VAR_5) != 0)
  goto fatal;

 VAR_1 = (vm_size_t)VAR_5;

 if ((VAR_0 = FUNC_4((vm_offset_t)VAR_4, VAR_1)) == ((void*)0))
  goto fatal;

 return;
fatal:
 FUNC_3("cannot find/map the ocotp registers");
}
