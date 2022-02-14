
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 char VAR_3[8];

 if ((FUNC_1(FUNC_0(),
     "class/misc/rdma_cm/abi_version",
     VAR_3, sizeof VAR_3) < 0) &&
     (FUNC_1(FUNC_0(),
     "class/infiniband_ucma/abi_version",
     VAR_3, sizeof VAR_3) < 0)) {





  return 0;
 }

 VAR_2 = FUNC_2(VAR_3, ((void*)0), 10);
 if (VAR_2 < VAR_1 ||
     VAR_2 > VAR_0) {
  return -1;
 }
 return 0;
}
