
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_4__ {int oflags; int flags; int md; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(vm_page_t VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 if ((VAR_3->oflags & VAR_1) != 0)
  return (VAR_4);
 FUNC_3(&VAR_2);
 VAR_4 = FUNC_2(&VAR_3->md, VAR_4);
 if ((VAR_3->flags & VAR_0) == 0) {
  VAR_4 = FUNC_2(FUNC_1(FUNC_0(VAR_3)),
      VAR_4);
 }
 FUNC_4(&VAR_2);
 return (VAR_4);
}
