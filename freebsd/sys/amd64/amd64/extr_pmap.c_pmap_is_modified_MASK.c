
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int boolean_t ;
struct TYPE_5__ {int oflags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

boolean_t
FUNC_3(vm_page_t VAR_3)
{

 FUNC_0((VAR_3->oflags & VAR_2) == 0,
     ("pmap_is_modified: page %p is not managed", VAR_3));




 if (!FUNC_1(VAR_3))
  return (VAR_0);
 return (FUNC_2(VAR_3, VAR_0, VAR_1));
}
