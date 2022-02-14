
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
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(vm_page_t VAR_4)
{
 boolean_t VAR_5;

 FUNC_0((VAR_4->oflags & VAR_2) == 0,
     ("pmap_is_modified: page %p is not managed", VAR_4));




 if (!FUNC_1(VAR_4))
  return (VAR_0);

 FUNC_3(&VAR_3);
 VAR_5 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(&VAR_3);
 return (VAR_5);
}
