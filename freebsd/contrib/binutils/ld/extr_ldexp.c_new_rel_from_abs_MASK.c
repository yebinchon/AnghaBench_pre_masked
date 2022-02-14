
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_4__ {TYPE_2__* section; int * str; scalar_t__ value; int valid_p; } ;
struct TYPE_6__ {TYPE_2__* section; TYPE_1__ result; } ;
struct TYPE_5__ {scalar_t__ vma; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_0 (bfd_vma VAR_2)
{
  VAR_1.result.valid_p = VAR_0;
  VAR_1.result.value = VAR_2 - VAR_1.section->vma;
  VAR_1.result.str = ((void*)0);
  VAR_1.result.section = VAR_1.section;
}
