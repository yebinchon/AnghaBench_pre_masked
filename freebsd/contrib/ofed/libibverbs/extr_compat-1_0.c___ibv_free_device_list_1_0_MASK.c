
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** ibv_device_1_0 ;


 int FUNC_0 (int ******) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct ibv_device_1_0 **VAR_0)
{
 struct ibv_device_1_0 **VAR_1 = VAR_0;

 while (*VAR_1) {
  FUNC_0(*VAR_1);
  ++VAR_1;
 }

 FUNC_1((void *) VAR_0[-1]);
 FUNC_0(VAR_0 - 1);
}
