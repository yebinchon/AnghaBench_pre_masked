
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int kvm_t ;
struct TYPE_2__ {scalar_t__ n_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,void*,size_t) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_3, int VAR_4, void *VAR_5, size_t VAR_6,
    size_t VAR_7)
{
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_2[VAR_4].n_value + VAR_7, VAR_5, VAR_6);
 if (VAR_8 < 0)
  return (VAR_0);
 if ((size_t)VAR_8 != VAR_6)
  return (VAR_1);
 return (0);
}
