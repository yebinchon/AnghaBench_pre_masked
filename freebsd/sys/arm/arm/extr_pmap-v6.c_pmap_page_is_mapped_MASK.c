
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_8__ {int pv_list; } ;
struct TYPE_6__ {int pv_list; } ;
struct TYPE_7__ {int oflags; int flags; TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(vm_page_t VAR_4)
{
 boolean_t VAR_5;

 if ((VAR_4->oflags & VAR_2) != 0)
  return (VAR_0);
 FUNC_3(&VAR_3);
 VAR_5 = !FUNC_0(&VAR_4->md.pv_list) ||
     ((VAR_4->flags & VAR_1) == 0 &&
     !FUNC_0(&FUNC_2(FUNC_1(VAR_4))->pv_list));
 FUNC_4(&VAR_3);
 return (VAR_5);
}
