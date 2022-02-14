
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* hpriv_p ;
struct TYPE_4__ {int hook; int node; int reorderTimer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int,int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(hpriv_p VAR_3)
{
 int VAR_4;


 VAR_4 = (((VAR_2 * VAR_0) + 1000 - 1) / 1000) + 1;
 FUNC_0(&VAR_3->reorderTimer, VAR_3->node, VAR_3->hook,
  VAR_4, VAR_1, VAR_3, 0);
}
