
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_4__ {int pv_flags; } ;
struct TYPE_5__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(vm_page_t VAR_3)
{

 FUNC_0((VAR_3->oflags & VAR_1) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_3));
 if (VAR_3->md.pv_flags & VAR_0) {
  FUNC_1(&VAR_2);
  VAR_3->md.pv_flags &= ~VAR_0;
  FUNC_2(&VAR_2);
  return (1);
 }
 return (0);
}
