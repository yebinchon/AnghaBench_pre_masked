
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ ucl_object_t ;


 int VAR_0 ;
 int VAR_1 ;

unsigned int
FUNC_0 (const ucl_object_t *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  return 0;
 }

 return (VAR_2->flags >> ((sizeof (VAR_2->flags) * VAR_0) - VAR_1));
}
