
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bindata_build {int length; TYPE_1__* last; TYPE_1__* d; } ;
typedef int rc_uint_type ;
struct TYPE_2__ {int length; int * data; struct TYPE_2__* next; } ;
typedef TYPE_1__ bindata ;
typedef int bfd_byte ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bfd_byte *
FUNC_1 (struct bindata_build *VAR_0, rc_uint_type VAR_1)
{
  bindata *VAR_2;

  VAR_2 = (bindata *) FUNC_0 (sizeof (bindata));

  VAR_2->next = ((void*)0);
  VAR_2->data = (bfd_byte *) FUNC_0 (VAR_1);
  VAR_2->length = VAR_1;

  if (VAR_0->d == ((void*)0))
    VAR_0->d = VAR_2;
  else
    VAR_0->last->next = VAR_2;
  VAR_0->last = VAR_2;
  VAR_0->length += VAR_1;

  return VAR_2->data;
}
