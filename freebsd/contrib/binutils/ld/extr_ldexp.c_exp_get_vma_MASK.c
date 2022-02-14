
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int etree_type ;
typedef int bfd_vma ;
struct TYPE_3__ {int value; scalar_t__ valid_p; } ;
struct TYPE_4__ {scalar_t__ phase; TYPE_1__ result; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;

bfd_vma
FUNC_3 (etree_type *VAR_2, bfd_vma VAR_3, char *VAR_4)
{
  if (VAR_2 != ((void*)0))
    {
      FUNC_2 (VAR_2);
      if (VAR_0.result.valid_p)
 return VAR_0.result.value;
      else if (VAR_4 != ((void*)0) && VAR_0.phase != VAR_1)
 FUNC_1 (FUNC_0("%F%S nonconstant expression for %s\n"), VAR_4);
    }
  return VAR_3;
}
