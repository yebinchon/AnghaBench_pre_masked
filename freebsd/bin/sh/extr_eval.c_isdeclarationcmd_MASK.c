
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct narg {int text; TYPE_1__* next; } ;
struct TYPE_2__ {struct narg narg; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct narg *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0 == ((void*)0))
  return (0);
 while (FUNC_1(VAR_0->text, "command")) {
  VAR_1 = 1;
  VAR_0 = &VAR_0->next->narg;
  if (VAR_0 == ((void*)0))
   return (0);






 }
 return (FUNC_1(VAR_0->text, "export") ||
     FUNC_1(VAR_0->text, "readonly") ||
     (FUNC_1(VAR_0->text, "local") &&
  (VAR_1 || !FUNC_0("local"))));
}
