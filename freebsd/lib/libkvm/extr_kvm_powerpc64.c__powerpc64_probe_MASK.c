
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* e_ident; } ;
struct TYPE_6__ {TYPE_1__ nlehdr; } ;
typedef TYPE_2__ kvm_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(kvm_t *VAR_4)
{

 return (FUNC_0(VAR_4, VAR_1, VAR_3) &&
     VAR_4->nlehdr.e_ident[VAR_0] == VAR_2);
}
