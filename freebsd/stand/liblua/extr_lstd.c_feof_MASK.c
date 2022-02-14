
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; scalar_t__ size; } ;
typedef TYPE_1__ FILE ;



int
FUNC_0(FILE *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return 1;

 return (VAR_0->offset >= VAR_0->size);
}
