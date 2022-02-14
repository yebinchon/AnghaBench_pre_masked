
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct abd_iter {size_t iter_pos; TYPE_3__* iter_abd; } ;
struct TYPE_4__ {size_t abd_offset; } ;
struct TYPE_5__ {TYPE_1__ abd_scatter; } ;
struct TYPE_6__ {TYPE_2__ abd_u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 size_t VAR_0 ;

__attribute__((used)) static inline size_t
FUNC_2(struct abd_iter *VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1->iter_abd));
 return ((VAR_1->iter_abd->abd_u.abd_scatter.abd_offset +
     VAR_1->iter_pos) % VAR_0);
}
