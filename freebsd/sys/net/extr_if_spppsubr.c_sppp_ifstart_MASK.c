
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sppp {int (* if_start ) (struct ifnet*) ;int ifstart_callout; } ;
struct ifnet {int dummy; } ;


 struct sppp* FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct sppp*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,void*) ;
 int VAR_0 ;
 int FUNC_4 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_1)
{
 struct sppp *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2)) {
  if (FUNC_2(&VAR_2->ifstart_callout))
   return;
  FUNC_3(&VAR_2->ifstart_callout, 1, VAR_0,
      (void *)VAR_2);
 } else {
  VAR_2->if_start(VAR_1);
 }
}
