
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_pagefault {int flags; } ;
typedef enum mlx5_ib_pagefault_context { ____Placeholder_mlx5_ib_pagefault_context } mlx5_ib_pagefault_context ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline enum mlx5_ib_pagefault_context
 FUNC_0(struct mlx5_pagefault *VAR_2)
{
 return VAR_2->flags & (VAR_0 | VAR_1);
}
