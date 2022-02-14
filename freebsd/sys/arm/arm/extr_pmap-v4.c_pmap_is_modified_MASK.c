
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pvh_attrs; } ;
struct TYPE_5__ {int oflags; TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t
FUNC_1(vm_page_t VAR_4)
{

 FUNC_0((VAR_4->oflags & VAR_3) == 0,
     ("pmap_is_modified: page %p is not managed", VAR_4));
 if (VAR_4->md.pvh_attrs & VAR_1)
  return (VAR_2);

 return(VAR_0);
}
