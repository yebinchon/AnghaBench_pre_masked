
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct job {int nprocs; TYPE_1__* ps; int pipefail; } ;
struct TYPE_2__ {int status; } ;



__attribute__((used)) static int FUNC_0(const struct job *VAR_0)
{
 int VAR_1, VAR_2;

 if (!VAR_0->pipefail)
  return (VAR_0->ps[VAR_0->nprocs - 1].status);
 for (VAR_1 = VAR_0->nprocs - 1; VAR_1 >= 0; VAR_1--) {
  VAR_2 = VAR_0->ps[VAR_1].status;
  if (VAR_2 != 0)
   return (VAR_2);
 }
 return (0);
}
