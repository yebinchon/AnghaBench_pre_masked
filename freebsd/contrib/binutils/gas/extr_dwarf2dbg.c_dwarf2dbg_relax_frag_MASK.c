
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fr_subtype; } ;
typedef TYPE_1__ fragS ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1 (fragS *VAR_0)
{
  int VAR_1, VAR_2;

  VAR_1 = VAR_0->fr_subtype;
  VAR_2 = FUNC_0 (VAR_0);

  return VAR_2 - VAR_1;
}
