
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndigi; } ;
typedef TYPE_1__ ax25_digi ;


 int VAR_0 ;

int FUNC_0(const ax25_digi *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 2 * VAR_0;

 return VAR_0 * (2 + VAR_1->ndigi);
}
