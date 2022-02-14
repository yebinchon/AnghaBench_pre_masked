
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmap {scalar_t__ tstart; scalar_t__ tend; scalar_t__* member; int name; struct vmap* nxt; } ;
typedef scalar_t__ CORE_ADDR ;


 struct vmap* VAR_0 ;
 int FUNC_0 (char**,char*,int ,char*,scalar_t__*,char*) ;
 int FUNC_1 (char*) ;

char *
FUNC_2 (CORE_ADDR VAR_1)
{
  static char *VAR_2 = ((void*)0);
  struct vmap *VAR_3 = VAR_0;



  if (VAR_3 == ((void*)0))
    return ((void*)0);
  for (VAR_3 = VAR_3->nxt; VAR_3; VAR_3 = VAR_3->nxt)
    if (VAR_3->tstart <= VAR_1 && VAR_1 < VAR_3->tend)
      {
 FUNC_1 (VAR_2);
 FUNC_0 (&VAR_2, "%s%s%s%s",
       VAR_3->name,
       *VAR_3->member ? "(" : "",
       VAR_3->member,
       *VAR_3->member ? ")" : "");
 return VAR_2;
      }
  return ((void*)0);
}
