
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct netmap_adapter {int na_flags; } ;
struct ifnet {int dummy; } ;


 struct netmap_adapter* FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct netmap_adapter*,int ,int *) ;
 int FUNC_2 (struct netmap_adapter*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct ifnet *VAR_2, u_int VAR_3, u_int *VAR_4)
{
 struct netmap_adapter *VAR_5 = FUNC_0(VAR_2);







 if (!FUNC_2(VAR_5))
  return VAR_1;

 if (VAR_5->na_flags & VAR_0) {
  FUNC_3("use regular interrupt");
  return VAR_1;
 }

 return FUNC_1(VAR_5, VAR_3, VAR_4);
}
