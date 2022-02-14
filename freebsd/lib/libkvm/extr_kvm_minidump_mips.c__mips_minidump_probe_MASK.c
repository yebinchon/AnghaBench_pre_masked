
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* e_ident; scalar_t__ e_machine; } ;
struct TYPE_6__ {TYPE_1__ nlehdr; } ;
typedef TYPE_2__ kvm_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_4)
{

 if (VAR_4->nlehdr.e_ident[VAR_0] != VAR_1 &&
     VAR_4->nlehdr.e_ident[VAR_0] != VAR_2)
  return (0);
 if (VAR_4->nlehdr.e_machine != VAR_3)
  return (0);
 return (FUNC_0(VAR_4));
}
