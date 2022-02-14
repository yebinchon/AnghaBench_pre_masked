
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {int dummy; } ;
struct rw_args {int ra_flags; int ra_desc; scalar_t__ ra_rw; } ;


 int FUNC_0 (struct rwlock*,int ,int ) ;

void
FUNC_1(void *VAR_0)
{
 struct rw_args *VAR_1;

 VAR_1 = VAR_0;
 FUNC_0((struct rwlock *)VAR_1->ra_rw, VAR_1->ra_desc,
     VAR_1->ra_flags);
}
