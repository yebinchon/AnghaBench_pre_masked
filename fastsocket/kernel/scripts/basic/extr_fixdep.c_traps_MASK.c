
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 static char VAR_2[] __attribute__((aligned(sizeof(int)))) = "CONF";
 int *VAR_3 = (int *)VAR_2;

 if (*VAR_3 != VAR_0) {
  FUNC_1(VAR_1, "fixdep: sizeof(int) != 4 or wrong endianess? %#x\n",
   *VAR_3);
  FUNC_0(2);
 }
}
