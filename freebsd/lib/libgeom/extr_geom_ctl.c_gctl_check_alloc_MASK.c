
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int * error; } ;


 int FUNC_0 (struct gctl_req*,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct gctl_req *VAR_1, void *VAR_2)
{

 if (VAR_2 != ((void*)0))
  return;
 FUNC_0(VAR_1, VAR_0);
 if (VAR_1->error == ((void*)0))
  VAR_1->error = VAR_0;
}
