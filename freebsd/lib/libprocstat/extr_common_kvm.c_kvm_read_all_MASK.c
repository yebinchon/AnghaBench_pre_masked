
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int kvm_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned long,void*,size_t) ;

int
FUNC_1(kvm_t *VAR_1, unsigned long VAR_2, void *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;

 if (VAR_4 >= VAR_0)
  return (0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 return (VAR_5 == (ssize_t)(VAR_4));
}
