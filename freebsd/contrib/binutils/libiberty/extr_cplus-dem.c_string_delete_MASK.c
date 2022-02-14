
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p; int * e; int * b; } ;
typedef TYPE_1__ string ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1 (string *VAR_0)
{
  if (VAR_0->b != ((void*)0))
    {
      FUNC_0 (VAR_0->b);
      VAR_0->b = VAR_0->e = VAR_0->p = ((void*)0);
    }
}
