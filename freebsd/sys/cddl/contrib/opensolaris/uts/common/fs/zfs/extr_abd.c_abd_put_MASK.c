
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int abd_flags; int abd_children; int abd_size; TYPE_1__* abd_parent; } ;
typedef TYPE_2__ abd_t ;
struct TYPE_7__ {int abd_children; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,TYPE_2__*) ;

void
FUNC_5(abd_t *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(!(VAR_1->abd_flags & VAR_0));

 if (VAR_1->abd_parent != ((void*)0)) {
  (void) FUNC_4(&VAR_1->abd_parent->abd_children,
      VAR_1->abd_size, VAR_1);
 }

 FUNC_3(&VAR_1->abd_children);
 FUNC_1(VAR_1);
}
