
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int * hook_p ;
struct TYPE_3__ {int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(node_p VAR_2, hook_p VAR_3, const char *VAR_4)
{
 priv_p VAR_5 = FUNC_0(VAR_2);

 VAR_0;


 if (VAR_5->hook != ((void*)0))
  return (VAR_1);

 VAR_5->hook = VAR_3;

 return(0);
}
