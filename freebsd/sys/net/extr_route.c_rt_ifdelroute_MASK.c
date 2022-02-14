
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; struct ifnet* rt_ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct rtentry *VAR_1, void *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2;

 if (VAR_1->rt_ifp != VAR_3)
  return (0);





 if ((VAR_1->rt_flags & VAR_0) == 0)
  return (0);

 return (1);
}
