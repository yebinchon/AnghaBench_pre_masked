
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obstack; int * heads; int * elements; } ;
typedef TYPE_1__ bitmap_obstack ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1 (bitmap_obstack *VAR_1)
{
  if (!VAR_1)
    VAR_1 = &VAR_0;

  VAR_1->elements = ((void*)0);
  VAR_1->heads = ((void*)0);
  FUNC_0 (&VAR_1->obstack, ((void*)0));
}
