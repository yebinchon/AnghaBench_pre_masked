
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcount; scalar_t__ fix_size; int offset; struct TYPE_3__* next; } ;
typedef TYPE_1__ Mnode ;
typedef int Mfix ;
typedef int HOST_WIDE_INT ;


 int * VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0 (Mfix *VAR_2)
{
  HOST_WIDE_INT VAR_3 = 0;
  Mnode *VAR_4;

  VAR_0 = VAR_2;

  for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      VAR_4->offset = VAR_3;

      if (VAR_4->refcount > 0)
 VAR_3 += VAR_4->fix_size;
    }
}
