
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmap_obstack ;
typedef TYPE_1__* bitmap ;
struct TYPE_3__ {int * obstack; int * current; int first; } ;



__attribute__((used)) static inline void
FUNC_0 (bitmap VAR_0, bitmap_obstack *VAR_1)
{
  VAR_0->first = *(VAR_0->current = ((void*)0));
  VAR_0->obstack = VAR_1;
}
