
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* priv_p ;
typedef int node_p ;
struct TYPE_7__ {int * hook; } ;
struct TYPE_6__ {int * hook; } ;
struct TYPE_8__ {TYPE_2__ lower; TYPE_1__ upper; int timer; scalar_t__ timer_scheduled; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__* const,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->timer_scheduled)
  FUNC_5(&VAR_2->timer, VAR_1);
 if (VAR_2->lower.hook && VAR_2->upper.hook)
  FUNC_3(VAR_2->lower.hook, VAR_2->upper.hook);
 else {
  if (VAR_2->upper.hook != ((void*)0))
   FUNC_4(VAR_2->upper.hook);
  if (VAR_2->lower.hook != ((void*)0))
   FUNC_4(VAR_2->lower.hook);
 }
 FUNC_1(VAR_1);
 FUNC_2(VAR_2, VAR_0);
 return (0);
}
