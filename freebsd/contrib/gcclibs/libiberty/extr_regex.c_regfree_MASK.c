
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * translate; scalar_t__ fastmap_accurate; int * fastmap; scalar_t__ used; scalar_t__ allocated; int * buffer; } ;
typedef TYPE_1__ regex_t ;


 int FUNC_0 (int *) ;

void
FUNC_1 (regex_t *VAR_0)
{
  if (VAR_0->buffer != ((void*)0))
    FUNC_0 (VAR_0->buffer);
  VAR_0->buffer = ((void*)0);

  VAR_0->allocated = 0;
  VAR_0->used = 0;

  if (VAR_0->fastmap != ((void*)0))
    FUNC_0 (VAR_0->fastmap);
  VAR_0->fastmap = ((void*)0);
  VAR_0->fastmap_accurate = 0;

  if (VAR_0->translate != ((void*)0))
    FUNC_0 (VAR_0->translate);
  VAR_0->translate = ((void*)0);
}
