
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {size_t Hash; int * GuessTable; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(node_p VAR_0, u_char *VAR_1, int VAR_2)
{
 const priv_p VAR_3 = FUNC_1(VAR_0);

 while (VAR_2--) {
  VAR_3->GuessTable[VAR_3->Hash] = *VAR_1;
  FUNC_0(*VAR_1++);
 }
}
