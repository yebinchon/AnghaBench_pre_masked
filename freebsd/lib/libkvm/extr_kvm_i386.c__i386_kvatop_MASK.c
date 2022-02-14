
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_9__ {TYPE_1__* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int kvaddr_t ;
struct TYPE_8__ {scalar_t__ pae; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(kvm_t *VAR_0, kvaddr_t VAR_1, off_t *VAR_2)
{

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, 0, "vatop called in live kernel!");
  return (0);
 }
 if (VAR_0->vmst->pae)
  return (FUNC_2(VAR_0, VAR_1, VAR_2));
 else
  return (FUNC_1(VAR_0, VAR_1, VAR_2));
}
