
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct internal_syment {scalar_t__ n_value; } ;
struct TYPE_7__ {TYPE_2__* native; } ;
typedef TYPE_3__ coff_symbol_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;
struct TYPE_5__ {struct internal_syment syment; } ;
struct TYPE_6__ {scalar_t__ fix_value; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

bfd_boolean
FUNC_3 (bfd *VAR_3,
       asymbol *VAR_4,
       struct internal_syment *VAR_5)
{
  coff_symbol_type *VAR_6;

  VAR_6 = FUNC_1 (VAR_3, VAR_4);
  if (VAR_6 == ((void*)0) || VAR_6->native == ((void*)0))
    {
      FUNC_0 (VAR_2);
      return VAR_0;
    }

  *VAR_5 = VAR_6->native->u.syment;

  if (VAR_6->native->fix_value)
    VAR_5->n_value = VAR_5->n_value -
      (unsigned long) FUNC_2 (VAR_3);



  return VAR_1;
}
