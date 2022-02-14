
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int u_long ;
struct i386_iter {int dummy; } ;
typedef int kvm_walk_pages_cb_t ;
typedef int kvm_t ;


 int VAR_0 ;
 int FUNC_0 (struct i386_iter*,int *) ;
 scalar_t__ FUNC_1 (struct i386_iter*,int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *,void*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_1, kvm_walk_pages_cb_t *VAR_2, void *VAR_3)
{
 struct i386_iter VAR_4;
 u_long VAR_5, VAR_6, VAR_7;
 vm_prot_t VAR_8;

 FUNC_0(&VAR_4, VAR_1);
 while (FUNC_1(&VAR_4, &VAR_6, &VAR_7, &VAR_5, &VAR_8)) {
  if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7, VAR_5,
      VAR_8, VAR_0, 0)) {
   return (0);
  }
 }
 return (1);
}
