
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct infra_key {scalar_t__ namelen; int zonename; int addrlen; int addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;

int
FUNC_2(void* VAR_0, void* VAR_1)
{
 struct infra_key* VAR_2 = (struct infra_key*)VAR_0;
 struct infra_key* VAR_3 = (struct infra_key*)VAR_1;
 int VAR_4 = FUNC_1(&VAR_2->addr, VAR_2->addrlen, &VAR_3->addr, VAR_3->addrlen);
 if(VAR_4 != 0)
  return VAR_4;
 if(VAR_2->namelen != VAR_3->namelen) {
  if(VAR_2->namelen < VAR_3->namelen)
   return -1;
  return 1;
 }
 return FUNC_0(VAR_2->zonename, VAR_3->zonename);
}
