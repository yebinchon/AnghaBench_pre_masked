
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cgraph_edge {int callee; TYPE_2__* caller; int loop_nest; scalar_t__ count; } ;
struct TYPE_4__ {scalar_t__ insns; } ;
struct TYPE_5__ {TYPE_1__ global; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4 (struct cgraph_edge *VAR_2)
{
  if (VAR_1)
    {
      int VAR_3 =
 FUNC_2 (1, VAR_2->caller, VAR_2->callee);
      VAR_3 -= VAR_2->caller->global.insns;


      if (VAR_3 <= 0)
 return VAR_0 - VAR_3;
      return ((int)((double)VAR_2->count * VAR_0 / VAR_1)) / VAR_3;
    }
  else
  {
    int VAR_4 = FUNC_0 (VAR_2->loop_nest, 8);
    int VAR_5 = FUNC_1 (VAR_2->callee) * 256;


    if (VAR_5 > 0)
      VAR_5 >>= VAR_4;
    else
      VAR_5 <<= VAR_4;


    if (FUNC_3 (VAR_2->caller, VAR_2->callee, ((void*)0)))
      return VAR_5 + 1;
    else
      return VAR_5;
  }
}
