
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_t ;
typedef int vmem_size_t ;
typedef int vmem_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int * FUNC_1 (int *,char const*,int ,int ,int ,int ,int) ;
 int VAR_2 ;

vmem_t *
FUNC_2(const char *VAR_3, vmem_addr_t VAR_4, vmem_size_t VAR_5,
    vmem_size_t VAR_6, vmem_size_t VAR_7, int VAR_8)
{

 vmem_t *VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_8 & (VAR_1|VAR_0));
 if (VAR_9 == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8) == ((void*)0))
  return (((void*)0));
 return (VAR_9);
}
