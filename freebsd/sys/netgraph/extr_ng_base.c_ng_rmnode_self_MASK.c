
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* node_p ;
struct TYPE_5__ {int nd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int ) ;

int
FUNC_1(node_p VAR_4)
{
 int VAR_5;

 if (VAR_4 == &VAR_2)
  return (0);
 VAR_4->nd_flags |= VAR_1;
 if (VAR_4->nd_flags & VAR_0)
  return (0);

 VAR_5 = FUNC_0(VAR_4, ((void*)0), &VAR_3, ((void*)0), 0);
 return (VAR_5);
}
