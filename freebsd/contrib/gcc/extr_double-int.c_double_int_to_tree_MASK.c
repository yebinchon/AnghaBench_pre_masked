
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
struct TYPE_5__ {int high; int low; } ;
typedef TYPE_1__ double_int ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int ,int ) ;

tree
FUNC_4 (tree VAR_0, double_int VAR_1)
{
  VAR_1 = FUNC_3 (VAR_1, FUNC_0 (VAR_0), FUNC_1 (VAR_0));

  return FUNC_2 (VAR_0, VAR_1.low, VAR_1.high);
}
