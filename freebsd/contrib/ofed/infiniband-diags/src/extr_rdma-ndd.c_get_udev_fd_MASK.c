
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(void)
{
 VAR_1 = FUNC_4(VAR_2, "udev");
 if (!VAR_1) {
  FUNC_0(VAR_0, "udev monitoring failed\n");
  return -1;
 }

 FUNC_2(VAR_1, "infiniband", ((void*)0));
 FUNC_1(VAR_1);
 return FUNC_3(VAR_1);
}
