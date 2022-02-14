
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_11__ {TYPE_2__* vmst; } ;
typedef TYPE_3__ kvm_t ;
typedef int kvaddr_t ;
struct TYPE_9__ {scalar_t__ paemode; } ;
struct TYPE_10__ {TYPE_1__ hdr; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(kvm_t *VAR_0, kvaddr_t VAR_1, off_t *VAR_2)
{

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, 0, "_i386_minidump_kvatop called in live kernel!");
  return (0);
 }
 if (VAR_0->vmst->hdr.paemode)
  return (FUNC_2(VAR_0, VAR_1, VAR_2));
 else
  return (FUNC_1(VAR_0, VAR_1, VAR_2));
}
