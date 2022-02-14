
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vm_area_struct {TYPE_2__* vm_obj; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {scalar_t__ pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,scalar_t__) ;

int
FUNC_6(struct vm_area_struct *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5)
{
 vm_object_t VAR_6;
 vm_page_t VAR_7;

 VAR_6 = VAR_3->vm_obj;
 if (VAR_6 == ((void*)0) || (VAR_6->flags & VAR_1) != 0)
  return (-VAR_0);
 FUNC_2(VAR_6);
 for (VAR_7 = FUNC_5(VAR_6, FUNC_0(VAR_4));
     VAR_7 != ((void*)0) && VAR_7->pindex < FUNC_0(VAR_4 + VAR_5);
     VAR_7 = FUNC_1(VAR_7, VAR_2))
  FUNC_4(VAR_7);
 FUNC_3(VAR_6);
 return (0);
}
