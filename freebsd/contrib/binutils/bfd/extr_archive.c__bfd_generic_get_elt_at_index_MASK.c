
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int symindex ;
struct TYPE_3__ {int file_offset; } ;
typedef TYPE_1__ carsym ;
typedef int bfd ;
struct TYPE_4__ {TYPE_1__* symdefs; } ;


 int * FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;

bfd *
FUNC_2 (bfd *VAR_0, symindex VAR_1)
{
  carsym *VAR_2;

  VAR_2 = FUNC_1 (VAR_0)->symdefs + VAR_1;
  return FUNC_0 (VAR_0, VAR_2->file_offset);
}
