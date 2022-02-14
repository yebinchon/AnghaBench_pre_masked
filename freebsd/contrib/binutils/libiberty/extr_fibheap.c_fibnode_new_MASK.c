
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* fibnode_t ;
struct TYPE_3__ {struct TYPE_3__* right; struct TYPE_3__* left; } ;


 scalar_t__ FUNC_0 (int,int) ;

__attribute__((used)) static fibnode_t
FUNC_1 (void)
{
  fibnode_t VAR_0;

  VAR_0 = (fibnode_t) FUNC_0 (1, sizeof *VAR_0);
  VAR_0->left = VAR_0;
  VAR_0->right = VAR_0;

  return VAR_0;
}
