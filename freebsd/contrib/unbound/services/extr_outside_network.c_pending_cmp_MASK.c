
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {scalar_t__ id; int addrlen; int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *,int ) ;

int
FUNC_2(const void* VAR_0, const void* VAR_1)
{
 struct pending *VAR_2 = (struct pending*)VAR_0;
 struct pending *VAR_3 = (struct pending*)VAR_1;
 if(VAR_2->id < VAR_3->id)
  return -1;
 if(VAR_2->id > VAR_3->id)
  return 1;
 FUNC_0(VAR_2->id == VAR_3->id);
 return FUNC_1(&VAR_2->addr, VAR_2->addrlen, &VAR_3->addr, VAR_3->addrlen);
}
