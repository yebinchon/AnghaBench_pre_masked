
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pv_flags; } ;
struct TYPE_5__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_1(vm_page_t VAR_2)
{

 FUNC_0((VAR_2->oflags & VAR_1) == 0,
     ("pmap_is_referenced: page %p is not managed", VAR_2));
 return ((VAR_2->md.pv_flags & VAR_0) != 0);
}
