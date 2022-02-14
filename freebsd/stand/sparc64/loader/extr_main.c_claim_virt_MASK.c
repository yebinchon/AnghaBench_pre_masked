
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int FUNC_0 (char*,int ,int,int,int ,size_t,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static vm_offset_t
FUNC_1(vm_offset_t VAR_1, size_t VAR_2, int VAR_3)
{
 vm_offset_t VAR_4;

 if (FUNC_0("claim", VAR_0, 3, 1, VAR_1, VAR_2, VAR_3, &VAR_4) == -1)
  return ((vm_offset_t)-1);
 return (VAR_4);
}
