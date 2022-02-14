
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nval; } ;
struct TYPE_3__ {scalar_t__* narg; struct TYPE_3__* nnext; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ Cell ;


 scalar_t__ FUNC_0 (int ,char const*) ;

int FUNC_1(const char *VAR_0)
{
 extern Node *VAR_1;
 Node *VAR_2 = VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_2 != ((void*)0); VAR_2 = VAR_2->nnext, VAR_3++)
  if (FUNC_0(((Cell *)(VAR_2->narg[0]))->nval, VAR_0) == 0)
   return VAR_3;
 return -1;
}
