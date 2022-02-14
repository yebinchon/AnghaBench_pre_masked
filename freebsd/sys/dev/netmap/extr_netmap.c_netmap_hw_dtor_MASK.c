
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {int * ifp; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct netmap_adapter *VAR_0)
{
 if (VAR_0->ifp == ((void*)0))
  return;

 FUNC_0(VAR_0->ifp);
}
