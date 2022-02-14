
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* e_ident; scalar_t__ e_type; int e_machine; } ;
struct TYPE_5__ {TYPE_1__ nlehdr; } ;
typedef TYPE_2__ kvm_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_0(kvm_t *VAR_5, int VAR_6, int VAR_7)
{

 return (VAR_5->nlehdr.e_ident[VAR_0] == VAR_6 &&
     ((VAR_7 == VAR_1 || VAR_7 == VAR_2) ?
      VAR_5->nlehdr.e_type == VAR_3 : VAR_5->nlehdr.e_type == VAR_4) &&
     VAR_5->nlehdr.e_machine == VAR_7);
}
