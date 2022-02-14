
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int lineno; } ;
struct TYPE_11__ {TYPE_3__ type; } ;
typedef TYPE_4__ etree_type ;
typedef int bfd_vma ;
struct TYPE_9__ {int value; TYPE_1__* section; scalar_t__ valid_p; } ;
struct TYPE_12__ {scalar_t__ phase; TYPE_2__ result; } ;
struct TYPE_8__ {scalar_t__ vma; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_5__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

bfd_vma
FUNC_3 (etree_type *VAR_3, int VAR_4, char *VAR_5)
{
  if (VAR_3 != ((void*)0))
    {
      FUNC_2 (VAR_3);

      if (VAR_0.result.valid_p)
 {
   VAR_0.result.value += VAR_0.result.section->vma;
   return VAR_0.result.value;
 }
      else if (VAR_5 != ((void*)0) && VAR_0.phase != VAR_1)
 {
   VAR_2 = VAR_3->type.lineno;
   FUNC_1 (FUNC_0("%F%S: nonconstant expression for %s\n"), VAR_5);
 }
    }
  return VAR_4;
}
