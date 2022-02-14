
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {unsigned int narg; struct gctl_req* error; struct gctl_req* arg; struct gctl_req* name; } ;


 int FUNC_0 (struct gctl_req*) ;
 struct gctl_req* VAR_0 ;

void
FUNC_1(struct gctl_req *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->narg; VAR_2++) {
  if (VAR_1->arg[VAR_2].name != ((void*)0))
   FUNC_0(VAR_1->arg[VAR_2].name);
 }
 FUNC_0(VAR_1->arg);
 if (VAR_1->error != ((void*)0) && VAR_1->error != VAR_0)
  FUNC_0(VAR_1->error);
 FUNC_0(VAR_1);
}
