
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct pcpu {int dummy; } ;
typedef int ssize_t ;
typedef int kvm_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,uintptr_t,void*,size_t) ;

ssize_t
FUNC_2(kvm_t *VAR_0, u_long VAR_1, void *VAR_2, size_t VAR_3, int VAR_4)
{

 if (!FUNC_0(VAR_0))
  return (-1);
 return (FUNC_1(VAR_0, (uintptr_t)(VAR_1 + sizeof(struct pcpu) * VAR_4),
     VAR_2, VAR_3));
}
