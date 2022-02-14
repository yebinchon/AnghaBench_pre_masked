
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int kvm_t ;
struct TYPE_2__ {scalar_t__ n_value; } ;


 scalar_t__ FUNC_0 (int *,scalar_t__,void*,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_1, int VAR_2, void *VAR_3, size_t VAR_4,
    size_t VAR_5)
{
 ssize_t VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_0[VAR_2].n_value + VAR_5, VAR_3, VAR_4);
 if (VAR_6 < 0 || (size_t)VAR_6 != VAR_4)
  return (-1);
 return (0);
}
