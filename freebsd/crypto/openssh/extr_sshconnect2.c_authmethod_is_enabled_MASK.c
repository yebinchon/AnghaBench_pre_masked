
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* enabled; scalar_t__* batch_flag; } ;
typedef TYPE_1__ Authmethod ;



__attribute__((used)) static int
FUNC_0(Authmethod *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return 0;

 if (VAR_0->enabled == ((void*)0) || *VAR_0->enabled == 0)
  return 0;

 if (VAR_0->batch_flag != ((void*)0) && *VAR_0->batch_flag != 0)
  return 0;
 return 1;
}
