
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mfsplay_tree_key ;
typedef int mfsplay_tree ;
struct TYPE_3__ {scalar_t__ low; int type; } ;
typedef TYPE_1__ __mf_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (__mf_object_t *VAR_0)
{
  mfsplay_tree VAR_1 = FUNC_0 (VAR_0->type);
  FUNC_1 (VAR_1, (mfsplay_tree_key) VAR_0->low);
}
