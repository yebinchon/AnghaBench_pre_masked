
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int u_long ;
struct mips_iter {int dummy; } ;
typedef int kvm_walk_pages_cb_t ;
struct TYPE_6__ {scalar_t__* e_ident; } ;
struct TYPE_7__ {TYPE_1__ nlehdr; } ;
typedef TYPE_2__ kvm_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,void*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct mips_iter*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct mips_iter*,int *,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_3, kvm_walk_pages_cb_t *VAR_4, void *VAR_5)
{
 struct mips_iter VAR_6;
 u_long VAR_7, VAR_8, VAR_9;
 vm_prot_t VAR_10;


 if (VAR_3->nlehdr.e_ident[VAR_0] == VAR_1) {



 } else {


 }

 FUNC_1(&VAR_6, VAR_3);
 while (FUNC_2(&VAR_6, &VAR_8, &VAR_9, &VAR_7, &VAR_10)) {
  if (!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, VAR_7,
      VAR_10, VAR_2, 0)) {
   return (0);
  }
 }
 return (1);
}
