
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct witness {scalar_t__ w_refcount; scalar_t__ w_line; int * w_file; TYPE_1__* w_class; } ;
struct TYPE_2__ {int lc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct witness *VAR_3)
{

 FUNC_0(VAR_3->w_refcount == 0);
 if (VAR_3->w_class->lc_flags & VAR_0) {
  VAR_1--;
 } else {
  VAR_2--;
 }



 VAR_3->w_file = ((void*)0);
 VAR_3->w_line = 0;
 FUNC_1();
}
