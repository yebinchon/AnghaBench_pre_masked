
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int abd_buf; } ;
struct TYPE_7__ {TYPE_1__ abd_linear; } ;
struct TYPE_8__ {int abd_flags; scalar_t__ abd_size; int abd_children; TYPE_2__ abd_u; } ;
typedef TYPE_3__ abd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(abd_t *VAR_3)
{
 if (VAR_3->abd_flags & VAR_0) {
  FUNC_4(VAR_3->abd_u.abd_linear.abd_buf, VAR_3->abd_size);
 } else {
  FUNC_5(VAR_3->abd_u.abd_linear.abd_buf, VAR_3->abd_size);
 }

 FUNC_3(&VAR_3->abd_children);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2, -(int)VAR_3->abd_size);

 FUNC_2(VAR_3);
}
