
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_4__ {int oflags; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(vm_page_t VAR_2)
{

 FUNC_0((VAR_2->oflags & VAR_1) == 0,
     ("pmap_ts_referenced: page %p is not managed", VAR_2));
 return (FUNC_1(VAR_2, VAR_0));
}
