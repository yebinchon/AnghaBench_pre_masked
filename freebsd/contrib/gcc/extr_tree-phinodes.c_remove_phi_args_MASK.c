
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* edge ;
struct TYPE_3__ {int dest_idx; int dest; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

void
FUNC_3 (edge VAR_0)
{
  tree VAR_1;

  for (VAR_1 = FUNC_1 (VAR_0->dest); VAR_1; VAR_1 = FUNC_0 (VAR_1))
    FUNC_2 (VAR_1, VAR_0->dest_idx);
}
