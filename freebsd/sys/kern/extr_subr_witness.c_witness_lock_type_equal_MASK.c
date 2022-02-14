
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct witness {TYPE_1__* w_class; } ;
struct TYPE_2__ {int lc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline int
FUNC_0(struct witness *VAR_2, struct witness *VAR_3)
{

 return ((VAR_2->w_class->lc_flags & (VAR_0 | VAR_1)) ==
  (VAR_3->w_class->lc_flags & (VAR_0 | VAR_1)));
}
