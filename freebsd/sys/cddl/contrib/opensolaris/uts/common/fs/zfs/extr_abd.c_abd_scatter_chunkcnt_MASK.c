
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ abd_offset; } ;
struct TYPE_7__ {TYPE_1__ abd_scatter; } ;
struct TYPE_8__ {scalar_t__ abd_size; TYPE_2__ abd_u; } ;
typedef TYPE_3__ abd_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static inline size_t
FUNC_3(abd_t *VAR_0)
{
 FUNC_0(!FUNC_2(VAR_0));
 return (FUNC_1(
     VAR_0->abd_u.abd_scatter.abd_offset + VAR_0->abd_size));
}
