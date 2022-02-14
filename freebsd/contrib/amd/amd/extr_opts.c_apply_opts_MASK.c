
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ opt; } ;
typedef TYPE_1__ opt_apply ;


 void FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(void (*VAR_0) (opt_apply *, int), opt_apply VAR_1[], int VAR_2)
{
  opt_apply *VAR_3;

  for (VAR_3 = VAR_1; VAR_3->opt; VAR_3++)
    (*VAR_0) (VAR_3, VAR_2);
}
