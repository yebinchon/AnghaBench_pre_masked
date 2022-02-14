
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hookinfo {size_t q_first; size_t q_last; int * hook; int * q; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_6__ {int * dest; int * hook; } ;
struct TYPE_5__ {int * dest; } ;
struct TYPE_7__ {TYPE_2__ upper; TYPE_1__ lower; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct hookinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_1)
{
 struct hookinfo *const VAR_2 = FUNC_2(VAR_1);
 const node_p VAR_3 = FUNC_1(VAR_1);
 const priv_p VAR_4 = FUNC_5(VAR_3);

 if (VAR_2) {

  while (VAR_2->q_first != VAR_2->q_last) {
   FUNC_0(VAR_2->q[VAR_2->q_first]);
   VAR_2->q_first++;
   if (VAR_2->q_first >= VAR_0)
        VAR_2->q_first = 0;
  }

  if (VAR_2->hook == VAR_4->upper.hook)
   VAR_4->lower.dest = ((void*)0);
  else
   VAR_4->upper.dest = ((void*)0);
  VAR_2->hook = ((void*)0);
 }

 if ((FUNC_4(FUNC_1(VAR_1)) == 0)
     && (FUNC_3(FUNC_1(VAR_1))))
  FUNC_6(FUNC_1(VAR_1));
 return (0);
}
