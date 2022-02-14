
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int * priv_root; int * xattr_root; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_0)->xattr_root) {
   FUNC_1(FUNC_0(VAR_0)->xattr_root);
   FUNC_2(FUNC_0(VAR_0)->xattr_root);
   FUNC_0(VAR_0)->xattr_root = ((void*)0);
  }
  if (FUNC_0(VAR_0)->priv_root) {
   FUNC_1(FUNC_0(VAR_0)->priv_root);
   FUNC_2(FUNC_0(VAR_0)->priv_root);
   FUNC_0(VAR_0)->priv_root = ((void*)0);
  }
 }

 FUNC_3(VAR_0);
}
