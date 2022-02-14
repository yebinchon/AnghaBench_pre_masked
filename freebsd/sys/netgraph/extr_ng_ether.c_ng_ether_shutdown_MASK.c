
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef TYPE_2__* node_p ;
struct TYPE_11__ {int nd_flags; } ;
struct TYPE_10__ {scalar_t__ promisc; int ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__* const,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_2)
{
 const priv_p VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->nd_flags & VAR_1) {






  FUNC_2(VAR_2, ((void*)0));
  FUNC_4(VAR_3, VAR_0);
  FUNC_3(VAR_2);
  return (0);
 }
 if (VAR_3->promisc) {
  (void)FUNC_5(VAR_3->ifp, 0);
  VAR_3->promisc = 0;
 }
 FUNC_1(VAR_2);

 return (0);
}
