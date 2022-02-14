
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (VAR_1)
  return;
 VAR_1 = FUNC_1(VAR_0, ((void*)0), "kmemleak");
 if (FUNC_0(VAR_1)) {
  FUNC_2("Failed to create the scan thread\n");
  VAR_1 = ((void*)0);
 }
}
