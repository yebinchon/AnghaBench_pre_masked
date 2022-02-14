
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr {int dummy; } ;
struct lltable {struct llentry* (* llt_alloc_entry ) (struct lltable*,int ,struct sockaddr const*) ;} ;
struct llentry {int dummy; } ;


 struct llentry* FUNC_0 (struct lltable*,int ,struct sockaddr const*) ;

struct llentry *
FUNC_1(struct lltable *VAR_0, u_int VAR_1,
    const struct sockaddr *VAR_2)
{

 return (VAR_0->llt_alloc_entry(VAR_0, VAR_1, VAR_2));
}
