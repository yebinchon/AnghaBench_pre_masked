
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int kvm_t ;


 scalar_t__ FUNC_0 (int *,unsigned long,void*,size_t) ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_0, void *VAR_1, void *VAR_2, size_t VAR_3,
    size_t VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_0(VAR_0, (unsigned long)VAR_1 + VAR_4, VAR_2,
     VAR_3);
 if (VAR_5 < 0 || (size_t)VAR_5 != VAR_3)
  return (-1);
 return (0);
}
