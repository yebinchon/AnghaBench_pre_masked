
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int lower; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,struct mbuf*) ;
 int FUNC_2 (struct mbuf**,int) ;

__attribute__((used)) static void
FUNC_3(node_p VAR_0, struct mbuf **VAR_1, int VAR_2)
{
 const priv_p VAR_3 = FUNC_0(VAR_0);
 int VAR_4;


 if ((VAR_4 = FUNC_2(VAR_1, VAR_2)) != 0)
  return;


 FUNC_1(VAR_4, VAR_3->lower, *VAR_1);
 *VAR_1 = ((void*)0);
}
