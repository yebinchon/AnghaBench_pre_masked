
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zone {scalar_t__ dclass; int namelabs; int name; } ;


 int FUNC_0 (int ,int ,int ,int ,int*) ;

int
FUNC_1(const void* VAR_0, const void* VAR_1)
{


 struct local_zone* VAR_2 = (struct local_zone*)VAR_0;
 struct local_zone* VAR_3 = (struct local_zone*)VAR_1;
 int VAR_4;
 if(VAR_2->dclass != VAR_3->dclass) {
  if(VAR_2->dclass < VAR_3->dclass)
   return -1;
  return 1;
 }
 return FUNC_0(VAR_2->name, VAR_2->namelabs, VAR_3->name, VAR_3->namelabs, &VAR_4);
}
