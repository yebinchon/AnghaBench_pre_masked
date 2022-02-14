
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_adapter {int * nm_mem_prev; int * nm_mem; } ;


 int FUNC_0 (int *,struct netmap_adapter*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct netmap_adapter *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->nm_mem, VAR_0);



 if (VAR_1 && VAR_0->nm_mem_prev) {
  FUNC_1(VAR_0->nm_mem);
  VAR_0->nm_mem = VAR_0->nm_mem_prev;
  VAR_0->nm_mem_prev = ((void*)0);
 }
}
