
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__* e_ident; } ;
struct TYPE_5__ {TYPE_1__ nlehdr; } ;
typedef TYPE_2__ kvm_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline uint64_t
FUNC_2(kvm_t *VAR_2, uint64_t VAR_3)
{

 if (VAR_2->nlehdr.e_ident[VAR_0] == VAR_1)
  return (FUNC_1(VAR_3));
 else
  return (FUNC_0(VAR_3));
}
