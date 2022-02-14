
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ ucl_object_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0 (ucl_object_t *VAR_2,
  unsigned int VAR_3)
{
 if (VAR_2 != ((void*)0)) {
  VAR_3 &= (0x1 << VAR_1) - 1;
  VAR_3 <<= ((sizeof (VAR_2->flags) * VAR_0) - VAR_1);
  VAR_3 |= VAR_2->flags & ((1 << ((sizeof (VAR_2->flags) * VAR_0) -
    VAR_1)) - 1);
  VAR_2->flags = VAR_3;
 }
}
