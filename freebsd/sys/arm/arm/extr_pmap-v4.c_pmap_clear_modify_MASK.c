
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct TYPE_7__ {int pvh_attrs; } ;
struct TYPE_8__ {int oflags; TYPE_1__ md; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(vm_page_t VAR_2)
{

 FUNC_0((VAR_2->oflags & VAR_1) == 0,
     ("pmap_clear_modify: page %p is not managed", VAR_2));
 FUNC_3(VAR_2);

 if (!FUNC_2(VAR_2))
  return;
 if (VAR_2->md.pvh_attrs & VAR_0)
  FUNC_1(VAR_2, VAR_0);
}
