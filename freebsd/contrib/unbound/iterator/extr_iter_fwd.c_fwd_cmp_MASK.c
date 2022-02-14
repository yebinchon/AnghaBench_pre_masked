
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iter_forward_zone {scalar_t__ dclass; int namelabs; int name; } ;


 int FUNC_0 (int ,int ,int ,int ,int*) ;

int
FUNC_1(const void* VAR_0, const void* VAR_1)
{
 int VAR_2;
 struct iter_forward_zone* VAR_3 = (struct iter_forward_zone*)VAR_0;
 struct iter_forward_zone* VAR_4 = (struct iter_forward_zone*)VAR_1;
 if(VAR_3->dclass != VAR_4->dclass) {
  if(VAR_3->dclass < VAR_4->dclass)
   return -1;
  return 1;
 }
 return FUNC_0(VAR_3->name, VAR_3->namelabs, VAR_4->name, VAR_4->namelabs,
  &VAR_2);
}
